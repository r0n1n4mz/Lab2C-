#include"Balance.h"
#include<iostream>

Balance::Balance(float val){
    this->val = val;
}

float Balance::getVal(){
    return this->val;
}

void Balance::changeVal(float val){
    this->val = val;
}
