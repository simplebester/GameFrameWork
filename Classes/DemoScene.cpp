//
//  DemoScene.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-6.
//
//

#include "DemoScene.h"


DemoScene::DemoScene()
{
    CCScene::init();
    demoLayer = new DemoLayer();
	this->addChild(demoLayer, 1);
    
    return;
}

