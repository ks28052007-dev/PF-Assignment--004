#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    temp= 0;
    cout<<"Enter to values for interchange\nEnter the value of a\t ";
    cin>>a;
    cout<<"\nEnter the value of b\t";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Now the value of a=  "<<a<<" And b= "<<b<<endl;
    return 0;
}