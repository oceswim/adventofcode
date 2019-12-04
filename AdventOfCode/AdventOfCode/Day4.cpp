//
//  Day4.cpp
//  AdventOfCode
//
//  Created by Peretti Océane on 04/12/2019.
//  Copyright © 2019 Peretti Océane. All rights reserved.
//

#include "Day4.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int Day4::password()
{
    int data[6];
    int temp,temp1,counter,doubleOk;
    temp=temp1=counter=doubleOk=0;

  

    for(int i=123333; i<600000;i++)
    {
         data[0]= i / 100000 % 10;
          data[1]= i / 10000 % 10;
          data[2]= i / 1000 % 10;
          data[3]= i / 100 % 10;
          data[4]= i / 10 % 10;
          data[5]= i % 10;
        
        if(data[0]<=data[1]&&data[1]<=data[2]&&data[2]<=data[3]&&data[3]<=data[4]&&data[4]<=data[5])
        {
            if(data[0]==data[1] || data[1]==data[2]||data[2]==data[3]||data[3]==data[4]||data[4]==data[5])
            {
                count++;
            }
            
        }
    
            
    }
 
    
    return count;
}

