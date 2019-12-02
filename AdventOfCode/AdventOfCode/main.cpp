//
//  main.cpp
//  AdventOfCode
//
//  Created by Peretti Océane on 02/12/2019.
//  Copyright © 2019 Peretti Océane. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main() {
    
    string x;
    string theNumber;
    ifstream myfile;
    myfile.open ("file.txt");
    if (!myfile) {
        cerr << "Unable to open file datafile.txt";
        exit(1);   // call system to stop
    }
    while (myfile >> x) {
        theNumber+=x;
      
    }
    istringstream ss(theNumber);
    int sum = 0;
    int myNumber;
    string token;
    while(getline(ss, token, ',')) {
        myNumber = stoi(token);
        sum+= ((myNumber/3)-2);
    }
    std::cout << "The sum: " << sum;
    myfile.close();
    //cout << "Sum = " << sum<< endl;
      return 0;
    
}
