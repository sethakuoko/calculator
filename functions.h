#ifndef FUNCTIONS_H
#define FUNCTIONS_H


#include <iostream>
#include <limits>
#include "BasicCalculations.h"

using std::cin;
using std::string;
using std::cout;
using std::endl;


template <typename T>
void askForInput(T& inputVariable, string instructions)
{

    cin >> inputVariable;

    if(cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

        cout << "Operation failed." << endl;
        cout << instructions << endl;

        askForInput(inputVariable, instructions);
    }
}

// void displayAdvanceFeatures(){
//     cout << "Enter the number before the required operation" << endl;

//     cout << "1. Squareroot" << endl;
//     cout << "1. Exponential" << endl;
//     cout << "1. Sine" << endl;
//     cout << "1. Cosine" << endl;
//     cout << "1. Tangent" << endl;
//     cout << "1. Convert fraction to decimal" << endl;
// }

#endif // USERINPUT_H
