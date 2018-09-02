//
// Created by Kuljot Singh Biring on 6/16/18.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double stockPurchase = 45.50 * 100,
            stockSell = 47.92 * 100,
            purchaseCommission = stockPurchase * .02,
            sellCommission = stockSell * .02,
            profitLoss = (stockSell + sellCommission) - (stockPurchase + purchaseCommission);


    cout << fixed << setprecision(2) << endl;
    cout << "Purchase amount:     $" << setw(6) << stockPurchase << endl;
    cout << "Purchase commission: $" << setw(7) << purchaseCommission << endl;
    cout << "Sell amount:         $" << setw(6) << stockSell << endl;
    cout << "Sell commission:     $" << setw(7) << sellCommission << endl;
    cout << "Profit/Loss:         $" << setw(7) << profitLoss << endl;

}
