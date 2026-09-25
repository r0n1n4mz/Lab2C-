#pragma once
#include <string>

class PhoneBooks{
    private:
        std::string fisrtName;
        std::string lastName;
        std::string phoneNumber;
    public:
        //Constructor
        PhoneBooks(std::string firstName, std::string lastName, std::string phone);

        std::string getFirstName();
        std::string getLastName();
        std::string getPhoneNumber();


}