//
//  GFView.h
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#ifndef __GameFrameWork__GFView__
#define __GameFrameWork__GFView__

#include <iostream>
#include "GFMsgQueue.h"
#include "cocos2d.h"
using namespace cocos2d;

class GFView:public CCLayer
{
public:
    virtual void  processEvent(GFEvent *event) = 0;
    void regEventObserver(std::string id, CCObject * actor);
    void emmitCommand(int type, std::string _actor, std::string id, std::string para);
};
#endif /* defined(__GameFrameWork__GFView__) */
