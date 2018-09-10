//
// Created by Kuljot Singh Biring on 6/19/18.
//
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int numConv;

    cout << "Please type a number 1-10 only and press enter\n";
    cout<< "The number you enter will be converted to a Roman Numeral\n";
    cin >> numConv;

    if(numConv >= 1 && numConv <= 10)
        switch (numConv) {
            case 1:
                cout << "You entered " << numConv << " which is I as a roman numeral.\n";
                break;

            case 2:
                cout << "You entered " << numConv << " which is II as a roman numeral.\n";
                break;

            case 3:
                cout << "You entered " << numConv << " which is III as a roman numeral.\n";
                break;

            case 4:
                cout << "You entered " << numConv << " which is IV as a roman numeral.\n";
                break;

            case 5:
                cout << "You entered " << numConv << " which is V as a roman numeral.\n";
                break;

            case 6:
                cout << "You entered " << numConv << " which is VI as a roman numeral.\n";
                break;

            case 7:
                cout << "You entered " << numConv << " which is VII as a roman numeral.\n";
                break;

            case 8:
                cout << "You entered " << numConv << " which is VIII as a roman numeral.\n";
                break;

            case 9:
                cout << "You entered " << numConv << " which is IX as a roman numeral.\n";
                break;

            default:
                cout << "You entered " << numConv << " which is X as a roman numeral.\n";
        }
    else {

            cout << "You have entered an invalid number. Please enter an integer 1-10.\n";
            cout << "Please run the program again with a valid entry.\n";
    }
        return 0;
    }
