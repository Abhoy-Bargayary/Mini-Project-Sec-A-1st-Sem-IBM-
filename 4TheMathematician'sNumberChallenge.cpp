// WAP that takes an integer as input and checks if it is a prime number or not and whether it is even or odd
#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter an integer: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

   
    if (isPrime)
        cout << "The number is Prime." << endl;
    else
        cout << "The number is Not Prime." << endl;

    
    if (n % 2 == 0)
        cout << "The number is Even." << endl;
    else
        cout << "The number is Odd." << endl;

    return 0;
}
