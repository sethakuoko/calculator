#ifndef FUNCTIONS_H
#define FUNCTIONS_H


#include <iostream>
#include <limits>
#include "BasicCalculations.h"
#include "RequestCalculations.h"

using std::cin;
using std::string;
using std::cout;
using std::endl;

//template function to take care of input operations
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

#endif // USERINPUT_H
