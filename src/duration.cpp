#include "duration.hpp"
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

//(a)// 
int duration::getduration()
{
    return time; 
}

//(b)//
duration::duration()
{
    time = 0; 
    alarm = 0; 
    alarmHasBeenSet = false; 
}

//(c)//
duration::duration(int t)
{ 
    assert(time >= 0); //time should be positive//
    time = t;
    alarmHasBeenSet = false; 
}

//(e)//
bool duration::tick()
{
    time++;
    return checkAndUpdateAlarm(); 
} 

//(f)// 
bool duration::tick(int dt)
{
    assert(dt > 0); //user input should be bigger than zero//
    time = time + dt;
    return checkAndUpdateAlarm(); 
} 

//(g) and (h)// 
void duration::setAlarm(int t)
{
    if (t > time)
    {
        alarm = t; //sets alarm to value of t//
        alarmHasBeenSet = true; 
    }
}

//(i)//
bool duration::checkAndUpdateAlarm()
{
    if (alarmHasBeenSet == true && time > alarm)
    {
        alarmHasBeenSet = false; 
        alarm = 0; 
        return true; 
    }
    else
    {
        return false; 
    }
} 
duration::~duration(){}; //the destructor//
