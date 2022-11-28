#ifndef _DURATION_H_
#define _DURATION_H

class duration
{
private: //the private attribute//
    int time; 
    int alarm; 
    bool alarmHasBeenSet; 
    bool checkAndUpdateAlarm(); 

public:
    duration(); //constructor, creates the object instance// 
    ~duration(); //destructor, frees memory by destroying the object//
    int getduration();
    duration(int t); 
    bool tick();  
    bool tick(int dt);
    void setAlarm(int n);  
};

#endif