/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 15, 2018
**
** Write a program to find a baseball player's batting
** average. The program should ask the user to enter the number of
** times the player was at bat and the number of hits earned. It
** should then display the batting average to four decimal places.
*********************************************************************/

#include <iostream>
#include <iomanip>

int main()
{
    int atBat, hitsEarned;
    double battingAve;

    std::cout << "Enter the number of times the player was at bat:\n";
    std::cin >> atBat;
    std::cout << "Enter the total number of hits earned by the player:\n";
    std::cin >> hitsEarned;

    battingAve = static_cast<double>(hitsEarned) / atBat;

    std::cout << "The player's batting average is " << std::fixed << std::showpoint
              << std::setprecision(4) << battingAve << std::endl;

    return 0;
}
