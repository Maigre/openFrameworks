#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofxAndroid.h"

class testApp : public ofxAndroidApp{
	
	public:
		
		void setup();
		void update();
		void draw();

		ofImage image;
};

#endif	

