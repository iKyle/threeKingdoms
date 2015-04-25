//
//  TimeManager.h
//  threeKingdoms
//
//  时间管理器，单例类
//
//

#ifndef __threeKingdoms__TimeManager__
#define __threeKingdoms__TimeManager__

#include <iostream>
#include "cocos2d.h"
#include "tools/GameCommon.h"

using namespace std;
USING_NS_CC;

enum TimeType
{
    TimeType_morning,	//早上
    TimeType_dusk,		//黄昏
    TimeType_night,		//晚上
    TimeType_dayTime,
};

class TimeManager:public Ref
{
public:
    CLASS_INSTANCE(TimeManager);
    bool init();
    
    int64_t getSystemTimeM();
    
    int getSystemTime();
    
    //t1为参考时间 t2为要比较的时间
    //bool isLaterDay(int64_t t1,int64_t t2);
    //bool isSameDay(int64_t t1,int64_t t2);
    
    //bool includeSomeWeekDay(int64_t t1,int64_t t2,int weekDay);
    
    int getYear(int64_t t);
    int getMonth(int64_t t);
    int getDay(int64_t t);
    int getWeekDay(int64_t t);
    int getHour(int64_t t);
    
    TimeType getTimeType();
    
private:
    struct tm* getTimeStruct(int64_t t);
};

#endif 
