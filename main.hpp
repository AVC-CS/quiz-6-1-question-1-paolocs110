#include <iostream>
using namespace std;

//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************

void getTwoValues(int &n1, int &n2) {
    do {
        cout << "Enter the values for begin, end: ";
        cin >> n1 >> n2;
    } while ((n1 >= n2));
}

int getNextPrime(int n) {
    n++;
    bool isPrime = false;
    while (isPrime == false) {
        for (int i = 2; i <= n; i++) { //Chkeck if n is prime
            if (((n % i) == 0) && n != 2) {
                break;
            }
            if (i > (n/2)) {
                return n;
            }
        }
        n++;
    }
}

int getPrevPrime(int n) {
    n--;
    bool isPrime = false;
    while (isPrime == false) {
        for (int i = 2; i <= n; i++) { //Chkeck if n is prime
            if (((n % i) == 0) && n != 2) {
                break;
            }
            if (i > (n/2)) {
                return n;
            }
        }
        n--;
    }
}