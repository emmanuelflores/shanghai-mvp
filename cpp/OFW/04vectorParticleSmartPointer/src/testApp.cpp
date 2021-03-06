#include "testApp.h"

//ofPtr
//std::shared_ptr<int> p1(new int(5));
/*
 SomeSmartPtr<MyObject> ptr(new MyObject());
 ptr->DoSomething();
 */

//http://www.codeproject.com/Articles/8394/Smart-Pointers-to-boost-your-code
//why cpp is so nice? :-)
//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(30, 30, 30);
    ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofEnableAlphaBlending();
    //one particle
    //mParticle=Particle(200.0f,200.0f,30.0f);
    
    //more
    for(unsigned int i=0;i<amount;i++){
		float x = ofRandom(ofGetWindowWidth());
		float y = ofRandom(ofGetWindowHeight());
		float r=ofRandom(10.0f,20.0f);
        float xspeed = (int)ofRandom(2,5);
        float yspeed = (int)ofRandom(2,5);
		//mPCluster.push_back(new Particle(x,y,r,xspeed,yspeed));
        mPCluster.push_back(smartParticle (new Particle(x,y,r,xspeed,yspeed)));
	}

}

//--------------------------------------------------------------
void testApp::update(){
    //mParticle.update();
    for(pIter iter=mPCluster.begin();
		iter!=mPCluster.end();++iter){
		(*iter)->update();
	}
    
}

//--------------------------------------------------------------
void testApp::draw(){
    //mParticle.draw();
    for(pIter iter=mPCluster.begin();
		iter!=mPCluster.end();++iter){
		(*iter)->draw();
	}
}


//--------------------------------------------------------------
void testApp::addParticle(int amt){
    
}

//--------------------------------------------------------------
void testApp::killParticles(){
    mPCluster.clear();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

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