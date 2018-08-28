/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 16, 2018
**
** Write a program that can be used as a math tutor for a
** young student. The program should display two random numbers
** between 1 and 9 to be added, such as 2 + 1. After the student has
** entered an answer and pressed the [Enter] key, the program should
** display the correct answer so the student can see if his or her
** answer is correct.
*********************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // define variables
    unsigned seed{};

    int num1{},
        num2{},
        guess{},
        answer{};

    // use the time function to seed srand
    seed = time(0);
    srand(seed);

    // generate random numbers from 1-9
    num1 = rand() % 9 + 1;
    num2 = rand() % 9 + 1;
    answer = num1 + num2;

    // display problem to user & take input & display answer
    std::cout << "Please solve the following problem:\n";
    std::cout << num1 << std::endl;
    std::cout << "+" << num2 << std::endl;
    std::cout << "--\n";
    std::cin >> guess;
    std::cout << "The correct answer is " << answer << std::endl;

    return 0;
}
