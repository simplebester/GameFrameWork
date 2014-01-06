//
//  GFController.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#include "GFController.h"
#include "GFMsgQueue.h"
#include "GFModel.h"
#include "cocos2d.h"
#include "GFView.h"
GFController::GFController()
{
    this->scheduleUpdate();
}
void GFController::emmitEvent(int type, std::string id, std::string para)
{
    GFEvent * event = new GFEvent(type, id, para);
    GFMsgQueueMgr::getInstance()->pushEvent(event);
}

void GFController::update(float dt)
{
    //CCLog("in GFController::update()");
    
    GFEvent *event = GFMsgQueueMgr::getInstance()->popEvent();
    while (event)
    {
        CCLog("curr event id %s", event->id.c_str());
        std::map<std::string,CCObject*> * eventObservers = GFMsgQueueMgr::getInstance()->getEventObservers();
        std::map<std::string,CCObject*>::iterator it=eventObservers->begin();
        for(;it!=eventObservers->end();++it)
        {
            CCLog("observers id is %s", it->first.c_str());
            if (event->id != it->first) {
                continue;
            }
            GFView * model = (GFView*)it->second;
            model->processEvent(event);
        }
        event = GFMsgQueueMgr::getInstance()->popEvent();
    }
    
    GFCommand *command = GFMsgQueueMgr::getInstance()->popCommand();
    while (command)
    {
        CCLog("%s", command->id.c_str());
        std::map<std::string,CCObject*> * commandObservers = GFMsgQueueMgr::getInstance()->getCommandObservers();
        
        std::map<std::string,CCObject*>::iterator it=commandObservers->begin();
        for(;it!=commandObservers->end();++it)
        {
            CCLog("%s", it->first.c_str());
            if (command->id != it->first) {
                continue;
            }
            GFModel * model = (GFModel*)it->second;
            model->processCommand(command);
        }
        command = GFMsgQueueMgr::getInstance()->popCommand();
    }
}
