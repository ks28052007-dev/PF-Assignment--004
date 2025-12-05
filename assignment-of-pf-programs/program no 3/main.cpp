#include<iostream>
using namespace std;
int main()
{
    int a=20,b=10,temp;
    temp= 0;
    cout<<"Enter to values a and b before interchange are "<<a<<"  "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"Now the value of a=  "<<a<<" And b= "<<b<<endl;
    return 0;
}