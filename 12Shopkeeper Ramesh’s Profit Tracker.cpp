/* Problem Statement: Given an array records[] of size n, where each element represents the daily profit or loss, find and print the total profit, total loss, and net balance. Input Format: The first line contains an integer n — number of days. The second line contains n space-separated integers representing profit or loss on each day. Output Format: Print three lines: Total Profit: X Total Loss: Y Net Balance: Z Where: X → sum of all positive numbers Y → sum of all negative numbers converted to positive value Z → X − Y */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int records[n];
    for(int i = 0; i < n; i++) {
        cin >> records[i];
    }

    int totalProfit = 0;
    int totalLoss = 0;

    for(int i = 0; i < n; i++) {
        if(records[i] > 0) {
            totalProfit += records[i];
        } 
        else if(records[i] < 0) {
            totalLoss += (-records[i]); 
        }
    }

    int netBalance = totalProfit - totalLoss;

    cout << "Total Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;

    return 0;
}
