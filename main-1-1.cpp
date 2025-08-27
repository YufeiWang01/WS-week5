#include <iostream>
#include "Musician.h"

int main(){
    Musician m1;
    std::cout << "Default constructor -> Instrument: " 
              << m1.get_instrument() << ", Experience: " 
              << m1.get_experience() << " years\n";

    Musician m2("Violin", 10);
    std::cout << "Custom constructor -> Instrument: " 
              << m2.get_instrument() << ", Experience: " 
              << m2.get_experience() << " years\n";

    Musician m3("Piano", 20);
    std::cout << "Instrument: " << m3.get_instrument() 
              << ", Experience: " << m3.get_experience() << " years\n";

    return 0;
}