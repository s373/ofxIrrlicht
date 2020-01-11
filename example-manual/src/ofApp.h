
// advanced example with manual control and audio and vr immersion

#pragma once

#include <sstream>
#include "ofMain.h"
#include "ofxs373A~.h"
#include "ofxIrrlicht.h"

class ofApp : public ofBaseApp{

	public:
		// audio
		s373AVSpeak * aspeak;
		s373AVDna * adna;
		s373AVImage * aimage;
		float			volume;
		ofSoundStream	sound;
		s373AVRedNoise  * ared, * rnoise2;
		s373AVManager	audio;

		// irrlicht init
		irr::video::E_DRIVER_TYPE 			driverType;
		core::dimension2du 					videoDim;
		IrrlichtDevice 						*device;
		video::IVideoDriver					*driver;
		scene::ISceneManager				*smgr;
		// OculusRenderer 						oculusRenderer;
		scene::ICameraSceneNode 			*camera ;
		scene::ITerrainSceneNode			*terrain;
		int									frames;


		void setup(){

			setupIrr();
			setupAudio();

		}

		void setupAudio(){

						audio.setup(44100, 512, 0, 1);

						aspeak = audio.addSpeak(4, "hi, i'm an alien. how are you? this one is for testing the shit out of this. and this one too. ooooooooh.");

						aspeak->setVolume(1);
						aspeak->setSpeakSpeed(1.2);

						ared = audio.addRedNoise(250, 0.7, 0, 0., 0);

						adna = audio.addDna( aspeak->getBuffer() ,
					   	 //tri1->getBuffer() ,
					   					1, // speed
					   					0.01, // mprob
					   					0.08 // mamount
					   					);

						adna->setVolume(1);
						adna->setCalcNumBuffers(1);
						//adna->setCalcNumBuffers(5);



						// aimage = audio.addImage(BS-1, 10, &xen->bufferdata);
						aimage = audio.addImage(256, 160, s373AVImage::IUP, &audio.audiooutchannel, NULL);
						// aimage = audio.addImage(BS, 1, &audio.audiooutchannel, NULL);
						// aimage = audio.addImage(BS, 100, &xen->bufferdata, NULL);
						// aimage = audio.addImage(64, 64, s373AVImage::I2,
						// &audio.audiooutchannel, &xen->bufferdata);
						aimage->uploadom=1;

						audio.audiooutchannel.setCalcNormalize(true);

						volume = 0.87f;
						sound.listDevices();
						// sound.setDeviceID(3);
						sound.setDeviceID(6);
						// sound.setup(this, 2, 0, 44100, 64, 4);
						sound.setup(this, 2, 0, 44100, 512, 4);
						ofSetFrameRate(30);
		}


		void audioOut(float * outpt, int bufferSize, int nChannels){
			float * audiosys = audio.audioupdate();

			for (int i = 0; i < bufferSize; i++){
				float as = audiosys[i] * volume;
				 outpt[i*nChannels    ] = as ;
				 outpt[i*nChannels + 1] =  as ;
			}

		}






		void setupIrr(){
			int width = 1280;//3280;
			int height = 720;//720;

			videoDim.set(width,height);

			driverType = video::EDT_OPENGL;

			device = createDevice(driverType, videoDim, 32, false, false, true );
			driver = device->getVideoDriver();
			smgr = device->getSceneManager();
			// Get the window handle for Oculus Rift SDK
			void *window = 0;

			if(driverType == irr::video::EDT_DIRECT3D9)
				window = driver->getExposedVideoData().D3D9.HWnd;
			else if(driverType == irr::video::EDT_OPENGL) // OpenGL under windows - no idea how it's done in Linux
				window = driver->getExposedVideoData().OpenGLWin32.HWnd;


			// Initialize Oculus Rift Renderer - world scale set to normal
			oculusRenderer.setup(window, driver, smgr, 1.0f);


			// FPS camera with no vertical movement.
			camera = smgr->addCameraSceneNodeFPS(0, 100.0f, 0.5f, -1,
				0, 0, true,
				0.f, false,
				true);

			camera->setPosition(irr::core::vector3df(10, 10.0f, 0));
			camera->setTarget(irr::core::vector3df(10, 10.0f, 100.0f));


			// add stuff
			terrain = smgr->addTerrainSceneNode(
				// "media/terrain.png",
				"data/media/terrain.png",
				0,					// parent node
				-1,					// node id
				core::vector3df(0.f, -20.f, 0.f),		// position
				core::vector3df(0.f, 0.f, 0.f),		// rotation
				// core::vector3df(1.f, 0.5f, 1.f),	// scale
				core::vector3df(100.f, 50.5f, 100.f),	// scale
				video::SColor ( 255, 255, 255, 255 ),	// vertexColor
				5,					// maxLOD
				scene::ETPS_17,				// patchSize
				4					// smoothFactor
				);

			terrain->setMaterialFlag(video::EMF_LIGHTING, false);
			// terrain->setMaterialFlag(video::EMF_LIGHTING, true);
			terrain->setMaterialTexture(0,
					// driver->getTexture("media/terraintex.png"));
					driver->getTexture("data/media/terraintex.png"));


			/* Enable this to try linking head to a rotating animator. Could be used to link player to plane's cockpit etc
			*/


			// irr::scene::ISceneNode *rotatingNode = smgr->addEmptySceneNode();
			// rotatingNode->setPosition(irr::core::vector3df(10, 50, 10));
			// irr::scene::ISceneNode *rotatingChild = smgr->addEmptySceneNode(rotatingNode);
			// rotatingChild->setPosition(irr::core::vector3df(0.0f,4.0f, 0.0f));
			// irr::scene::ISceneNodeAnimator *anim = smgr->createRotationAnimator(irr::core::vector3df(1.0f,0,0.0f));
			// rotatingNode->addAnimator(anim);
			// anim->drop();
			//
			// oculusRenderer.linkHeadNode(rotatingChild);
			// */

			frames = 0;




		}



		void update(){

				// device->run();

		}





		void draw(){


				driver->beginScene(true, true, irr::video::SColor(255, 150, 140, 255));

				camera->OnAnimate(device->getTimer()->getTime());
				camera->updateAbsolutePosition();

				oculusRenderer.drawAll(camera->getAbsolutePosition(), camera->getRotation().Y,
				irr::video::SColor(255, 150, 140, 255));

				driver->endScene();

				if(++frames == 100)
				{
					irr::core::stringw title = L"IrrOculusVR [FPS: ";
					title += driver->getFPS();
					title += "]";
					device->setWindowCaption(title.c_str());

					frames = 0;
				}

			// mixing of graphics crashes
			// ofBackground(ofRandom(255));


		}


};
