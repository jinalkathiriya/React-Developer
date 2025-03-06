#include <iostream>
using namespace std;

void generateFibonacci(int terms) {
    int a = 0, b = 1, next;

    cout << "Fibonacci Sequence: ";
    for (int i = 1; i <= terms; i++) 
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        generateFibonacci(terms);
    }

    return 0;
}
