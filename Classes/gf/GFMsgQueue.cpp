//
//  GFMsgQueue.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#include "GFMsgQueue.h"
GFMsgQueueMgr *  GFMsgQueueMgr::instance = NULL;

GFMsgQueueMgr::GFMsgQueueMgr()
{
    commands = new CCArray();
    commands->init();
    
    events = new CCArray();
    events->init();
    
    commandObservers = new std::map<std::string, CCObject*>();
    eventObservers   = new std::map<std::string, CCObject*>();

}
GFMsgQueueMgr::~GFMsgQueueMgr()
{
    delete commands;
    commands = NULL;
    
    delete events;
    events = NULL;
    
    delete commandObservers;
    commandObservers = NULL;
    
    delete eventObservers;
    eventObservers = NULL;
}

GFMsgQueueMgr* GFMsgQueueMgr::getInstance()
{
    if (instance == NULL) {
        instance = new GFMsgQueueMgr();
    }
    return instance;
}

void GFMsgQueueMgr::pushCommand(GFCommand * command)
{
    commands->addObject(command);
}
void GFMsgQueueMgr::pushEvent(GFEvent *event)
{
    events->addObject(event);
}
void GFMsgQueueMgr::regCommandObserver(std::string id, CCObject * actor)
{
    commandObservers->insert(std::pair<std::string, CCObject*>(id, actor));
}
void GFMsgQueueMgr::regEventObserver(std::string id, CCObject * actor)
{
    eventObservers->insert(std::pair<std::string, CCObject*>(id, actor));
}

std::map<std::string, CCObject*> * GFMsgQueueMgr::getCommandObservers()
{
    return commandObservers;
}
std::map<std::string, CCObject*> * GFMsgQueueMgr::getEventObservers()
{
    return eventObservers;
}

GFCommand* GFMsgQueueMgr::popCommand()
{
    if (commands->count() >0 ) {
        GFCommand* command = (GFCommand*)
        commands->objectAtIndex(commands->count()-1);
        commands->fastRemoveObjectAtIndex(commands->count()-1);
        return command;
    }
    return NULL;
}
GFEvent* GFMsgQueueMgr::popEvent()
{
    if (events->count() >0 ) {
        GFEvent* event = (GFEvent*)
        events->objectAtIndex(events->count()-1);
        events->fastRemoveObjectAtIndex(events->count()-1);
        return event;
    }
    return NULL;
}
