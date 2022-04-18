#include <iostream>
#include "Math.h"

int main() {
    std::cout<<Math::Add(12, 13) << std::endl;
    std::cout << Math::Add(12, 13, 10) << std::endl;
    std::cout << Math::Add(6.5, 1.2) << std::endl;
    std::cout << Math::Add(6.5, 1.2, 1.1) << std::endl;
    std::cout << Math::Mul(2,3) << std::endl;
    std::cout << Math::Mul(2,3,5) << std::endl;
    std::cout << Math::Mul(2.1,3.2) << std::endl;
    std::cout << Math::Mul(2.1,3.2,1.5) << std::endl;
    std::cout << Math::Add(4, 2,2,3,4) << std::endl;
    std::cout << Math::Add("aa", "bb") << std::endl;
}