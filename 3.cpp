/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on July 7, 2015, 12:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float rent, phone, utilities, cable;
    
    cout << "Enter rent";
    cin >> rent;
    cout << "Enter phone bill";
    cin >> phone;
    cout << "Enter Utilities cost";
    cin >> utilities;
    cout << "Enter cable bill";
    cin >> cable;
    cout << "Total monthly cost" << (rent + phone + utilities + cable) << endl;
    cout << "Total yearly cost" << (rent + phone + utilities + cable) * 12;
            
      
    

    return 0;
}

