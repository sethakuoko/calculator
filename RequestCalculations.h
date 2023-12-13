#ifndef REQUESTCALCULATIONS_H
#define REQUESTCALCULATIONS_H

#include "BasicCalculations.h"
#include "AdvancedOperations.h"

class RequestCalculations : public BasicCalculations, public AdvancedOperations
{
    public:
        RequestCalculations();
        ~RequestCalculations();

        void requestAddition();
        void requestSubtraction();
        void requestDivision();
        void requestMultiplication();
        void requestSquareRoot();
        void requestExponential();
        void requestSine();
        void requestCosine();
        void requestTangent();
        void requestToDecimal();

    protected:

    private:
};

#endif 
