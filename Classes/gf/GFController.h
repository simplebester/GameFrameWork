//
//  GFController.h
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#ifndef __GameFrameWork__GFController__
#define __GameFrameWork__GFController__

#include <iostream>
#include "GFMsgQueue.h"

#include "cocos2d.h"
USING_NS_CC;

class GFController:public CCScene
{
public:
    GFController();
    
    virtual void processCommand(GFCommand command) = 0;
    virtual void processEvent(GFEvent event) = 0;
    
    virtual void update(float dt);
    void emmitEvent(int type, std::string id, std::string para);
private:
    CCScene * currScene;
    
};
#endif /* defined(__GameFrameWork__GFController__) */
