//
//  GFModel.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#include "GFModel.h"
#include "GFMsgQueue.h"


void GFModel::emmitEvent(int type, std::string id, std::string para)
{
    GFEvent * event = new GFEvent(type, id, para);
    GFMsgQueueMgr::getInstance()->pushEvent(event);
}

void GFModel::regEventObserver(std::string id, CCObject * actor)
{
    GFMsgQueueMgr::getInstance()->regEventObserver(id, actor);
}
void GFModel::regCommandObserver(std::string id, CCObject * actor)
{
    GFMsgQueueMgr::getInstance()->regCommandObserver(id, actor);
}