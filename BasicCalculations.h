#ifndef BASICCALCULATIONS_H
#define BASICCALCULATIONS_H

//header file for performing basic calculations
//Actual implementation in BasicCalculations.cpp
class BasicCalculations
{
    public:
        BasicCalculations();
        ~BasicCalculations();

        void add(double a, double b, double& result);
        void subtract(double a, double b, double& result);
        void divide(double a, double b, double& result);
        void multiply(double a, double b, double& result);

    protected:

    private:


};

#endif // BASICCALCULATIONS_H
