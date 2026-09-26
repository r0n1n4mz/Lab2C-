#pragma once
#include <string>
#include <vector>

struct phoneData{
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;
};

class PhoneBooks{
    private:
        std::vector<phoneData> numberList;

    public:
        //Constructor
        PhoneBooks();

        void addNumber(const std::string& firstName, const std::string& lastName, const std::string& phoneNumber);
        void deleteNumber(const int id);
        void showAll();
        


        


};
