// WAP that takes an integer as input and checks if it is a prime number or not and whether it is even or odd
#include<iostream>
using namespace std;
int main()
{
    int num;
    bool isprime=true;
    if(num<=1) 
       { isprime=false;}
    else{
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
               isprime=false;
               break; 
            }
        }
    }
    if(isprime) cout<<"Prime Number"<<endl;
    else cout<<"Not Prime"<<endl;

}