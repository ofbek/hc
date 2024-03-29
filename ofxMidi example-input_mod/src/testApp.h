#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofxMidi.h"

class testApp : public ofSimpleApp, public ofxMidiListener{
	
public:
	
	void setup();
	void update();
	void draw();
	
	void keyPressed  (int key);
	void keyReleased (int key);
	
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased();
	
	void newMidiMessage(ofxMidiEventArgs& eventArgs);
	
	// vars
	int port;
	int id;
	int value;
    int controller;
	double timestamp;
	char msg[255];
	
	// midi addon
	ofxMidiIn	midiIn;

};

#endif

