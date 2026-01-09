/*Write a program that takes a string as input and prints: "Perfect Secret Word" — if the string is a palindrome. "Not a Secret Word" — if it is not. Input Format: A single word (string) entered by the user. 📤 Output Format: A single line of text: Either "Perfect Secret Word" or "Not a Secret Word" */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    bool isPalindrome = true;
    int n = word.length();

    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Perfect Secret Word";
    else
        cout << "Not a Secret Word";

    return 0;
}
