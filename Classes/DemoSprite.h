//
//  DemoSprite.h
//  GameFrameWork
//
//  Created by Corly on 14-1-6.
//
//

#ifndef __GameFrameWork__DemoSprite__
#define __GameFrameWork__DemoSprite__

#include <iostream>
#include "GFModel.h"

class  DemoSprite: public GFModel
{
public:
    DemoSprite();
    virtual void processCommand(GFCommand *command);
    virtual void processEvent(GFEvent *event);
private:
    CCPoint position;
    
};
#endif /* defined(__GameFrameWork__DemoSprite__) */
