// Write a program that reads the marks of 5 students in 3 subjects and prints the highest marks in each subject.

#include<iostream>
using namespace std;
int main()
{
    int marks[5][3];

    for(int i=0;i<5;i++)
    {
        cout<<"Student "<<i+1<<" :"<<endl;
        for(int j=0;j<3;j++)
    {
        cin>>marks[i][j];
    
    }
}
int maxMath=marks[0][0];
int maxPhysics=marks[0][1];
int maxCs=marks[0][2];
for (int i = 1; i < 5; i++) {
        if (marks[i][0] > maxMath)     maxMath = marks[i][0];
        if (marks[i][1] > maxPhysics)  maxPhysics = marks[i][1];
        if (marks[i][2] > maxCs)       maxCs = marks[i][2];
    }

  
    cout << "\nHighest marks in Mathematics: " << maxMath;
    cout << "\nHighest marks in Physics: " << maxPhysics;
    cout << "\nHighest marks in Computer Science: " << maxCs;

    return 0;
    

}