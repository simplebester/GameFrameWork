//
//  DemoController.h
//  GameFrameWork
//
//  Created by Corly on 14-1-6.
//
//

#ifndef __GameFrameWork__DemoController__
#define __GameFrameWork__DemoController__

#include <iostream>
#include "GFController.h"
#include "DemoLayer.h"
#include "DemoSprite.h"
class  DemoController: public GFController
{
public:
    DemoController();
    bool init();
    
    virtual void processCommand(GFCommand command);
    virtual void processEvent(GFEvent event);
    DemoLayer * demoLayer;
    DemoSprite * demoSprite;
};
#endif /* defined(__GameFrameWork__DemoController__) */
