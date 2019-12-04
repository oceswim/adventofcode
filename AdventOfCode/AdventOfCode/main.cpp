#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include "Day1.hpp"
#include "Day2.hpp"
#include "Day3.hpp"
#include "Day4.hpp"
using namespace std;


int main(int argc, char** argv) {
    Day1 theFirstChallenge;
    Day2 firstDay2Challenge;
    //Day3 thirdChallenge;
    Day4 fourthChallenge;
    //cout << "#First challenge Day1# The sum: "<< theFirstChallenge.getSumFuel() <<endl;
    //cout << "#Second challenge Day1# The Big sum: "<< theFirstChallenge.getTotalFuelSum() <<endl;
   // cout << "#First challenge Day2# The value: "<< firstDay2Challenge.ProcessProgram(12,2) <<endl;
    cout << "#First challenge Day4# The value2: "<< fourthChallenge.password1() <<endl;
    cout << "#Second challenge Day4# The value2: "<< fourthChallenge.password2() <<endl;
    //thirdChallenge.processFile();
    //thirdChallenge.drawGrid();
    //thirdChallenge.drawInstructions();

    return 0;
    
}

