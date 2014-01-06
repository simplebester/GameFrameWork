//
//  GFModel.h
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#ifndef __GameFrameWork__GFModel__
#define __GameFrameWork__GFModel__

#include <iostream>
#include "GFMsgQueue.h"
#include "cocos2d.h"

USING_NS_CC;


class GFModel: public CCObject
{
public:
    virtual void processCommand(GFCommand *command) = 0 ;
    virtual void processEvent(GFEvent *event) = 0;
    void emmitEvent(int type, std::string id, std::string para);
protected:
    void regEventObserver(std::string id, CCObject * actor);
    void regCommandObserver(std::string id, CCObject * actor);
};
#endif /* defined(__GameFrameWork__GFModel__) */
