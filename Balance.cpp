#include"Balance.h"

Balance::Balance(){
    this->val = 0;
}
Balance::Balance(int val){
    this->val = val;
}

int Balance::getVal(){
    return this->val;
}

void Balance::changeVal(int val){
    this->val = val;
}
