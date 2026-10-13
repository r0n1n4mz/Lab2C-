#include "Mobilephone.h"
#include<iostream>
#include"Balance.h"

int main(){
  const std::string number = "380637783456";
  const std::string pincode = "2832";
  const std::string operator1 = "Lifecell";

  Sim sda(number, pincode, operator1);

  PhoneBook phoneBook;
  Balance balance(0);
  Mobilephone phone1("Apple iphone 15", sda, phoneBook, balance, 5);

  std::cout<<"Current Balanace: "<<phone1.getBalance()<<"\n";
  std::cout<<"Input number of funds you want to add: ";
  int funds;
  std::cin>>funds;
  phone1.addFunds(funds);
  std::cout<<"Current Balanace: "<<phone1.getBalance()<<"\n";

  std::cout<<"Adding number in phonebook\n";
  for(int i = 0; i <=3; i++){
    phone1.managePhonebook(2);
  }

  std::cout<<"List of all numbers in phonebook\n";
  phone1.managePhonebook(1);
  std::cout<<"Choose number to deleete: ";
  phone1.managePhonebook(3);
  std::cout<<"List of all numbers in phonebook\n";
  phone1.managePhonebook(1);
  std::cout<<"Input index of the target contact to call: ";
  int target;
  std::cin>>target;
  phone1.call(target);
  std::cout<<"Current Balanace: " << phone1.getBalance()<<std::endl;

  return 0;
}
