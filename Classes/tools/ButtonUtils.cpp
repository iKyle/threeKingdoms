//
//  ButtonUtils.cpp
//  threeKingdoms
//
//  Created by .m on 13-12-24.
//
//

#include "ButtonUtils.h"

bool ButtonUtils::init()
{
    return true;
}

void ButtonUtils::setButtonTitle(ControlButton* button, const char *titleName)
{
    button->setTitleForState(std::string(titleName), Control::State::NORMAL);
    button->setTitleForState(std::string(titleName), Control::State::HIGH_LIGHTED);
    button->setTitleForState(std::string(titleName), Control::State::DISABLED);
    button->setTitleForState(std::string(titleName), Control::State::SELECTED);
}

ControlButton* ButtonUtils::createButton(const char *frameName, cocos2d::Size size, const char *label,float labelSize ,Color3B labelColor)
{
    return createButton(frameName, frameName, frameName, size, label,labelSize,labelColor);
}

ControlButton* ButtonUtils::createButton(const char *normalFrame, 
										 const char *highLightFrame,
										 const char *disableFrame,
										 cocos2d::Size size,
										 const char *label,
										 float labelSize,
										 Color3B labelColor)
{
    Scale9Sprite *normal = Scale9Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName(normalFrame));
    Scale9Sprite *highLight = Scale9Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName(highLightFrame));
    Scale9Sprite *disable = Scale9Sprite::createWithSpriteFrame(SpriteFrameCache::getInstance()->getSpriteFrameByName(disableFrame));
    ControlButton *btn = ControlButton::create(label, "Arial", labelSize);
    btn->setPreferredSize(size);//设置按钮首选大小
    btn->setBackgroundSpriteForState(normal, Control::State::NORMAL);
    btn->setBackgroundSpriteForState(highLight, Control::State::HIGH_LIGHTED);
    btn->setBackgroundSpriteForState(disable, Control::State::DISABLED);
    btn->setTitleColorForState(labelColor, Control::State::NORMAL);
    btn->setTitleColorForState(labelColor, Control::State::HIGH_LIGHTED);
    btn->setTitleColorForState(labelColor, Control::State::DISABLED);
    //btn->setTouchPriority(0);
    
    return btn;
}

