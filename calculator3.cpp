#include <iostream>

//by mivel khansa

int main() {
    //the variable
    std::string operation;
    double num1,num2;
    //take the user input
    std::cout << "enter a number: ";
    std::cin >> num1;
    
    std::cout << "enter a number: ";
    std::cin >> num2;
    
    std::cout << "enter a operation(+,-,*,/): ";
    std::cin >> operation;
    //if statement 
    if(operation == "+"){
        std::cout << num1 + num2;
    }
    
    else if (operation == "-"){
        std::cout << num1 - num2;
    }
    
    else if (operation == "*"){
        std::cout << num1 * num2;
    }
    
    else if (operation == "/"){
        std::cout << num1 / num2;
    }
    
    else{
        std::cout << "error";
    }
    return 0;
}