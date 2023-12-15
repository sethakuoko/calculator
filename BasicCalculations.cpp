#include "BasicCalculations.h"

//source file to implement r basic operations

BasicCalculations::BasicCalculations()
{

}

void BasicCalculations::add(double a, double b, double& result)
{
    result = a + b;
}

void BasicCalculations::subtract(double a, double b, double& result)
{
 result = a - b;
}

void BasicCalculations::divide(double a, double b, double& result)
{
 result = a / b;
}

void BasicCalculations::multiply(double a, double b, double& result)
{
 result = a * b;
}

BasicCalculations::~BasicCalculations()
{
    //dtor
}
