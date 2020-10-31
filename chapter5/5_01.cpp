/*********************************************************************
** Author: Kuljot Biring
**
** Date: July 06, 2018
**
** Write a program that uses a loop to display the
** characters for each ASCII code 32 through 127. Display 16
** characters on each line with one space between the characters.
**********************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    char output;

    //Print chars for ASCII code 32 through 127
    
    for (int i = 32; i <= 127; ++i)
    {
        if (i % 16 == 0 && i > 32)
        {
            cout << "\n";
        }
        output = i;
        
        cout << output << " ";
    }
    cout << endl;
    
    return 0;
}
