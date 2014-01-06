//
//  GFView.cpp
//  GameFrameWork
//
//  Created by Corly on 14-1-5.
//  Copyright (c) 2014年 Corly. All rights reserved.
//

#include "GFView.h"

void GFView::emmitCommand(int type, std::string _actor, std::string id, std::string para)
{
    GFCommand * command = new GFCommand(type, _actor, id, para);
    GFMsgQueueMgr::getInstance()->pushCommand(command);
}
void GFView::regEventObserver(std::string id, CCObject * actor)
{
    GFMsgQueueMgr::getInstance()->regEventObserver(id, actor);
}