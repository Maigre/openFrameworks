#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetLogLevel(OF_LOG_VERBOSE);
	image.loadImage("images/bikers.jpg");
	ofBackground(255,255,255);
	ofSetColor(255,255,255);
}


//--------------------------------------------------------------
void testApp::update(){
}

//--------------------------------------------------------------
void testApp::draw(){
	image.draw(20,20);
}

