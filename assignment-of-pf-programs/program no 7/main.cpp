
#include <iostream>
using namespace std;
int main()
{
 int sum,PF,IC,CG;
 float avg;
 cout<<"enter your marks out of  100 ofProgramming fundamentals,Introduction to computer and computer graphics ";
 cin>>PF;
 cin>>IC;
 cin>>CG;
 sum=PF+CG+IC;
 avg=sum/3.0;
 cout<<"the total marks are "<<sum<<" And the Average is "<<avg;
 
    return 0;
}