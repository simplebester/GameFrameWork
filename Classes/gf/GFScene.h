//
//  GFScene.h
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//
//

#ifndef __GameFrameWork__GFScene__
#define __GameFrameWork__GFScene__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;

class GFScene:public CCLayer
{
public:
    virtual bool init() = 0;
    void regEventObserver(std::string id, CCObject * actor);
};

#endif /* defined(__GameFrameWork__GFScene__) */
