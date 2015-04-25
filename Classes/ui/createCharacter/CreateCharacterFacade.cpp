//
//  CreateCharacterFacade.cpp
//  threeKingdoms
//
//  
//
//

#include "CreateCharacterFacade.h"

bool CreateCharacterFacade::init()
{
    createCharacter = NULL;
    return true;
}

//�򿪴�����ɫ����
void CreateCharacterFacade::openCreateCharacterScene()
{
    Scene *scene = Scene::create();
    createCharacter = CreateCharacter::create();
    scene->addChild(createCharacter);
    if(CCDirector::sharedDirector()->getRunningScene())
    {
        CCDirector::sharedDirector()->replaceScene(scene);
    }else{
        CCDirector::sharedDirector()->runWithScene(scene);
    }
}
