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


    protected:

    private:
};

#endif // REQUESTCALCULATIONS_H
