#include <iostream>

#include "userInput.h"
#include "RequestCalculations.h"

using namespace std;

int main()
{
    cout << "Hey!! welcome to this simple calcultor app." << endl;

    cout << "Select the operation you will like to perform by typing the number before the operator." << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    int operation{};

    askForInput(operation,"Enter the number before the operator specifying the operation you want to perform");

    while(operation >= 5 || operation <= 0)
    {
        cout << "Number must be between 1 and 4" << endl;
        askForInput(operation,"");
    }

    RequestCalculations requestCalculations;

    switch(operation)
    {
    case 1:
        requestCalculations.requestAddition();

        break;
    case 2:
         requestCalculations.requestSubtraction();

        break;
    case 3:
        requestCalculations.requestMultiplication();
        break;
    case 4:
         requestCalculations.requestDivision();

        break;

    }

    return 0;
}
