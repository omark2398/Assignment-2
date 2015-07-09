/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on July 7, 2015, 2:02 PM
 */

#include <iostream>
using namespace std;

float average(float hits, float bats) { return hits/bats; }


int main () { 
    int bat;
    int hits;

    cout << "Number of times the player was at bat: ";
    cin >> bat;
    cout << "Number of hits: ";
    cin >> hits;
    
    cout << "Batting Average: " << average(hits, bat) << endl;

    return 0;
}


