#include "profile.hpp"
#include <string>
#include <iostream>
#include <stdexcept>

Shoebox::Shoebox(std::string name, double amount) {
    title_ = name;
    saved_ = amount;
}
void Shoebox::PutAside(double amount) {
    saved_ += amount;
}
void Shoebox::ShoeboxInfo() {
    std::cout << "------SHOEBOX------" << '\n';
    std::cout << title_ << " : " << saved_ << '\n';
    std::cout << "-------------------" << '\n';
}
void Shoebox::StartShoebox(const std::string name, double amount) {
    saved_ = amount;
    title_ = name;
}
double Shoebox::TransferToBudget(double amount) {
    if (saved_ < amount) {
        throw std::runtime_error("Amount requested is greater than amount saved");
    }
    saved_ -= amount;
    return amount;
}