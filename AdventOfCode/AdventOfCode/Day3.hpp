//
//  Day3.hpp
//  AdventOfCode
//
//  Created by Peretti Océane on 03/12/2019.
//  Copyright © 2019 Peretti Océane. All rights reserved.
//

#ifndef Day3_hpp
#define Day3_hpp
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
class Day3{
protected:
    string line(int x,string character);
    
public:
    void processFile();
    string firstInstruction,secondInstruction;
    void drawGrid();
    char theGrid[1000][1000];
    void drawInstructions();
    
};
#endif /* Day3_hpp */
