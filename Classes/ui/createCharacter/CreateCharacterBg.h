//
//  CreateCharacterBg.h
//  threeKingdoms
//
//  创建角色场景背景
//
//

#ifndef __threeKingdoms__CreateCharacterBg__
#define __threeKingdoms__CreateCharacterBg__

#include <iostream>
#include "cocos2d.h"
#include "cocos-ext.h"
//#include "GameUtils.h"

using namespace std;
USING_NS_CC;
USING_NS_CC_EXT;

class CreateCharacterBg:public SpriteBatchNode
{
public:
    CREATE_FUNC(CreateCharacterBg);
    virtual bool init();
    
private:
    void initContent();
    Sprite *bg1;
    Sprite *bg2;
    
    void update(float t);
};

#endif /* defined(__threeKingdoms__CreateCharacterBg__) */
