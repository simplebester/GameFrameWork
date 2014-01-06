//
//  DemoScene.h
//  GameFrameWork
//
//  Created by Corly on 14-1-6.
//
//

#ifndef __GameFrameWork__DemoScene__
#define __GameFrameWork__DemoScene__

#include <iostream>
#include "GFView.h"
#include "DemoLayer.h"
class DemoScene: public CCScene
{
public:
    DemoScene();
    DemoLayer * demoLayer;
};

#endif /* defined(__GameFrameWork__DemoScene__) */
