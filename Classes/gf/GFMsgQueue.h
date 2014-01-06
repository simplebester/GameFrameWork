//
//  GFMsgQueue.h
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#ifndef __GameFrameWork__GFMsgQueue__
#define __GameFrameWork__GFMsgQueue__

#include <iostream>
#include <string>
#include <map>
#include "cocos2d.h"
using namespace cocos2d;


class GFEvent: public CCObject
{
public:
    GFEvent(int _type, std::string _id, std::string _para)
    {
        type = _type;
        id = _id;
        para = _para;
    }
    int type;
    std::string id;
    std::string para;
};
class GFCommand: public CCObject
{
public:
    GFCommand(int _type, std::string _actor, std::string _id, std::string _para)
    {
        type = _type;
        actor = _actor;
        id = _id;
        para = _para;
    }
    int type;
    std::string actor;
    std::string id;
    std::string para;
};
class GFMsgQueueMgr
{
public:
    static GFMsgQueueMgr * getInstance();
    void pushCommand(GFCommand *command);
    void pushEvent(GFEvent *event);
    GFCommand* popCommand();
    GFEvent* popEvent();
    
    void regCommandObserver(std::string id, CCObject * actor);
    void regEventObserver(std::string id, CCObject * actor);
    std::map<std::string, CCObject*> * getCommandObservers();
    std::map<std::string, CCObject*> * getEventObservers();
    
protected:
    GFMsgQueueMgr();
    ~GFMsgQueueMgr();
private:
    CCArray * commands;
    CCArray * events;
    std::map<std::string, CCObject*> * commandObservers;
    std::map<std::string, CCObject*> * eventObservers;
    static GFMsgQueueMgr * instance;
    
};
#endif /* defined(__GameFrameWork__GFMsgQueue__) */
