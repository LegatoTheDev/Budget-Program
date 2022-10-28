#include <string>



class Shoebox
{
    public:
    Shoebox() = default;
    Shoebox(const std::string name, const double amount);
    void StartShoebox(const std::string name, double amount);
    void PutAside(double amount);
    double TransferToBudget(double amount);
    void ShoeboxInfo();
    private:
    std::string title_ = "";
    double saved_ = 0.0;
};
