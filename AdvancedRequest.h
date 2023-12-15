#include <iostream>

#include "functions.h"

using std::cout;
using std::endl;

//function to display and request advanced operations
void advancedOpp(){

//displaying advanced operation dialog 
        cout << "Enter the number before the required operation" << endl;

        cout << "1. Squareroot" << endl;
        cout << "2. Exponential" << endl;
        cout << "3. Sine" << endl;
        cout << "4. Cosine" << endl;
        cout << "5. Tangent" << endl;
        cout << "6. Convert fraction to decimal" << endl;

    int advancedOperand{};
    double firstValue{},secondValue{};
//requesting for advanced operation type from the user
    askForInput(advancedOperand,"Enter the number before the requird operation");

//requesting for the required operation 
    RequestCalculations requestCalculations;
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

}