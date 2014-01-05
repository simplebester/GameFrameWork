//
//  GFModel.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#include "GFModel.h"
#include "GFMsgQueue.h"
void GFModel::trigerEvent(int type, std::string id, std::string para)
{
    GFEvent event(type, id, para);
    GFMsgQueueMgr::getInstance()->pushEvent(event);
}