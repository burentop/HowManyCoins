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
    int cents = 0;
    
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
    
    cout << "\n";
    cout << "You have " << penny << " pennies.\n";
    cout << "You have " << nickel << " nickels.\n";
    cout << "You have " << dime << " dimes.\n";
    cout << "You have " << quarter << " quarters.\n";
    cout << "You have " << half << " half-dollars.\n";
    cout << "You have " << dollar << " silver-dollars.\n";
    cout << "The value of all your coins is " << cents << " cents.\n";
    
    return 0;
}
