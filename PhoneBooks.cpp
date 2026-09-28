#include"PhoneBooks.h"
#include<iostream>
#include<vector>
#include<algorithm>

PhoneBooks::PhoneBooks() {}

void PhoneBooks::addNumber(const std::string& name, const std::string& phoneNumber){
    numberList.push_back({name, phoneNumber});
}

void PhoneBooks::deleteNumber(const int id){
    if(id >= 0 && id < static_cast<int>(numberList.size())){
        numberList.erase(numberList.begin() + id);
    }else{
        std::cout<< "Please write down id from 0 to +infinity"<<std::endl;
    }
}

void PhoneBooks::showAll(){
    std::cout<<"№"<<"\t Name \t\t\t number\n";
    int idx = 0;
    for(auto& i:numberList){
        std::cout<< idx <<"\t"<<i.name<<"\t"<<i.phoneNumber<<std::endl;
        idx++;
    }
}

std::string PhoneBooks::getName(int id){
  return numberList[id].name;
}

std::string PhoneBooks::getNumber(int id){
  return numberList[id].phoneNumber;
}
