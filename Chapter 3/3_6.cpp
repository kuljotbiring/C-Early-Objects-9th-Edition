/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 15, 2018
**
** Write a program that asks for five test scores. The
** program should calculate the average test score and display it.
** The number displayed should be formatted in fixed-point notation,
** with one decimal point of precision.
*********************************************************************/
#include <iostream>
#include <iomanip>


int main()
{
    double score1, score2, score3, score4, score5, aveGrade;

    std::cout << "Please enter your first test score & press enter: \n";
    std::cin >> score1;
    std::cout << "Please enter your second test score & press enter: \n";
    std::cin >> score2;
    std::cout << "Please enter your third test score & press enter: \n";
    std::cin >> score3;
    std::cout << "Please enter your fourth test score & press enter: \n";
    std::cin >> score4;
    std::cout << "Please enter your fifth test score & press enter: \n";
    std::cin >> score5;

    aveGrade = (score1 + score2 + score3 + score4 + score5) / 5;

    std::cout << "The average test score for you is " << std::fixed
    << std::showpoint << std::setprecision(1) << aveGrade << "%\n";

    return 0;
}
