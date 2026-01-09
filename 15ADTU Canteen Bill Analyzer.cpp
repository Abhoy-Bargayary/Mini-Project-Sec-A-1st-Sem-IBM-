// Given the 2D array bill, write a program to:
// Print the total amount spent by each student in the week.
// Find the day with the highest total collection.
// Identify the student (or students) who spent the most overall.
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int bill[n][m];       
    int studentTotal[n]={0};
    int dayTotal[m]={0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> bill[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " total: Rs. " << studentTotal[i] << endl;
    }

    
    int maxDay = 0;
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > dayTotal[maxDay]) {
            maxDay = j;
        }
    }
  
    
    cout << "Highest collection on Day " << maxDay + 1 << endl;

    
    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpend) {
            maxSpend = studentTotal[i];
        }
    }

    cout << "Highest spender: ";

    bool first = true;
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            if (!first) cout << " and ";
            cout << "Student " << i + 1;
            first = false;
        }
    }
    cout << endl;

    return 0;
}
