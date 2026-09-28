#include "Mobilephone.h"
#include<iostream>
#include"Balance.h"
int main(){
  std::string number =  "+380637782882";
  std::string pincode = "2832";
  std::string operator1 = "Lifecell";
  Sim sda = Sim(number, pincode, operator1);
  Mobilephone phone1 = Mobilephone("Apple iphone 15", sda, PhoneBooks(), Balance("0"), 5);
 
  std::cout<<"The current balance: "<<phone1.getBalance()<<std::endl;
  std::cout<<"increase value of my account\n";
  phone1.addFunds(100);
  std::cout<<"fund up account with 100 UAH\n";
  std::cout<<"The current balance: "<<phone1.getBalance()<<std::endl;
  phone1.managePhonebook(2);
  phone1.managePhonebook(2);
  phone1.managePhonebook(2);
  phone1.managePhonebook(2);
  phone1.managePhonebook(1);
  phone1.managePhonebook(3);
  phone1.managePhonebook(1);
  int target;
  std::cout<<"Enter the number of target contact to call: "; std::cin>>target; std::cout<<std::endl;
  phone1.call(target);
  std::cout<<"The current balance: " << phone1.getBalance()<<std::endl;
  return 0;
}
