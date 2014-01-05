//
//  GFMsgQueue.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#include "GFMsgQueue.h"

GFMsgQueueMgr::GFMsgQueueMgr
{
    commands = new CCArray();
    commands.init();
    
    events = new CCArray();
    events.init();

}
GFMsgQueueMgr::~GFMsgQueueMgr
{
    delete commands;
    commands = NULL;
    
    delete events;
    events = NULL;
}

GFMsgQueueMgr* GFMsgQueueMgr::getInstance()
{
    if (instance == NULL) {
        instance = new GFMsgQueueMgr();
    }
    return instance;
}

void GFMsgQueueMgr::pushMsg(GFCommand command)
{
    commands.addObject(command);
}
void GFMsgQueueMgr::pushEvent(GFEvent event)
{
    events.addObject(event);
}
void GFMsgQueueMgr::regObserver(int type, int id)
{
    
}