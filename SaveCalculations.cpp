#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>
#include <cstdlib>

#include "SaveCalculations.h"

using std::string;
using std::ios;
using std::endl;
using std::getline;
using std::cout;
using std::exit;

SaveCalculations::SaveCalculations(string operation, string firstValue)
{
     this -> firstValue = firstValue;
    this -> operation = operation;
    thirdValue = "";
}
SaveCalculations::SaveCalculations(string firstValue,string operation,string thirdValue)
{
    this -> firstValue = firstValue;
    this -> operation = operation;
    this -> thirdValue = thirdValue;

    writeToFile();
}

void SaveCalculations::writeToFile(){

    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    char* timeStr = std::ctime(&currentTime);

    historyFile.open("history.txt",ios::app);

    if(historyFile.is_open()){
        historyFile << timeStr;
        historyFile << ": " << firstValue << " " << operation << " " << thirdValue << endl;
        historyFile.close();
    }
    
}

void SaveCalculations::readFromFile(){
    historyFile.open("history.txt",ios::in);

    if(historyFile.is_open()){
        string line{};
        while (getline(historyFile,line)){
            cout << line<< endl;
        }
        historyFile.close();
    }
   
}

SaveCalculations::~SaveCalculations()
{
}
