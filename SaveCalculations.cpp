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

//constructor for calculations involving only a single input
SaveCalculations::SaveCalculations(string operation, string firstValue)
{
     this -> firstValue = firstValue;
    this -> operation = operation;
    thirdValue = "";

//saving the operation performed
    writeToFile();
}

//contructor for calculations involving two inputs
SaveCalculations::SaveCalculations(string firstValue,string operation,string thirdValue)
{
    this -> firstValue = firstValue;
    this -> operation = operation;
    this -> thirdValue = thirdValue;

//saving the operation performed 
    writeToFile();
}

//function to save history to file
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

//function to read the history from file
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

//ensuring all opened files are closed

SaveCalculations::~SaveCalculations()
{
    if(historyFile.is_open())
        historyFile.close();
}
