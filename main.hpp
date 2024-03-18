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
    } while (n1 >= n2);
}

int getNextPrime(int n) {
    return 1;
}

int getPrevPrime(int n) {
    return 1;
}