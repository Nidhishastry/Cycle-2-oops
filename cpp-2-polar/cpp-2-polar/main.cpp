//
//  main.cpp
//  cpp-2-polar
//
//  Created by Kumar Divya  Rajat on 27/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class polar{
    int radius;
    float angle;
    
public:
    polar(){};
    polar(int m, float n)
    {
        radius=m;
        angle=n;
    }

    polar operator+(const polar &p)
    {
        polar a;
        
    }

};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
