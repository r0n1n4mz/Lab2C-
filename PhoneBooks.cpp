#include"PhoneBooks.h"
#include<iostream>
#include<vector>
#include<algorithm>

PhoneBooks::PhoneBooks() {}

void PhoneBooks::addNumber(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber){
    numberList.push_back({firstName, lastName, phoneNumber});
}

void PhoneBooks::deleteNumber(const int id){
    if(id < numberList.size() && id <0){
        numberList.erase(std::find(numberList.begin(), numberList.end(), id));
    }else{
        std::cout<< "Please write down id from 0 to +infinity"<<std::endl;
    }
}

void PhoneBooks::showAll(){
    std::cout<<"№"<<"\t Name \t\t\t number\n";
    for(auto& i:numberList){
        std::cout<<i.firstName<<"\t"<<i.lastName<<"\t"<<i.phoneNumber<<std::endl;
    }
}
