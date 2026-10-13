#pragma once
#include "Sim.h"
#include "PhoneBook.h"
#include "Balance.h"
#include<string>

class Mobilephone{
  private:
    std::string model;
    Sim simCard;
    PhoneBook phoneBook;
    Balance account;
    int tariff;
  public:
    Mobilephone();
    Mobilephone(const std::string& model, Sim simCard, PhoneBook phoneBook, Balance account, int tariff);

    void call(int target);
    void addFunds(int sum);
    void managePhonebook(int id);
    void showInfo(std::string txt);

    int getBalance();
      
};
