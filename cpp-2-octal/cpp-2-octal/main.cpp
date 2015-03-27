//
//  main.cpp
//  cpp-2-octal
//
//  Created by Kumar Divya  Rajat on 27/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

class octal{
    int num;
public:
    octal(){}
    
    octal(int x)
    {
        int rem=0,sum=0,p=0;
        while( x>0 )
        {
            rem=x%8;
            sum=sum+rem*pow(10,p);
            p++;
            x=x/8;
        }
        num=sum;
    }
    
    int operator + (int k)
    {
        int sum=0,rem=0,h,p=0;
        
        h=num;
        
        while( h>0 )
        {
            rem=h%10;
            sum=sum+rem*pow(8,p);
            p++;
            h=h/10;
        }
        
        return (sum+k);
    }
    
   friend ostream & operator << ( ostream &out, octal &h );
};

ostream & operator << ( ostream & out, octal &m )
{
    cout<<m.num;
    return out;
}


int main(int argc, const char * argv[]) {
    cout<<"Enter a number:-\n";
    int x;
    cin>>x;
    octal h = x;
    cout<<h<<endl;
    cout<<"Enter a value to be added to be added to the octal number\n ";
    int k;
    cin>>k;
    int y = h + k;
    cout<<"The value of y is "<<y<<endl;
}
