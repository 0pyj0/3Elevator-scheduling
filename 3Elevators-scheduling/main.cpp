#include<iostream>
#include<cmath>
#include<fstream>
#include"elevator.cpp"
using namespace std;
int main()
{
	int i,u,j,k,sum1=0,n,sum2=0,sum3=0,a,b,c,times=0,timex=0,floor=0,w=0;
	class Elevator a1[10000],a2[10000],a3[10000];
	ifstream infile("input.txt");
	ofstream outfile1("output1.txt");
	ofstream outfile2 ("output2.txt");
	ofstream outfile3("output3.txt");
	infile>>n;
	i=0;j=0;k=0;
	for(u=0;u<n;u++)//将请求分类 
    {
	    infile>>a>>b>>c;
	    if(b%2==0&&c%2==0)
	    {
	        a3[i].fromfloor=b;
	        a3[i].gotofloor=c;
	        a3[i].timeq=a;
	        i++;
	    }
	    else if(b%2!=0&&c%2!=0)
	    {
	        a1[j].fromfloor=b;
	        a1[j].gotofloor=c;
	        a1[j].timeq=a;
	        j++;
	    }
	    else
	    {
	        a2[k].fromfloor=b;
	        a2[k].gotofloor=c;
	        a2[k].timeq=a;
	        k++;
		}
	}
	a=i;b=j;c=k;//用abc记录三个电梯的请求数量 
	//处理一号电梯的请求
	if(a!=0)
	{
	w=1;
	sum1=a1[0].timeq+a1[0].fromfloor;
	floor=a1[0].fromfloor;
	for(i=1;i<a;i++)
	{
		times=fabs(a1[i-1].gotofloor-a1[i].fromfloor);
		timex=fabs(a1[i].fromfloor-a1[i].gotofloor);
		if(a1[i].timeq<=sum1)
		a1[i].nowFloor1(times,times,floor,sum1,a1[i].gotofloor,w);
		else
		a1[i].nowFloor2(sum1,a1[i].fromfloor,w);
	}
    }
	//处理二号电梯的请求
	if(b!=0)
	{
	w=2;
	sum2=a2[0].timeq+a2[0].fromfloor;
	floor=a2[0].fromfloor;
	for(i=1;i<b;i++)
	{
		times=fabs(a2[i-1].gotofloor-a2[i].fromfloor);
		timex=fabs(a2[i].fromfloor-a2[i].gotofloor);
		if(a2[i].timeq<=sum2)
		a2[i].nowFloor1(times,times,floor,sum2,a2[i].gotofloor,w);
		else
		a2[i].nowFloor2(sum2,a2[i].fromfloor,w);
	}
    }
		//处理三号电梯的请求
	if(c!=0)
	{
	w=3;
	sum3=a3[0].timeq+a3[0].fromfloor;
	floor=a3[0].fromfloor;
	for(i=1;i<c;i++)
	{
		times=fabs(a3[i-1].gotofloor-a3[i].fromfloor);
		timex=fabs(a3[i].fromfloor-a3[i].gotofloor);
		if(a3[i].timeq<=sum3)
		a3[i].nowFloor1(times,times,floor,sum3,a3[i].gotofloor,w);
		else
		a3[i].nowFloor2(sum3,a3[i].fromfloor,w);
	}
    }
	return 0;
}
