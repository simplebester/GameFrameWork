//
//  DemoLayer.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-6.
//
//

#include "DemoLayer.h"

DemoLayer::DemoLayer()
{
    pSprite = CCSprite::create("HelloWorld.png");
    pSprite->setPosition(ccp(100, 200));
    this->addChild(pSprite);
    
    setTouchEnabled(true);
    
    this->regEventObserver("model_move", this);
}
void  DemoLayer::processEvent(GFEvent *event)
{
    CCLog("in DemoLayer::processEvent");
    if (event->id == "model_move") {
        pSprite->setPositionX(pSprite->getPositionX()+10);
    }
}
void DemoLayer::ccTouchesBegan(CCSet *pTouches, CCEvent *pEvent)
{
    CCLog("in DemoLayer::ccTouchesBegan");
    this->emmitCommand(1, "sdf", "ui_move", "");
}