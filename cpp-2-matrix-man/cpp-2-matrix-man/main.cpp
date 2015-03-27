//
//  main.cpp
//  cpp-2-matrix-man
//
//  Created by Kumar Divya  Rajat on 27/03/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class matrix{
    int m[10][10];
    int row,col;
    static int count;
    
public:
    matrix(){}
    matrix(int a, int b)
    {
        row=a;
        col=b;
        cout<<"Enter the values of matrix"<<++count<<endl;
        int i,j;
        for(i=0;i<col;i++)
        {
            for(j=0;j<row;j++)
            {
                cin>>m[i][j];
            }
        }
    }
    
    bool operator == (matrix &m2)
    {
        if(row == m2.row && col == m2.col )
        {
            return 1;
        }
        return 0;
    }
    
    matrix operator + (matrix & m1)
    {
        matrix a;
        a.row=row;
        a.col=col;
        int i,j;
        for(i=0;i<col;i++)
            for(j=0;j<row;j++)
            {
                a.m[i][j]=m[i][j]+m1.m[i][j];
            }
        return a;
    }
    
    matrix operator - (matrix & m1)
    {
        matrix a;
        a.row=row;
        a.col=col;
        int i,j;
        for(i=0;i<col;i++)
            for(j=0;j<row;j++)
            {
                a.m[i][j]=m[i][j] - m1.m[i][j];
            }
        return a;
    }

    friend ostream& operator << (ostream& out_put, matrix m1);
};

ostream& operator << (ostream& out_put, matrix m1)
{
    int i,j;
    for(i=0;i<(m1.col);i++)
    {
        for(j=0;j<(m1.row);j++)
        {
         cout<<m1.m[i][j]<<"\t";
        }
    }
    cout<<endl;
    return out_put;
}

int matrix::count=0;

int main(int argc, const char * argv[]) {
    matrix m3,m4;
    cout<<"Enter the value of rows and columns for matrix 1"<<endl;
    int m,n;
    cin>>m>>n;
    matrix mat1(m,n);
    cout<<"Enter the vlaue of rows and columns for matrix 2"<<endl;
    cin>>m>>n;
    matrix mat2(m,n);
    
    if(mat1 == mat2)
    {
        m3 = mat1 + mat2;
        m4 = mat1 - mat2;
        
        cout<<"The added matrix m3 is \n";
        cout<<m3<<endl;
        
        cout<<"The subtracted matrix m4 is \n";
        cout<<m4<<endl;

    }
    else{
        cout<<"The rows and columns are not equal. Cannot perform arithmetic operarions."<<endl;
    }
    
}
