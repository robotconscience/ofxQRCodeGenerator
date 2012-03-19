#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    rcQRCode = qrCodeGenerator.generate( "http://www.robotconscience.com", 250 );
    OFQRCode = qrCodeGenerator.generate( "http://www.openframeworks.cc", 250 );
    labQRCode = qrCodeGenerator.generate( "http://rockwellgroup.com/lab-notes", 250 );
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255);
    ofSetRectMode( OF_RECTMODE_CENTER ); // center the image
    rcQRCode.draw(ofGetWidth()/2 - 300,ofGetHeight()/2);
    OFQRCode.draw(ofGetWidth()/2,ofGetHeight()/2); // draw smack in the middle
    labQRCode.draw(ofGetWidth()/2 + 300,ofGetHeight()/2); 
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}