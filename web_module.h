//
// Created by Yuchen Wang
//

#ifndef CS3307MOCK_WEB_MODULE_H
#define CS3307MOCK_WEB_MODULE_H

#include <iostream>
#include <vector>
#include <pthread.h>
#include <stdlib.h>
#include <windows.h>
#include "alarm.h"
#include "room.h"
class web_module {
private:
    std::string alarmMsg;
    alarm* alm;
    std::vector<room> roomLights;
    void setRooms(int);
    static void* monitor(void*);
public:
    explicit web_module(int);
    void setAlarmMode(bool);
    void closeAlarm();
    void resetAlarm();
    void lightAutoOn();
    void lightAutoOff();
    void manualSetLight(int,bool);
    void launchAlarm();

protected:
    static void* openAlarm(void*);
};


#endif //CS3307MOCK_WEB_MODULE_H
