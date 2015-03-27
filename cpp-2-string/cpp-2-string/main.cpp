//
//  main.cpp
//  cpp-2-string
//
//  Created by Kumar Divya  Rajat on 27/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class string1{
    char *s;
    int length;
    
public:
    string1()
    {
        length=0;
        s = new char[length+1];
    }
    string1(char *p)
    {
        length=(int)strlen(p);
        s = new char[length+1];
        strcpy(s, p);
    }
    
    string1(string1 &old)
    {
        length=old.length;
        s= new char[length+1];
        strcpy(s, old.s);
    }
    
    string1 operator + (const string1 &a)
    {
        string1 x;
        x.length=(int)length + a.length;
        x= new char[length+1];
        strcpy(x.s,s);
        strcat(x.s, a.s);
        return x;
    }
    
    void display()
    {
        cout<<s<<endl;
    }
};

int main(int argc, const char * argv[]) {
    char *one;
    one = "BMSCE";
    string1 s1(one);
    char *two;
    two = "Bangalore";
    string1 s2(two);
    string1 s3 = (s1 + s2);
    s1.display();
    s2.display();
}
