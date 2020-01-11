#include "ofMain.h"
#include "ofApp.h"

int main( ){

	ofApp *ofapp = new ofApp();

	ofapp->setup();

	while(1){

		ofapp->update();
		ofapp->draw();
	}

	std::exit(0);

}
