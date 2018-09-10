/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 19, 2018
**
** Write a program that asks the user to enter two numbers.
** The program should use the conditional operator to determine which
** number is the smaller and which is the larger.
*********************************************************************/

#include <iostream>

int main()
{
    double num1{},
           num2{};

    std::cout << "Please type the first number and press enter\n";
    std::cin >> num1;
    std::cout <<  "Please type the second number and press enter\n";
    std::cin >> num2;

    if(num1 > num2)
    {
        std::cout << num1 << " is larger than " << num2 << std::endl;
    }
    else
    {
        std::cout << num1 << " is smaller than " << num2 << std::endl;
    }

    return 0;
}
