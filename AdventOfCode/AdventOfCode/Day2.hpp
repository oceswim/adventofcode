//
//  Day2.hpp
//  AdventOfCode
//
//  Created by Peretti Océane on 02/12/2019.
//  Copyright © 2019 Peretti Océane. All rights reserved.
//

#ifndef Day2_hpp
#define Day2_hpp

#include <stdio.h>
#include <vector>
using namespace std;
class Day2{
protected:
   int value;
   int value2;
   bool go;
public:
    int ProcessProgram(int one,int two);
    int ProcessRandom();
};
#endif /* Day2_hpp */
