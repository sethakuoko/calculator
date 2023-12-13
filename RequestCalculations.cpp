#include "RequestCalculations.h"
#include <iostream>
#include "userInput.h"

using std::cout;
using std::endl;
using std::string;

RequestCalculations::RequestCalculations()
{
    //ctor
}

void RequestCalculations::requestAddition()
{
    cout << "Enter the first Number" << endl;
    double firstNumber, secondNumber;
    double result;
    askForInput(firstNumber, "Enter the first number");
    cout << "Enter the second Number" << endl;
    askForInput(secondNumber, "Enter the second number");
    add(firstNumber, secondNumber, result);
    cout << "The answer is: " << result << endl;
}

void RequestCalculations::requestSubtraction()
{
    cout << "Enter the first Number" << endl;
    double firstNumber, secondNumber;
    double result;
    askForInput(firstNumber, "Enter the first number");
    cout << "Enter the second Number" << endl;
    askForInput(secondNumber, "Enter the second number");
    subtract(firstNumber, secondNumber, result);
    cout << "The answer is: " << result << endl;
}


void RequestCalculations::requestMultiplication()
{

     cout << "Enter the first Number" << endl;
    double firstNumber, secondNumber;
    double result;
    askForInput(firstNumber, "Enter the first number");
    cout << "Enter the second Number" << endl;
    askForInput(secondNumber, "Enter the second number");
    multiply(firstNumber, secondNumber, result);
    cout << "The answer is: " << result << endl;
}



void RequestCalculations::requestDivision()
{
     cout << "Enter the first Number" << endl;
    double firstNumber, secondNumber;
    double result;
    askForInput(firstNumber, "Enter the first number");
    cout << "Enter the second Number" << endl;
    askForInput(secondNumber, "Enter the second number");
    divide(firstNumber, secondNumber, result);
    cout << "The answer is: " << result << endl;
}

RequestCalculations::~RequestCalculations()
{
    //dtor
}
