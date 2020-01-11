#pragma once

#include <sstream>

#include "ofMain.h"

#include "ofxIrrlicht.h"

class ofApp : public ofBaseApp{

	public:
		void draw(){

		if(ofGetFrameNum()==10){



			IrrlichtDevice *device =
				createDevice( video::EDT_SOFTWARE, dimension2d<u32>(640, 480), 16,
					false, false, false, 0);

			if (!device)
				return;
				// return 1;

			/*
			Set the caption of the window to some nice text. Note that there is an
			'L' in front of the string. The Irrlicht Engine uses wide character
			strings when displaying text.
			*/
			device->setWindowCaption(L"Hello World! - Irrlicht Engine Demo");

			/*
			Get a pointer to the VideoDriver, the SceneManager and the graphical
			user interface environment, so that we do not always have to write
			device->getVideoDriver(), device->getSceneManager(), or
			device->getGUIEnvironment().
			*/
			IVideoDriver* driver = device->getVideoDriver();
			ISceneManager* smgr = device->getSceneManager();
			IGUIEnvironment* guienv = device->getGUIEnvironment();

			/*
			We add a hello world label to the window, using the GUI environment.
			The text is placed at the position (10,10) as top left corner and
			(260,22) as lower right corner.
			*/
			guienv->addStaticText(L"Hello World! This is the Irrlicht Software renderer!",
				rect<s32>(10,10,260,22), true);

			/*
			To show something interesting, we load a Quake 2 model and display it.
			We only have to get the Mesh from the Scene Manager with getMesh() and add
			a SceneNode to display the mesh with addAnimatedMeshSceneNode(). We
			check the return value of getMesh() to become aware of loading problems
			and other errors.

			Instead of writing the filename sydney.md2, it would also be possible
			to load a Maya object file (.obj), a complete Quake3 map (.bsp) or any
			other supported file format. By the way, that cool Quake 2 model
			called sydney was modelled by Brian Collins.
			*/
			// IAnimatedMesh* mesh = smgr->getMesh("../../media/sydney.md2");
			IAnimatedMesh* mesh = smgr->getMesh("data/media/sydney.md2");
			if (!mesh)
			{
				device->drop();
				return ;//1;
			}
			IAnimatedMeshSceneNode* node = smgr->addAnimatedMeshSceneNode( mesh );

			/*
			To let the mesh look a little bit nicer, we change its material. We
			disable lighting because we do not have a dynamic light in here, and
			the mesh would be totally black otherwise. Then we set the frame loop,
			such that the predefined STAND animation is used. And last, we apply a
			texture to the mesh. Without it the mesh would be drawn using only a
			color.
			*/
			if (node)
			{
				node->setMaterialFlag(EMF_LIGHTING, false);
				node->setMD2Animation(scene::EMAT_STAND);
				// node->setMaterialTexture( 0, driver->getTexture("../../media/sydney.bmp") );
				node->setMaterialTexture( 0, driver->getTexture("data/media/sydney.bmp") );
			}

			/*
			To look at the mesh, we place a camera into 3d space at the position
			(0, 30, -40). The camera looks from there to (0,5,0), which is
			approximately the place where our md2 model is.
			*/
			smgr->addCameraSceneNode(0, vector3df(0,30,-40), vector3df(0,5,0));

			/*
			Ok, now we have set up the scene, lets draw everything: We run the
			device in a while() loop, until the device does not want to run any
			more. This would be when the user closes the window or presses ALT+F4
			(or whatever keycode closes a window).
			*/
			while(device->run())
			{
				/*
				Anything can be drawn between a beginScene() and an endScene()
				call. The beginScene() call clears the screen with a color and
				the depth buffer, if desired. Then we let the Scene Manager and
				the GUI Environment draw their content. With the endScene()
				call everything is presented on the screen.
				*/
				driver->beginScene(true, true, SColor(255,100,101,140));

				smgr->drawAll();
				guienv->drawAll();

				driver->endScene();
			}

			/*
			After we are done with the render loop, we have to delete the Irrlicht
			Device created before with createDevice(). In the Irrlicht Engine, you
			have to delete all objects you created with a method or function which
			starts with 'create'. The object is simply deleted by calling ->drop().
			See the documentation at irr::IReferenceCounted::drop() for more
			information.
			*/
			device->drop();

			// return 0;

		}

		}


};
