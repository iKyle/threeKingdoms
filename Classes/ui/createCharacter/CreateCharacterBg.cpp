//
//  CreateCharacterBg.cpp
//  threeKingdoms
//
//  Created by .m on 14-1-21.
//
//

#include "CreateCharacterBg.h"
//#include "ButtonUtils.h"

bool CreateCharacterBg::init()
{
    if(!SpriteBatchNode::initWithFile("ui/createCharacter/createCharacter_bg.png",2)){
        return false;
    }
    initContent();
    return true;
}

void CreateCharacterBg::initContent()
{
    //CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	Size winSize = Director::getInstance()->getWinSize();
    setPosition(Vec2(0, winSize.height));
    bg1 = Sprite::create("ui/createCharacter/createCharacter_bg.png");
    bg2 = Sprite::create("ui/createCharacter/createCharacter_bg.png");
    addChild(bg1);
    bg1->setAnchorPoint(Vec2(0, 1));
    addChild(bg2);
    bg2->setAnchorPoint(Vec2(0, 1));
	bg2->setFlippedX(true);
    bg2->setPosition(Vec2(-bg1->getContentSize().width, 0));
    
    scheduleUpdate();
}

void CreateCharacterBg::update(float t)
{
    bg1->setPosition(bg1->getPosition() + Vec2(1, 0));
    bg2->setPosition(bg2->getPosition() + Vec2(1, 0));
    
    if(bg1->getPosition().x > 0 && bg2->getPosition().x > 0){
        if(bg1->getPosition().x > bg2->getPosition().x){
            bg1->setPosition(bg2->getPosition() - Vec2(bg2->getContentSize().width, 0));
        }else{
            bg2->setPosition(bg1->getPosition() - Vec2(bg1->getContentSize().width, 0));
        }
    }
}