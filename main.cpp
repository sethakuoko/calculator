#include <iostream>

#include "functions.h"
#include "RequestCalculations.h"
#include "SaveCalculations.h"
#include "AdvancedRequest.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "Hey!! welcome to this simple calcultor app." << endl;

    cout << "Select the operation you will like to perform by typing the number before the operator." << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Advanced operations" << endl;
    cout << "6. View History" << endl;

    int operation{};

    askForInput(operation,"Enter the number before the operator specifying the operation you want to perform");

    while(operation >= 7 || operation <= 0)
    {
        cout << "Number must be between 0 and 7" << endl;
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
         advancedOpp();
        break;
    case 6:
        SaveCalculations read;
        read.readFromFile();
        break;
    }

    
  
    return 0;
}
