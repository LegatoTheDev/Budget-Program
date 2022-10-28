#include "profile.hpp"

int main () {
    Profile person1;
    // person1.AddSub("Apple", 14.92);
    // person1.AddSub("Netflix", 9.99);
    // person1.AddSub("Hulu", 8.99);
    // person1.AddSub("Dog Park", 50.00);
    // person1.RemoveSub("Dog Park");
  
    // person1.StartShoebox("Omega Funds", 150);
    // person1.PutAside(50.50);
    // person1.TransferFromShoeBox(25);
    
    // person1.PrintInfo();
    // person1.ShoeboxInfo();
    person1.Deposit();
    person1.AddSub();
    person1.PrintInfo();

}