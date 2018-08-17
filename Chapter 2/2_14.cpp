/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 3, 2018
**
** Challenge: The star player of a high school basketball team is 74
** inches tall. Write a program to compute and display the height in
** feet/inches form.
*********************************************************************/

#include <iostream>


int main()
{
    int playerHeight = 74,
            playerFeet = playerHeight / 12,
            playerInches = playerHeight % 12;


    std::cout << "The basketball players height is: " << playerFeet << "\' ";
    std::cout << playerInches << "\"" << std::endl;

    return 0;
}
