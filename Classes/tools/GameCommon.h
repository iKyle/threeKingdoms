//
//  GameCommon.h
//  threeKingdoms
//一个单例类的宏函数
//


#ifndef __threeKingdoms__GameCommon__
#define __threeKingdoms__GameCommon__

#include <iostream>

#ifndef INSTANCE
#define INSTANCE(_cName)        _cName::getInstance()
#define CLASS_INSTANCE(_cName) \
static _cName * getInstance() \
{ \
static _cName * pIns = NULL; \
if (pIns == NULL) { \
pIns = new _cName(); \
pIns->init(); \
} \
return pIns; \
}
#endif

//3.0的触摸不是这么用的了
/*
#define ADD_TOUCH Director::getInstance()->getTouchDispatcher()->addTargetedDelegate(this, 0, true)
#define REMOVE_TOUCH Director::getInstance()->getTouchDispatcher()->removeDelegate(this)
*/
/************************************************************************/
/* hehe vim                                                                     */
/************************************************************************/

#endif /* defined(__threeKingdoms__GameCommon__) */
