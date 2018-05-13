#include<iostream>
#include<math.h>
#include<fstream>
#include"elevator.h"
using namespace std;
ifstream infile("input.txt");
ofstream outfile1("output1.txt");
ofstream outfile2 ("output2.txt");
ofstream outfile3("output3.txt");
Elevator::Elevator()
{
    
};
Elevator::~Elevator()
{
    
};
Elevator::nowFloor1(int i,int j,int &r,int &s,int f,int w)
{
    s=s+i+1;
    if(w==1)
    outfile1<<s-1<<" "<<r<<endl;
    else if(w==2)
    outfile2<<s-1<<" "<<r<<endl;
    else
    outfile3<<s-1<<" "<<r<<endl;
    r=f;
    s=s+j+1;
    if(w==1)
    outfile1<<s-1<<" "<<r<<endl;
    else if(w==2)
    outfile2<<s-1<<" "<<r<<endl;
    else
    outfile3<<s-1<<" "<<r<<endl;
};
Elevator::nowFloor2(int &s,int f,int w)
{
    s=timeq+1;
    if(w==1)
    outfile1<<s-1<<" "<<f<<endl;
    else if(w==2)
    outfile2<<s-1<<" "<<f<<endl;
    else
    outfile3<<s-1<<" "<<f<<endl;
};
