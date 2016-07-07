//
//  main.cpp
//  HowManyCoins
//
//  Created by Brent Perry on 7/7/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    int penny, nickel, dime, quarter, half, dollar;
    int dollars = 0, cents = 0;
    
    cout << "How many pennies do you have: ";
    cin >> penny;
    cout << "How many nickels do you have: ";
    cin >> nickel;
    cout << "How many dimes do you have: ";
    cin >> dime;
    cout << "How many quarters do you have: ";
    cin >> quarter;
    cout << "How many half-dollars do you have: ";
    cin >> half;
    cout << "How many silver dollars do you have: ";
    cin >> dollar;
    
    cents = penny + (nickel * 5) + (dime * 10) + (quarter * 25) + (half * 50) + (dollar * 100);
    dollars = cents / 100;
    cents = cents % 100;
    
    cout << "\n";
    
    if (penny == 1)
        cout << "You have " << penny << " penny.\n";
    else
        cout << "You have " << penny << " pennies.\n";
    if (nickel == 1)
        cout << "You have " << nickel << " nickel.\n";
    else
        cout << "You have " << nickel << " nickels.\n";
    if (dime == 1)
        cout << "You have " << dime << " dime.\n";
    else
        cout << "You have " << dime << " dimes.\n";
    if (quarter == 1)
        cout << "You have " << quarter << " quarter.\n";
    else
        cout << "You have " << quarter << " quarters.\n";
    if (half == 1)
        cout << "You have " << half << " half-dollar.\n";
    else
        cout << "You have " << half << " half-dollars.\n";
    if (dollar == 1)
        cout << "You have " << dollar << " silver dollar.\n";
    else
        cout << "You have " << dollar << " silver dollars.\n";
    
    cout << "The value of all your coins is $" << dollars << "." << cents << ".\n";
    
    return 0;
}
