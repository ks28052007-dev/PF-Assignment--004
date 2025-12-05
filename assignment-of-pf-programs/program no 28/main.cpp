#include <iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,disc;
cout<<"enter the value of a b and c to find the descriminant ";
cin>>a;
cin>>b;
cin>>c;
disc=(b*b)-(4*a*c);
cout<<"The discriminant is equal to "<<disc<<endl;
    return 0;
}