#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int hours,minutes,seconds,tsec;
    cout<<"enter the time in hours minutes and seconds ";
    cin>>hours;
    cin>>minutes;
    cin>>seconds;
    tsec=(hours*3600)+(minutes*60)+seconds;
    cout<<"the total time in seconds is "<<tsec<<" seconds";
    return 0;
}