// WAP that Takes a temperature in Celsius as input and prints the equivalent temp in fahrenheit.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float C;
    cin>>C;
    cout<< fixed <<setprecision(2)<<endl;
    cout<<"Temperature in Fahrenheit= "<<C*9/5+32<<endl;
    return 0;
}