//
//  GFScene.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//
//

#include "GFScene.h"
#include "GFMsgQueue.h"

void GFScene::regCommandObserver(std::string id, CCObject * actor)
{
    GFMsgQueueMgr::getInstance()->regCommandObserver(<#std::string id#>, <#cocos2d::CCObject *actor#>)
}
void GFScene::regEventObserver(std::string id, CCObject * actor)
{
    GFMsgQueueMgr::getInstance()->regEventObserver(id, actor);
}