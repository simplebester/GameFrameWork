//
//  DemoLayer.h
//  GameFrameWork
//
//  Created by Corly on 14-1-6.
//
//

#ifndef __GameFrameWork__DemoLayer__
#define __GameFrameWork__DemoLayer__

#include <iostream>
#include "GFView.h"
#include "cocos2d.h"

class  DemoLayer: public GFView
{
public:
    DemoLayer();
    virtual void  processEvent(GFEvent *event);
    void ccTouchesBegan(CCSet *pTouches, CCEvent *pEvent);
    CCSprite* pSprite;
};
#endif /* defined(__GameFrameWork__DemoLayer__) */
