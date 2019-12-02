#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "Day1.hpp"
#include "Day2.hpp"
using namespace std;


int main(int argc, char** argv) {
    Day1 theFirstChallenge;
    Day2 firstDay2Challenge;
    cout << "#First challenge Day1# The sum: "<< theFirstChallenge.getSumFuel() <<endl;
    cout << "#Second challenge Day1# The Big sum: "<< theFirstChallenge.getTotalFuelSum() <<endl;
    cout << "#First challenge Day2# The value: "<< firstDay2Challenge.ProcessProgram(12,2) <<endl;
    cout << "#Second challenge Day2# The value2: "<< firstDay2Challenge.ProcessRandom() <<endl;


    return 0;
    
}

