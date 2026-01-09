/* You are given an array attendance[] of size n, where each element is either 1 or 0. Write a program to count and print the total number of present and absent students. 📥 Input Format: The first line contains an integer n — total number of students in the class. The second line contains n space-separated integers (each either 0 or 1) Output Format: Print the following two lines: Present: X Absent: Y Where X is the number of students present and Y is the number of students absent. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int attendance[n];
    int present = 0, absent = 0;

    for(int i = 0; i < n; i++) {
        cin >> attendance[i];

        if(attendance[i] == 1)
            present++;
        else
            absent++;
    }

    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;

    return 0;
}
