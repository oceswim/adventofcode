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
    cout << "#First challenge Day1# The sum: "<< theFirstChallenge.getSumFuel() <<endl;
    cout << "#Second challenge Day1# The Big sum: "<< secondChallenge.getTotalFuelSum() <<endl;

    return 0;
    
}

