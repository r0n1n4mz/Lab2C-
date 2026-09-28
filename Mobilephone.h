#pragma once
#include "Sim.h"
#include "PhoneBooks.h"
#include "Balance.h"
#include<string>

class Mobilephone{
  private:
    std::string model;
    Sim simCard;
    PhoneBooks phoneBook;
    Balance account;
    int tariff;
  public:
    Mobilephone();
    Mobilephone(const std::string& model, Sim simCard, PhoneBooks phoneBook, Balance account, int tariff);

    void call(int target);
    void addFunds(int sum);
    void managePhonebook(int id);
    void showInfo(std::string txt);

    std::string getBalance();
      
};
