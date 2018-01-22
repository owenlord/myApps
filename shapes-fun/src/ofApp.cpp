#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
    
    float time = ofGetElapsedTimef();
    
    for (int i = 1; i < 500; i++) {
        ofNoFill();
        ofSetColor(127 + 127 * sin(i * 0.01 + time),
                   127 + 127 * sin(i * 0.011 + time),
                   127 + 127 * sin(i * 0.012 + time));
        ofDrawCircle(500 + 100 * sin(i * 0.02 + time), 400 + 40 * sin (i * 0.005 + time), 60 + i);
    }
    
    
//    for (int i = 1; i < 9999; i++) {
//        ofSetColor(127 + 127 * sin(i * 0.01 + time),
//                   127 + 127 * sin(i * 0.011 + time),
//                   127 + 127 * sin(i * 0.012 + time));
//        ofDrawCircle(500 + 100 * sin(i * 0.02 + time), 50 + i, 50 + 40 * sin (i * 0.005 + time));
//    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
