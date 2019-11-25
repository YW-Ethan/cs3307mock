//
// Created by Yuchen Wang
//

#include <csignal>
#include <unistd.h>
#include "web_module.h"

using namespace std;

int main(){
    auto* home = new web_module(5);
    home->lightAutoOn();
    Sleep(5000);
    home->lightAutoOff();
    Sleep(2000);
    return 0;

}
