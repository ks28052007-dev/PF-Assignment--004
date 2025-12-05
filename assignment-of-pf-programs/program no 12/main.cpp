#include <iostream>
using namespace std;
int main()
{
const float pi=3.1417;
float h,R,vol;
cout<<"Enter the Radius and height of the Cylinder in cm to find its Volume ";
cin>>R;
cin>>h;
vol=pi*(R*R)*h;
cout<<"the volume of the Cylinder is "<<vol;
   
    return 0;
}