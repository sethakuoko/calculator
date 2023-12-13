#ifndef ADVANCEDOPERATIONS_H
#define ADVANCEDOPERATIONS_H

class AdvancedOperations
{
private:
    /* data */
public:
    AdvancedOperations(/* args */);

    void sqrt(double value, double& result);
    void exponential(double firstValue, double secondValue,double& result);
    void sin(double firstValue, double& result);
    void cosin(double firstValue, double& result);
    void tan(double firstValue, double& result);
    void toDecimal(double firstValue, double secondValue, double& result);


    ~AdvancedOperations();
};


#endif