/* Question 4
Write a program to calculate the area of a circle.
Input : r (radius)
Output : Pl***r (area)
 */
#include <iostream>
using namespace std;

int main() {
 float r, area;
 cout <<"Enter the radius of cirle: ";
 cin >> r;
 area = (2*3.14*r);
 cout << "Area of the circle = "<< area;
 return 0;
}