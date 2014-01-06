//
//  DemoController.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-6.
//
//

#include "DemoController.h"

DemoController::DemoController()
{
    init();
}
bool DemoController::init()
{
    CCScene::init();
    demoLayer = new DemoLayer();
	this->addChild(demoLayer, 1);
    
    demoSprite = new DemoSprite();
    

    return true;
}


void DemoController::processCommand(GFCommand command)
{
    
}
void DemoController::processEvent(GFEvent event)
{
    
}