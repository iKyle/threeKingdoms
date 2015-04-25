//
//  ButtonUtils.h
//  threeKingdoms
//
//  重写按钮工具
//
//

#ifndef __threeKingdoms__ButtonUtils__
#define __threeKingdoms__ButtonUtils__

#include <iostream>
#include "cocos2d.h"
#include "cocos-ext.h"
#include "GameCommon.h"

using namespace std;
USING_NS_CC;
USING_NS_CC_EXT;

class ButtonUtils:public Ref
{
public:
    CLASS_INSTANCE(ButtonUtils);
    bool init();
    
    void setButtonTitle(ControlButton* button, const char* titleName);
    
    ControlButton* createButton(const char* frameName,Size size,const char* label,float labelSize = 22,Color3B labelColor = Color3B::WHITE);
    
    ControlButton* createButton(const char* normalFrame, const char* highLightFrame, const char* disableFrame, Size size, const char* label,float labelSize = 22,Color3B labelColor = Color3B::WHITE);
private:
    
};

#endif 
