#pragma once
#include <string>

class Sim{
  private:
    std::string phoneNumber;
    std::string pinCode;
    std::string operatorName;
  public:
    Sim();
    Sim(std::string& phoneNumber, std::string& pinCode, std::string& operatorName);

    void changePincode(std::string& pinCode);

    std::string getPincode();
    std::string getOperatorname();
    std::string getPhonenumber();
};

