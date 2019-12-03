//
//  Day3.cpp
//  AdventOfCode
//
//  Created by Peretti Océane on 03/12/2019.
//  Copyright © 2019 Peretti Océane. All rights reserved.
//

#include "Day3.hpp"
#include <math.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

const int WIDTH=1000, HEIGHT=1000;
void Day3::processFile()
{
  
    
    bool next;
    next=false;
    ifstream is("file3.txt");     // open file
    char c;
    while (is.get(c))          // loop getting single characters
    {
        if(next ==false)
        {
            firstInstruction+=c;
            if(c == '\n')
            {
                next=true;
            }
        }
        else{
            secondInstruction+=c;
        }
    }
    is.close();                // close file

    cout<<"first "<<firstInstruction<<" second:"<<secondInstruction<<endl;

}
void Day3::drawGrid()
{
    for(int row=0;row < 1000;row++)
    {
        for(int col=0; col<2000;col++)
        {
            theGrid[row][col]='.';
            if(col==500 && row==500)
            {
                theGrid[row][col]='o';
            }
            cout<<theGrid[row][col];
        }
    }
}
void Day3::drawInstructions()
{
    istringstream s1(firstInstruction);
    istringstream s2(secondInstruction);
    vector<string> firstSet,secondSet;
       string token;
       while(getline(s1, token, ',')) {
           firstSet.push_back(token);
          
       }
    string token2;
    while(getline(s2, token2, ',')) {
        secondSet.push_back(token2);
       
    }
    
    
    
}
