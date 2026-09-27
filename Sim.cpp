#include "Sim.h"

Sim::Sim(){ 
  this->phoneNumber = "+3800000000000"; 
  this->pinCode = "0000"; 
  this->operatorName = "Unknown";
};
Sim::Sim(std::string& phoneNumber, std::string& pinCode, std::string& operatorName){
  this->phoneNumber = phoneNumber;
  this->pinCode = pinCode;
  this->operatorName = operatorName;
};

void Sim::changePincode(std::string& pinCode){
  this->pinCode = pinCode;
}

std::string Sim::getPincode(){
  return this->pinCode;
}
std::string Sim::getOperatorname(){
  return this->operatorName;
}
std::string Sim::getPhonenumber(){
  return this->phoneNumber;
}


