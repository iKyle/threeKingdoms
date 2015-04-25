//
//  CreateCharacterFacade.h
//  threeKingdoms
//
//  ������ɫ�ĳ���,��һ��������
//

#ifndef __threeKingdoms__CreateCharacterFacade__
#define __threeKingdoms__CreateCharacterFacade__

#include <iostream>
#include "cocos2d.h"
#include "tools/GameCommon.h"
#include "ui/createCharacter/CreateCharacter.h"

using namespace std;
USING_NS_CC;

class CreateCharacterFacade:public Ref
{
public:
    CLASS_INSTANCE(CreateCharacterFacade);
    bool init();
    
    void openCreateCharacterScene();
    
private:
    CreateCharacter *createCharacter;
};

#endif
