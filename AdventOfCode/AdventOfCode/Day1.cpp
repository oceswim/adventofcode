//
//  Day1.cpp
//  AdventOfCode
//
//  Created by Peretti Océane on 02/12/2019.
//  Copyright © 2019 Peretti Océane. All rights reserved.
//

#include "Day1.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int Day1::getSumFuel()
{
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
    int myNumber;
    string token;
    while(getline(ss, token, ',')) {
        myNumber = stoi(token);
        sum+= ((myNumber/3)-2);
    }
    
    myfile.close();
    return sum;
    //cout << "Sum = " << sum<< endl;
     
}
int Day1::getTotalFuelSum()
{
    
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
           myfile.close();
          istringstream ss(theNumber);
        
          int myNumber;
        
          
          string token;
          vector<int> data;
          while(getline(ss, token, ','))//getting each module's number and add it to array
          {
              
              myNumber = stoi(token);
              data.push_back(myNumber);
              
          }
          int count=0;
          int firstNum = 0;
         
         for(int x=0; x<data.size();x++)
          {
        firstNum = (data[x]/3)-2;
         BigSum+=firstNum;
         while(firstNum>2)
         {
            count = (firstNum/3)-2;
            firstNum=count;
            
             if(firstNum>0)
             {
            BigSum+=firstNum;
             }
         }
          }
      
            return BigSum;
}
