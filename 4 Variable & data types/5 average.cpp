#include <iostream>
using namespace std;
int main () {
    int eng, math, sci, avg;
    cout<<"Enter english marks : ";
    cin>>eng;
    cout<<"Enter maths marks : ";
    cin>>math;
    cout<<"Enter science marks : ";
    cin>>sci;
    avg=(eng+math+sci)/3;

    cout << "Average marks = "<<avg<<endl;
    return 0;
}