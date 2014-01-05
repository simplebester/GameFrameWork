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
    GFCommand(int _type, std::string _id, std::string _para)
    {
        type = _type;
        id = _id;
        para = _para;
    }
    int type;
    std::string id;
    std::string para;
};
class GFMsgQueueMgr
{
public:
    static void getInstance();
    void pushMsg(GFCommand command);
    void pushEvent(GFEvent event);
    void regObserver(int type, int id);
protected:
    GFMsgQueueMgr();
    ~GFMsgQueueMgr();
private:
    CCArray * commands;
    CCArray * events;
    static GFMsgQueueMgr * instance;
};
#endif /* defined(__GameFrameWork__GFMsgQueue__) */
