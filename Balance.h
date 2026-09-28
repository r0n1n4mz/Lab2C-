#pragma once
#include<string>

class Balance{
    private:
        std::string val;
    public:
        //Constructor
        Balance();
        Balance(std::string val);

        //Manage with viriable
        std::string getVal();
        void changeVal(std::string val);

};

