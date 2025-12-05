
#include <iostream>
using namespace std;
int main()
{
 int sum,PF,IC,CG,PC,Cag;
 float avg;
 cout<<"enter your marks out of  100 of Pf,IC,CG,pre cal and Cag ";
 cin>>PF;
 cin>>IC;
 cin>>CG;
 cin>>PC;
 cin>>Cag;
 sum=PF+CG+IC+PC+Cag;
 avg=sum/5.0;
 cout<<"The total marks are "<<sum<<" And the Average is "<<avg;
 
    return 0;
}