/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on July 7, 2015, 2:58 PM
 */

#include <iostream>

using namespace std;

float weight;
float pallet;
float widget = 9.2;

int main(int argc, char** argv) {
    
cout << "enter pallet weight: ";
cin >> weight;
cout << "Number of pallets: ";
cin >> pallet;

cout << "Number of widgets: " << (weight - pallet) / widget;

    return 0;
}

