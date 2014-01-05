//
//  GFController.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#include "GFController.h"
#include "GFMsgQueue.h"
void GFController::trigerEvent(int type, std::string id, std::string para)
{
    GFEvent event(type, id, para);
    GFMsgQueueMgr::getInstance()->pushEvent(event);
}

void GFController::update()
{

}
