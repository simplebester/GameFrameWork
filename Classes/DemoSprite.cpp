//
//  DemoSprite.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-6.
//
//

#include "DemoSprite.h"

DemoSprite::DemoSprite()
{
    this->regCommandObserver("ui_move", this);
}
void DemoSprite::processCommand(GFCommand *command)
{
    CCLog("in DemoSprite::processCommand");
    if (command->id == "ui_move") {
        this->position.x += 10;
    }
    
    this->emmitEvent(1, "model_move", "");

}
void DemoSprite::processEvent(GFEvent *event)
{
    CCLog("in DemoSprite::processEvent");
}