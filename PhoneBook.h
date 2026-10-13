#pragma once
#include <string>
#include <vector>

struct phoneData{
    std::string name;
    std::string phoneNumber;
};

class PhoneBook{
    private:
        std::vector<phoneData> numberList;

    public:
        //Constructor
        PhoneBook();

        void addNumber(const std::string& name, const std::string& phoneNumber);
        bool deleteNumber(const int phoneIndex);
        void showAll();
        
        std::string getName(int id);
        std::string getNumber(int id);

        


};
