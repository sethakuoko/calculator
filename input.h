#ifndef INPUT_H
#define INPUT_H

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


#endif // INPUT_H
