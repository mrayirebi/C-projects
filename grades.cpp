#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <limits>


int main() {
    std::string sAge = "0";
    int nGrade = 0;
    std::cout << "Enter your age : ";
    getline(std::cin, sAge);
    int nAge = std::stoi(sAge);
    
    if (nAge < 5) {
        std::cout << "Too young for school\n";
    }else if (nAge == 5) {
        std::cout << "Go to Kindergarten\n";
    }else if ((nAge > 5) && (nAge < 17)) {
        nGrade = nAge - 5;
        std::cout << "Go to grade " << nGrade << "\n";
    }else {
        std::cout << "Go to college\n";
    }
    
    
    
    return 0;
}
