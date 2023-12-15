#include <cmath>

#include "AdvancedOperations.h"

//source file for implementing the advanced operations

AdvancedOperations::AdvancedOperations(/* args */)
{
}

void AdvancedOperations::squareroot(double value, double &result)
{
    result = sqrt(value);
}

void AdvancedOperations::exponential(double firstValue,double secondValue, double& result)
{
    result = pow(firstValue,secondValue);
}


void AdvancedOperations::sine(double value, double &result)
{
    result = sin(value);
}



void AdvancedOperations::cosine(double value, double &result)
{
    result = cos(value);
}


void AdvancedOperations::tangent(double value, double &result)
{
    result = tan(value);
}

void AdvancedOperations::toDecimal(double firstValue,double secondValue, double& result)
{
    result = firstValue / secondValue;
}


AdvancedOperations::~AdvancedOperations()
{
}
