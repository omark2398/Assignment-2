/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on July 7, 2015, 12:04 PM
 */

#include <iostream>

using namespace std;

int main()
{
    int gal, full, mpg;
    float average;

    cout << "Enter the number of gallons of gas your car can hold: ";
    cin >> gal;
    cout << "Enter the number of miles your car can drive on a full tank: ";
    cin >> full;


    mpg = full / gal;

    cout << "\nThe miles per gallon your car gets: " << mpg << "." << endl;

    return 0;
}

