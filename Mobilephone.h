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
    Mobilephone(std::string& model, Sim simCard, PhoneBooks phoneBook, Balance account);

    void call(std::string number, int tariff, Balance account);
    void addFunds(Balance account, int tariff);
    void managePhonebook(PhoneBooks phoneBook, int id);
    void showInfo(std::string txt);

    std::string getBalance(Balance account);
    std::string getNumber(PhoneBooks phoneBook);
    
    
};
