#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <sstream>
#include <cstdlib>


int main() {
    
    std::cout << "Enter calculation (ex. 1 + 2) :";
    std::string uInput;
    getline(std::cin, uInput);
    std::string sign = ("+,-,*,/");
    //std::string getline(std::cout, uInput);
    std::stringstream ss(uInput);
    std::string iNdividval;
    char cSpace = ' ';
    std::vector<std::string> vecsInput;
    
    while (getline(ss, iNdividval, cSpace)) {
        vecsInput.push_back(iNdividval);
    }
    double num1 = std::stod(vecsInput[0]);
    double num2 = std::stod(vecsInput[2]);
    if (vecsInput[1] == "+"){
        printf("%.1f + %.1f = %.1f", num1, num2, (num1+num2));
    }else if (vecsInput[1] == "-"){
        printf("%.1f - %.1f = %.1f", num1, num2, (num1-num2));
    }else if (vecsInput[1] == "*"){
        printf("%.1f * %.1f = %.1f", num1, num2, (num1*num2));
    }else if (vecsInput[1] == "/"){
        printf("%.1f / %.1f = %.1f", num1, num2, (num1/num2));
    }else {
            std::cout << "Please enter only +, *, -, / operators only :(";
        }
    return 0;
    
}