#include "RequestCalculations.h"
#include <iostream>
#include "functions.h"

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

void RequestCalculations::requestSquareRoot(){
    cout << "Enter the Number" << endl;
    double num,result;
    askForInput(num, "The value is required to complete the operation");
    squareroot(num,result);
    cout << "The answer is: " << result << endl;
}


void RequestCalculations::requestExponential(){
    cout << "Enter the first Number" << endl;
    double firstNumber, secondNumber;
    double result;
    askForInput(firstNumber, "Enter the first number");
    cout << "Enter the second Number" << endl;
    askForInput(secondNumber, "Enter the second number");
    exponential(firstNumber, secondNumber, result);
    cout << "The answer is: " << result << endl;
}


void RequestCalculations::requestSine(){
    cout << "Enter the Number" << endl;
    double num,result;
    askForInput(num, "Enter the number");
    sine(num,result);
    cout << "The answer is: " << result << endl;
}

void RequestCalculations::requestCosine(){
    cout << "Enter the Number" << endl;
    double num,result;
    askForInput(num, "Enter the number");
    cosine(num,result);
    cout << "The answer is: " << result << endl;
}

void RequestCalculations::requestTangent(){
    cout << "Enter the Number" << endl;
    double num,result;
    askForInput(num, "Enter the number");
    tangent(num,result);
    cout << "The answer is: " << result << endl;
}

void RequestCalculations::requestToDecimal(){
     cout << "Enter the first Number" << endl;
    double firstNumber, secondNumber;
    double result;
    askForInput(firstNumber, "Enter the first number");
    cout << "Enter the second Number" << endl;
    askForInput(secondNumber, "Enter the second number");
    toDecimal(firstNumber, secondNumber, result);
    cout << "The answer is: " << result << endl;
}


RequestCalculations::~RequestCalculations()
{
    //dtor
}
