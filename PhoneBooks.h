#pragma once
#include <string>
#include <vector>

struct phoneData{
    std::string name;
    std::string phoneNumber;
};

class PhoneBooks{
    private:
        std::vector<phoneData> numberList;

    public:
        //Constructor
        PhoneBooks();

        void addNumber(const std::string& name, const std::string& phoneNumber);
        void deleteNumber(const int id);
        void showAll();
        


        


};
