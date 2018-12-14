/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 19, 2018
**
** Challenge: An online book club awards points to its customers based
** on the number of books purchased each month as follows:
**        Books Purchased    Points Earned
**              0                   0
**              1                   5 
**              2                  15
**              3                  30
**          4 or more              50
** Write a program that asks the user to enter the number of books
** purchased this month and then displays the number of points awarded.
*********************************************************************/
#include <iostream>


int main()
{
    int booksPurchased;

    std::cout << "How many books did you buy this month?\n";
    std::cin >> booksPurchased;

    if(booksPurchased >= 0)

        switch (booksPurchased)
        {
            case 0: std::cout << "You have purchased " << booksPurchased << " no books which earns you 0 points\n";
                break;

            case 1: std::cout << "You have purchased " << booksPurchased << " book which earns you 5 points\n";
                break;

            case 2: std::cout << "You have purchased " << booksPurchased << " books which earns you 15 points\n";
                break;

            case 3: std::cout << "You have purchased " << booksPurchased << " books which earns you 30 points\n";
                break;

            default: std::cout << "You have purchased " << booksPurchased <<  " books 4which earns you 50 points\n";
        }

    else
        {
            std::cout << "Your entry of " << booksPurchased << " is not a valid number,\n";
            std::cout << "please restart the program and try again\n";
        }

        return 0;


}

