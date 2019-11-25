//
// Created by Yuchen Wang
//

#include "roomLight.h"

roomLight::roomLight() {
    this->lightState = false;
    this->autoSwitch = false;
    this->roomNum = -1;
}

void roomLight::update_autoSwitch(bool s) {
    this->autoSwitch = s;
}

void roomLight::update_roomNum(int n) {
    this->roomNum = n;
}

bool roomLight::get_autoSwitch() {
    return this->autoSwitch;
}

int roomLight::get_roomNum() {
    return this->roomNum;
}

