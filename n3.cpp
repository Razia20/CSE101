#include<iostream>
using namespace std;


int main(){
    double rd,area = 0.0,perimtr= 0.0,pi = 3.1416;

    cout << "Please Enter the radius of the circle: ";
    cin >> rd;

    perimtr = 2*pi*rd;
    area = pi*rd*rd;

    cout << "Perimeter of the Circle is: pr = 2 * " << pi << " * " << rd << " = " << perimtr << "m" << endl;
    cout << "Area of the Circle is: A = " << pi << " * " << rd << "^2 = " << area << "m^2" << endl;

    return 0;
}
