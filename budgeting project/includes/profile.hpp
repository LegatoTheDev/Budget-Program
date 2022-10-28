#ifndef PROFILE_HPP
#define PROFILE_HPP

#include <string>
#include "shoebox.hpp"
#include <map>

class Profile : public Shoebox {
    public:
    Profile(); // constructor
    void Deposit();
    void RemoveSub(std::string company);
    void AddSub();
    void TransferFromShoeBox(double amount);
    void PrintInfo();
    private:
    double debt_ = 0;
    std::string name_;
    double account_budget_;
    std::map<std::string,double> subscriptions_;
    
};


#endif