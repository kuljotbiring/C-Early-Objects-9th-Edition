/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 15, 2018
**
** A theater only keeps 80 percent of the revenue earned
** from ticket sales. The other 20 percent goes to the distributor.
** Write a program that calculates a theater's gross and net box
** office revenue for a night. The program should ask for the name of
** the movie, and how many adult and child tickets were sold. (The
** price of an adult ticket is $10 and a child's ticket is $6.)
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string movieName;
    int adultTickets, childTickets;
    double grossRevenue, royaltyFee, netRevenue;

    std::cout << "Enter the name of the movie \n";
    getline(std::cin,movieName);

    std::cout << "How many adult tickets were sold? \n";
    std::cin >> adultTickets;

    std::cout << "How many children's tickets were sold? \n";
    std::cin >> childTickets;

    grossRevenue = static_cast<double>(adultTickets * 10) + static_cast<double>(childTickets * 6);
    royaltyFee = grossRevenue * .20;
    netRevenue = grossRevenue * .80;

    std::cout << "Movie Name: ";
    std::cout << movieName << std::endl;;

    std::cout << "Adult tickets sold: ";
    std::cout << adultTickets << std::endl;;

    std::cout << "Children's tickets sold: ";
    std::cout << childTickets << std::endl;;

    std::cout << "Gross Box Office: ";
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << "$"
              << grossRevenue << std::endl;;

    std::cout << "Royalty fee: ";
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << "-$"
              << royaltyFee << std::endl;;

    std::cout << "Net Revenue: ";
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << "$"
              << netRevenue << std::endl;;

    return 0;

}
