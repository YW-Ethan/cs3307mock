//
// Created by Yuchen Wang
// This is used to test alarm with different user mode
//
#include <csignal>
#include <unistd.h>
#include "web_module.h"

extern int sign;
extern std::string status;

auto* home = new web_module(5);

using namespace std;

void signalHandler( int signum )
{
    cout<<"change mode!"<<endl;
    home->setAlarmMode(true);

}
int main(){
    int timer = 0;
    status = "null";
    home->launchAlarm();
    signal(SIGINT, signalHandler);
    while (status!="Quit"){
        cin>>sign;
        timer++;
        if(timer == 5){
            raise(SIGINT);
        }
    }

    return 0;
}