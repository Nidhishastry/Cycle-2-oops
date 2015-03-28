//
//  main.cpp
//  cpp-2-shape
//
//  Created by Kumar Divya  Rajat on 28/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class shape{
protected:
    double height;
    double width;
    
public:
    void get_data(double a , double  b)
    {
        height=a;
        width=b;
    }
    virtual void display_area()=0;
};

class triangle: public shape{
public:
    void display_area()
    {
        cout<<"The area of triangle with height-> "<<height<<" and width-> "<<width<<" is "<<(height * width )/2<<" .\n";
    }
};

class rectangle : public shape{
public:
    void display_area()
    {
         cout<<"The area of rectangle with height-> "<<height<<" and width-> "<<width<<" is "<<(height * width )<<" .\n";
    }
};

int main(int argc, const char * argv[]) {
    triangle t;
    t.get_data(12, 24);
    rectangle r;
    r.get_data(12, 24);
    t.display_area();
    r.display_area();
}
