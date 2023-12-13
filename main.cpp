#include <iostream>

#include "functions.h"
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
    cout << "5. Advanced operations" << endl;

    int operation{};

    askForInput(operation,"Enter the number before the operator specifying the operation you want to perform");

    while(operation >= 6 || operation <= 0)
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
    case 5:
         cout << "Enter the number before the required operation" << endl;

        cout << "1. Squareroot" << endl;
        cout << "2. Exponential" << endl;
        cout << "3. Sine" << endl;
        cout << "4. Cosine" << endl;
        cout << "5. Tangent" << endl;
        cout << "6. Convert fraction to decimal" << endl;

        break;

    }

    int advancedOperand{};
    double firstValue{},secondValue{};

    askForInput(advancedOperand,"Enter the number before the requird operation");

    switch (advancedOperand)
    {
    case 1:
        requestCalculations.requestSquareRoot();
        break;
   case 2:
        requestCalculations.requestExponential();
        break;
    case 3:
        requestCalculations.requestSine();
        break;
    case 4:
        requestCalculations.requestCosine();
        break;
    case 5:
        requestCalculations.requestTangent();
        break;
    case 6:
        requestCalculations.requestToDecimal();
        break;
    
    }

    return 0;
}
