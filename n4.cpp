#include<iostream>
using namespace std;


int main(){
    int l,w,area = 1;

    cout << "Length: ";
    cin >> l;
    cout << "Width: ";
    cin >> w;

    area = l*w;

    cout << "Area of the rectangle is: A = " << l << " * " << w << " = " << area << "m^2" << endl;

    return 0;
}
