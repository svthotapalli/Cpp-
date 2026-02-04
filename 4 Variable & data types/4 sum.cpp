// Sum of 2 numbers taking input

#include <iostream>
using namespace std;

int main() {
    int a, b, sum, diff;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    sum = a+ b;
    diff = a-b;
    cout << "Sum of a and b = " << sum << endl;
    cout << "Difference of a and b = " << diff;

    return 0;
}