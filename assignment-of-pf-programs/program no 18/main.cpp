#include<iostream>
using namespace std;
int main()
{
float s,vi,t,a;
cout<<"Enter the intial velocity,time and acceleration to find the distance \n";
cout<<"Enter the Intial velocity ";
cin>>vi;
cout<<"\nEnter the time ";
cin>>t;
cout<<"\nEnter the acceleration ";
cin>>a;
s=(vi*t) + 0.5*(a*(t*t));
cout<<"\nThe distance is equal to "<<s;
    return 0;
}