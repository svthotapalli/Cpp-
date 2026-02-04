/* Question 2
Enter cost of 3 items from the user (using float data type) - a pencil, a pen and an eraser.
You have to output the total cost of the items back to the user as their bill.
(Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)
 */

#include<iostream>
using namespace std;

int main() {
 float pen, pencil, eraser;
 cout << "Enter the no. of pens: ";
 cin >> pen;
 cout << "Enter the no. of pencils: ";
 cin >> pencil;
 cout << "Enter the no. of erasers: ";
 cin >> eraser;

 float pen_price, pencil_price, eraser_price;
 cout << "Enter the price of a pen: ";
 cin >> pen_price;
 cout << "Enter the price of a pencil: ";
 cin >> pencil_price;
 cout << "Enter the price of a eraser: ";
 cin >> eraser_price;

 float pen_total, pencil_total, eraser_total, total;
 pen_total = (pen * pen_price);
 pencil_total = pencil * pencil_price;
 eraser_total = eraser * eraser_price;
 total = (pen_price+ pencil_price+ eraser_price);

 cout<<"\n\n***************************\n";
 cout<< "         Receipt         \n";
 cout<<"***************************\n";
 cout<<pen<<" x "<<"Pens   "<<"     "<<pen_price<<endl;
 cout<<pencil<<" x "<<"Pencils"<<"     "<<pencil_price<<endl;
 cout<<eraser<<" x "<<"Erasers"<<"     "<<eraser_price<<endl;
 cout<<"___________________________\n";
 cout<<"Subtotal =      "<<total;
 cout<<"\n";
 cout<<"___________________________\n";
 cout<<"GST at 18%      "<<(total*0.18);
 cout<<"\n\n";
 cout<<"___________________________\n";
 cout<<"TOTAL           "<<(total +(total*0.18));
 cout<<"\n";
 cout<<"___________________________\n";

 return 0;
}