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
    virtual void  handleEvent(GFEvent event) = 0;
    void trigerEvent();
};
#endif /* defined(__GameFrameWork__GFView__) */
