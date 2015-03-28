//
//  main.cpp
//  cpp-2-18
//
//  Created by Kumar Divya  Rajat on 28/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#define PI 3.14

using namespace std;

class circle
{
protected:
    float radius;
    
};

class rectangle
{
protected:
    float height;
};

class cylinder : public circle, public rectangle
{
public:
    void set_data()
    {
        cout<<"Enter the radius and height of the cylinder\n";
        cin>>radius>>height;
    }
    
    void volume()
    {
       cout<<"The volume of cylinder with radius -> "<<radius<<" and height -> "<<height<<" is "<<(PI * radius * radius * height)<<".\n";
    }
};


int main(int argc, const char * argv[]) {
    cylinder c;
    c.set_data();
    c.volume();
}
