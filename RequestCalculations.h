#ifndef REQUESTCALCULATIONS_H
#define REQUESTCALCULATIONS_H

#include "BasicCalculations.h"


class RequestCalculations : public BasicCalculations
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
