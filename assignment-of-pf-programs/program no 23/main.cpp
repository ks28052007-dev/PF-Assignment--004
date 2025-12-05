
#include <iostream>
using namespace std;
int main()
{
    float area,circumference,pi,r;
    pi=3.1417;
    cout<<"enter the raduis of the circle (in cm) to find its area and circumference  ";
    cin>>r;
    area=pi*r*r;
    circumference=2*pi*r;
    cout<<"The circumference of circle is "<<circumference<<"\nThe area of circle is "<<area;

    return 0;
}