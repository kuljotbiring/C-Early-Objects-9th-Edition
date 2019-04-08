/*********************************************************************
** Author: Kuljot Biring
**
** Date: June 06, 2018
**
** Write a program that asks the user for the speed of a
** vehicle (in miles per hour) and how many hours it has traveled.
** It should then use a loop to display the total distance traveled
** at the end of each hour of that time period.
*********************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int speed,
        hours;

    cout << "Enter the speed of the vehicle." << endl;
    cin >> speed;
    cout << "Enter the number of hours travelled." << endl;
    cin >> hours;

    cout << "\nHour     Miles Traveled" << endl;
    cout << "-----------------------" << endl;

    for(int count = 1; count <= hours; count++)
    {
        cout << count << "            " << (speed * count) << endl;
    }

    return 0;
}
