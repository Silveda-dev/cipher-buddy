#include <iostream>
#include "Entropy.h"

int main() {
    std::string encrypted;
    
    std::cout << "Welcome to Cipher Buddy.\nEnter text to be decrypted: " << std::endl;
    std::getline(std::cin, encrypted);

    std::cout << "Entropy: " << Entropy::calculate(encrypted) << std::endl;

    //Call appropriate cipher algorithms

    return 0;
}