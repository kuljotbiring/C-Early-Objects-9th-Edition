/*********************************************************************
** Author: Kendal Singh Biring
**
** Date: June 19, 2018
**
** Challenge: The date June 10, 1960, is special because when we write 
** it in the following format, the month times the day equals the year.
**          * 6/10/60
** Write a program that asks the user to enter a month (in numeric 
** form), a day, and a two -digit year. The program should then 
** determine whether the month times the day is equal to the year. If 
** so, it should display a message saying the date is magic. 
** Otherwise, it should display a message saying the date is not magic.
*********************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int month, day, year, dateCheck;

    cout << "Please enter a date in numberic form (eg 06/10/60)\n";
    cout << "Please enter a month of the year in numerical form (eg 06 for June) \n";
    cin >> month;
    cout << "Please enter a day of the month in numerical form (eg 10)\n";
    cin >> day;
    cout << "Please enter a year in two digits (eg 60)\n";
    cin >> year;
    cout << "You have entered: " << month << "/" << day << "/" << year << endl;

    dateCheck = month * day;

    if (month >=1 && month <= 12) {
        if (day >= 1 && day <= 31) {
            if (dateCheck == year) {
                cout << "This number is magic!" << endl;
            }
            else {
                cout << "This number is not magic" << endl;
            }
        }
        else {
            cout << "You must enter a day from 1 - 31" << endl;
        }
    }
    else {
        cout << "You must enter a month from 1 - 12" << endl;
    }

    return 0;
}
