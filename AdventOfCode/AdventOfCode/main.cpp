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
    Day1 secondChallenge;
    Day2 firstDay2Challenge;
    cout << "#First challenge Day1# The sum: "<< theFirstChallenge.getSumFuel() <<endl;
    cout << "#Second challenge Day1# The Big sum: "<< secondChallenge.getTotalFuelSum() <<endl;
    cout << "#First challenge Day2# The value: "<< firstDay2Challenge.ProcessProgram() <<endl;


    return 0;
    
}

