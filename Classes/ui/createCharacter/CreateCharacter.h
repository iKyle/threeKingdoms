//
//  CreateCharacter.h
//  threeKingdoms
//
//  创建角色层
//
//

#ifndef __threeKingdoms__CreateCharacter__
#define __threeKingdoms__CreateCharacter__

#include <iostream>
#include "cocos2d.h"
#include "cocos-ext.h"
#include "manager/TimeManager.h"

using namespace std;
USING_NS_CC;
USING_NS_CC_EXT;

class CreateCharacter:public Layer
{
public:
    CREATE_FUNC(CreateCharacter);
    
    CreateCharacter();
    ~CreateCharacter();
    
    virtual bool init();
    
    virtual void onEnter();
    virtual void onEnterTransitionDidFinish();
    virtual void onExit();
    
    //void onChangeAccount(CCObject* sender);
private:
	Array *characterArray;//角色数组
    
	void initContent();

	void startGame();
    
    void unselectAll();
    
    Color4B getColor(TimeType type);
	// CCControlButton* changeAccount;
	// CCLabelBMFont* text;
};

#endif /* defined(__threeKingdoms__CreateCharacter__) */
