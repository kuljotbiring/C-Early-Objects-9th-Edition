/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 15, 2018
**
** Write a program that prompts the users to enter the
** number of days they plan to spend on their next vacation. Then
** compute and report how long that is in hours, minutes, and seconds.
*********************************************************************/

#include <iostream>

int main()
{
    int days, hours, minutes, seconds;

    std::cout << "Enter the number of days of your vacation \n";
    std::cin >> days;

    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    std::cout << "Your " << days << " vacation is " << hours << " hours or "
    << minutes << " minutes or " << seconds << " seconds long\n";

    return 0;
}
