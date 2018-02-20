#pragma once
#include <sstream>
#include "ofMain.h"
// #include "ofxs373A~.h"
#include "ofxIrrlicht.h"


class ofApp : public ofBaseApp{

	public:
		// irrlicht init
		irr::video::E_DRIVER_TYPE 			driverType;
		core::dimension2du 					videoDim;
		IrrlichtDevice 						*device;
		video::IVideoDriver					*driver;
		scene::ISceneManager				*smgr;
		scene::ICameraSceneNode 			*camera ;
		scene::ITerrainSceneNode			*terrain;


		void setup(){

			setupIrr();

		}

		void update(){
				device->run();
		}



		void draw(){

			device->draw();

		}


};
