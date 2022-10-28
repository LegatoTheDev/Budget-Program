#include "profile.hpp"
#include <stdexcept>
#include <iostream>

Profile::Profile() {
    std::string name;
    double amount;
    std::cout << "Welcome to [App name here]" << '\n';
    std::cout << "What is your name ?";
    std::cin >> name;
    std::cout << "To begin, please enter an initial budget amount. " << '\n';
    std::cin >> amount;
    name_ = name;
    account_budget_ = amount;
    Shoebox shoe("opp", amount);
}
void Profile::Deposit() {
    std::cout << "Please enter an amount to add to your budget. " << '\n';
    double amount;
    std::cin >> amount;
    std::cout << "You have succefully created a budget of $" << amount << "." << '\n';
    account_budget_ += amount;
}
void Profile::AddSub() {
    std::string company;
    double fee;
    std::cout << "What is the name of the subscription you wish to add ?" << '\n';
    std::cin >> company;
    std::cout << "How much is this subcription ?" << '\n';
    std::cin >> fee;
    
    if (fee < 0) {
        std::cout << "Invalid Fee: Companies cannot charge a negative fee" << '\n';
        return;
    }

    if (account_budget_ < debt_ + fee) {
        std::cout << "Adding this subscription would exceed your budget" << '\n';
        return;
    }
    subscriptions_[company] = fee;
    debt_ += fee;
    std::cout << company << " " << fee << " Added to your subscriptions" << '\n';
}

void Profile::RemoveSub(std::string company) {
    std::map<std::string, double>::iterator it;
    it = subscriptions_.find(company);
    debt_ -= it->second;
    subscriptions_.erase(it);
    
}

void Profile::TransferFromShoeBox(double amount) {
    account_budget_ += TransferToBudget(amount);
}

void Profile::PrintInfo() {
    std::cout << "Name : " << name_ << '\n';
    std::cout << "Budget : " << account_budget_ << '\n';
    std::cout << "---SUBSCRIPTIONS---" << '\n';
    for (const auto& it : subscriptions_) {
        std::cout << it.first << " : " << it.second << '\n';
    }
    std::cout << "-------------------" << '\n';
    std::cout << "Total debt = " << debt_ << '\n';

}