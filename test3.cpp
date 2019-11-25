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
    Sleep(2000);
    home->getAllAppliances();
    home->lightAutoOff();
    Sleep(1000);
    home->getAllAppliances();
    return 0;

}
