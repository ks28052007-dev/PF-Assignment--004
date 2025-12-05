#include <iostream>
#include<string>
using namespace std;
int main()
{
    int age;
    float height;
    string name,gender;
    cout<<"enter your age ";
    cin>>age;
    cout<<"enter your name (without spaces) ";
    cin>>name;
    cout<<"enter your height in cm ";
    cin>>height;
    cout<<"enter your gender ";
    cin>>gender;
    cout<<"\nyour age is "<<age<<"\nyour name is "<<name<<"\nyour Height is "<<height<<" inches"<<"\nYour gender is "<<gender;

    return 0;
}