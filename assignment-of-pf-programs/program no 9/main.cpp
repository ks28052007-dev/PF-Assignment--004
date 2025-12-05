#include <iostream>
using namespace std;
int main()
{
   int a,b,c,d,max;
   cout<<"enter four numbers to find which one is the greatest ";
   cin>>a;
   cin>>b;
   cin>>c;
   cin>>d;
   max=a;
   if(max<b)
   max=b;
   if(max<c)
   max=c;
   if(max<d)
   max=d;
   
   cout<<"The greatest number is "<<max;

    return 0;
}