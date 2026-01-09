//WAP that takes two int as input-the length and width of the rectangle & prints its area & perimeter
#include<iostream>
using namespace std;
int main()
{
  int length,width;
  cin>>length>>width;
  cout<<"Area= "<<length*width<<endl;
  cout<<"Perimeter= "<<2*(length+width);
  return 0;
}