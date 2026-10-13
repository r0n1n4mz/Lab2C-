#include"PhoneBook.h"
#include<iostream>
#include<vector>
#include<algorithm>

PhoneBook::PhoneBook() {}

void PhoneBook::addNumber(const std::string& name, const std::string& phoneNumber){
    numberList.push_back({name, phoneNumber});
}

bool PhoneBook::deleteNumber(const int phoneIndex){
    if(phoneIndex >= 0 && phoneIndex < static_cast<int>(numberList.size())){
        numberList.erase(numberList.begin() + phoneIndex);
        return true;
    }else{
        return false;
    }
}

void PhoneBook::showAll(){
    std::cout<<"№"<<"\t Name \t\t\t number\n";
    int idx = 0;
    for(auto& i:numberList){
        std::cout<< idx <<"\t"<<i.name<<"\t"<<i.phoneNumber<<std::endl;
        idx++;
    }
}

std::string PhoneBook::getName(int id){
  return numberList[id].name;
}

std::string PhoneBook::getNumber(int id){
  return numberList[id].phoneNumber;
}
