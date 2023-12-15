#ifndef ADVANCEDOPERATIONS_H
#define ADVANCEDOPERATIONS_H

//header file for implementing advanced operations
//Actual implementation details in AdvancedOperations.cpp
class AdvancedOperations
{
private:
    /* data */
public:
    AdvancedOperations(/* args */);

    void squareroot(double value, double& result);
    void exponential(double firstValue, double secondValue,double& result);
    void sine(double firstValue, double& result);
    void cosine(double firstValue, double& result);
    void tangent(double firstValue, double& result);
    void toDecimal(double firstValue, double secondValue, double& result);


    ~AdvancedOperations();
};


#endif