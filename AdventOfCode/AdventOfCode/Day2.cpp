//
//  Day2.cpp
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
#include <vector>
#include "Day2.hpp"
using namespace std;
int Day2::ProcessProgram(int one,int two)
{
     string x;
     string theNumber;
     ifstream myfile;
     myfile.open ("file2.txt");
     if (!myfile) {
         cerr << "Unable to open file datafile.txt";
         exit(1);   // call system to stop
     }
   
     while (myfile >> x) {
         theNumber+=x;
       
     }
     myfile.close();
     istringstream ss(theNumber);
     int myNumber;
     string token;
    vector<int> data;
     while(getline(ss, token, ',')) {
         myNumber = stoi(token);
         data.push_back(myNumber);
     }
    data[1] = one;
    data[2] = two;

    int stop=0;
    for (int i = 0; i<data.size();i++)
    {
        switch (data[i])
        {
            case 1:
            {
                int firstNum =data[data[i+1]];//noun
                int secondNum =data[data[i+2]];//verb
                data[data[i+3]] = firstNum + secondNum;
                i=i+3;
                break;
            }
            case 2:
            {
                int firstMult =data[data[i+1]];
                int secondMult=data[data[i+2]];
                data[data[i+3]] = firstMult * secondMult;
                i=i+3;
                break;
            }
            case 99:
            {
                value = data[0];
                stop=1;
                break;
            }
            default:
                break;
        }
        if(stop==1)
        {break;}
    }
 
    return value;
}

int Day2::ProcessRandom()
{
    int result =0;
    while(result!=19690720)
    {
        int v1 = rand() % 100;         // v1 in the range 0 to 99
        int v2 = rand() % 100;         // v1 in the range 0 to 99
        result = ProcessProgram(v1, v2);
        if(result==19690720)
        {
            value2 = 100*v1+v2;
        }
    }
    return value2;
}


