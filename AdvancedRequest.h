#include <iostream>

#include "functions.h"

using std::cout;
using std::endl;

void advancedOpp(){
        cout << "Enter the number before the required operation" << endl;

        cout << "1. Squareroot" << endl;
        cout << "2. Exponential" << endl;
        cout << "3. Sine" << endl;
        cout << "4. Cosine" << endl;
        cout << "5. Tangent" << endl;
        cout << "6. Convert fraction to decimal" << endl;

    int advancedOperand{};
    double firstValue{},secondValue{};

    askForInput(advancedOperand,"Enter the number before the requird operation");

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