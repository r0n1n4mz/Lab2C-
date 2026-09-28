#include "Mobilephone.h"
#include <iostream>

Mobilephone::Mobilephone(){}
Mobilephone::Mobilephone(const std::string& model, Sim simCard, PhoneBooks phoneBook, Balance account, int tariff){
  this->model = model;
  this->simCard = simCard;
  this->phoneBook = phoneBook;
  this->account = account;
  this->tariff = tariff;
}

void Mobilephone::call(int target){
  if((std::stoi(this->account.getVal()) - this->tariff) >= 0){
    std::cout<<this->phoneBook.getName(target)<<"\n"<<this->phoneBook.getNumber(target)<<"\n"<<"Calling\n";
    int res = std::stoi(this->account.getVal()) - this->tariff;
    this->account.changeVal(std::to_string(res));
    bool status = 1;
    while(status != 0){
      int time = 0;
      time++;
      if(time == 30){
        status = 0;
      }
    }
  }else{
    std::cout<<"Plese fund up your account to call someone\n";
  }
}

void Mobilephone::addFunds(int sum){
  int res = std::stoi(this->account.getVal()) + sum;
  this->account.changeVal(std::to_string(res));
};
void Mobilephone::managePhonebook(int idx){
  //id -- it's number of action you want to do
  switch(idx){
    case 1:
      //list of all numbers
      this->phoneBook.showAll();
      break;
    case 2: {
      //add number in phoneBook;
      std::string name, numb;
      std::cout<<"Enter the name for contact: ";
      std::cin>>name;
      std::cout<<"Enter the number for contact: ";
      std::cin>>numb;
      this->phoneBook.addNumber(name, numb);
      break;
    }
    case 3: {
      //delete number
      int id;
      std::cout<<"Enter id of target number: ";
      std::cin>>id;
      std::cout<<"\nDeleting number...\n";
      this->phoneBook.deleteNumber(id);
      std::cout<<"Number succeful deleted\n";
      break;
    }
    default:{
      std::cout<<"Error id, you must choose form 1-3\n";
      break;
    }
  }
}

void Mobilephone::showInfo(std::string txt){
  std::cout<<txt<<std::endl;
}

std::string Mobilephone::getBalance(){
  return this->account.getVal();
}
