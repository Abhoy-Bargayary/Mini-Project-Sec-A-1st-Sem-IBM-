// WAP that takes two integers as input and calculates the GCD & LCM of the two numbers 
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    while(y!=0)
    {
        int temp=y;
        y=x%y;
        x=temp;
    }
    int gcd=x;
    int lcm=(x*y)/gcd;
    cout<<"GCD= "<<gcd<<endl;
    cout<<"LCM= "<<lcm;
}