//
//  GFScene.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//
//

#include "GFScene.h"

CCScene *GFScene::scene()
{
    CCScene *scene = NULL;
    do {
        // 'scene' is an autorelease object
        scene = CCScene::create();
        CC_BREAK_IF(! scene);
        // 'layer' is an autorelease object
        Login *layer = GFScene::create();
        CC_BREAK_IF(! layer);
        // add layer as a child to scene
        scene->addChild(layer);
    } while (0);
    // return the scene
    return scene;
}