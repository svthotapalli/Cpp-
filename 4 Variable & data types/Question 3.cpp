/* Question 3
Build a Simple Interest Calculator.
Input : principal(P), rate(R), time(T)
Output : (P*R*T)/ 100
 */
#include <iostream>
using namespace std;

int main() {
 float P, T, R;
 float interest;
 cout << "Enter the principle amount: ";
 cin >> P;
 cout << "Enter the interest rate: ";
 cin >> R;
 cout << "Enter the time period: ";
 cin >> T;
 cout << "Simple interest = "<<((P*T*R)/100);

return 0;
}