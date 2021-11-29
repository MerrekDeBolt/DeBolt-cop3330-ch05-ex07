/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Merrek DeBolt
 */

#include <iostream>
#include "std_lib_facilities.h"

int main() 
{
    string operation;
    double a, b, c, resultAdd, resultSub;

    cout << "Please enter a, b, and c, all separated by spaces: ";
    
    while (cin >> a >> b >> c)
    {
        if (pow(b, 2) - (4*a*c) >= 0)
        {
            resultAdd = (-b + sqrt(pow(b, 2) - (4 * a * c)))/(2*a);
            resultSub = (-b - sqrt(pow(b, 2) - (4 * a * c)))/(2*a);

            cout << "The answers are " << resultAdd << " and " << resultSub;
        }
        else
            cout << "\nThere are no real roots, because the square root would always be less than zero.";

        cout << "\nPlease enter a, b, and c, all separated by spaces: ";
    }

    return 0;
}