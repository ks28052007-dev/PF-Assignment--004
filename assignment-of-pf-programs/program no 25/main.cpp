#include <iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,s,area;
cout<<"Enter the three sides of a triangle to find its area\n";
cin>>a;
cin>>b;
cin>>c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"The area of the Triangle is "<<area;
    return 0;
}