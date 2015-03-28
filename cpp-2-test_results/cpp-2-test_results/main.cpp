//
//  main.cpp
//  cpp-2-test_results
//
//  Created by Kumar Divya  Rajat on 28/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class student
{
    int roll_no;
public:
    void set_roll()
    {
        cout<<"Enter roll number\n";
        cin>>roll_no;
    }
    
    void get_roll()
    {
        cout<<"ROLL NUMBER -> "<<roll_no<<".\n";
    }
};

class test : public student
{
protected:
    int m[2];
public:
    void set_marks()
    {
        int i=0;
        while(i<2)
        {
            cout<<"Enter the marks of subject"<<i+1<<endl;
            cin>>m[i];
            i++;
        }
        cout<<endl;
    }
    
    void get_marks()
    {
        cout<<"The marks in 2 subjects are\n";
        int i=0;
        while(i<2)
        {
            cout<<m[i]<<"\t";
            i++;
        }
        cout<<endl;
    }
};

class result : public test
{
    float result;
public:
    void input()
    {
        set_roll();
        set_marks();
    }
    void display()
    {
        result=m[0]+m[1];
        get_roll();
        cout<<" - - - - - - - - -\n";
        get_marks();
        cout<<" - - - - - - - - -\n";
        cout<<"Total marks ->"<<result<<" .\n";
        cout<<" - - - - - - - - -\n";
    }
};


int main(int argc, const char * argv[]) {
    result r;
    r.input();
    r.display();
}
