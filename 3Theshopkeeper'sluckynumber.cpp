// WAP that takes an integer as input and checks whether it is even or odd and it is divisible by 5 or not divisible by 5

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    // if(num%2==0) 
    //    {cout<<"Even Number"<<endl;}
    // else 
    // {
    //     cout<<"Odd Number"<<endl;
    // }
    // if(num%5==0)
    // {
    //     cout<<"Divisible by 5"<<endl;
    // }
    // else{
    //     cout<<"Not Divisible by 5"<<endl;
    // }
     (num%2==0)? (cout<<"Even Number\n"):(cout<<"Odd Number\n");
     (num%5==0)?(cout<<"Divisible by 5\n"):(cout<<"Not Divisible by 5\n");
    return 0;
}