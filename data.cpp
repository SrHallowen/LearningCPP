//
// Created by PcJhon on 5/4/2026.
//

#include <iostream>

using namespace std;

int main () {

    cout << "Enter your value in celsius" << endl;
    double tCelsius;
    cin >> tCelsius;
    double fahrenheit = (tCelsius * 1.8) + 32;
    cout << fahrenheit;
}