#ifndef SaveCalculations_H
#define SaveCalculations_H

#include <iostream>
#include <fstream>

using std::string;
using std::fstream;

//header class for saving operations
//Actual implementation details in SaveCalculations.cpp
class SaveCalculations
{
private:
    void writeToFile();
    string firstValue, operation, thirdValue;
    fstream historyFile;
public:
    SaveCalculations() = default;
    SaveCalculations(string operation, string firstValue);
    SaveCalculations(string firstValue,string secondValue,string thirdValue);
    void readFromFile();
    ~SaveCalculations();
};

#endif 
