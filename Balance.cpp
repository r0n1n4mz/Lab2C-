#include"Balance.h"
#include<string>

Balance::Balance(){
    this->val = "0";
}
Balance::Balance(std::string val){
    this->val = val;
}

std::string Balance::getVal(){
    return this->val;
}

void Balance::changeVal(std::string val){
    this->val = val;
}
