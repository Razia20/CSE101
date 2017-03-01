#include<iostream>
using namespace std;


int main(){
    double a,b,c,res = 0;

    cout << "Please enter a: ";
    cin >> a;
    cout << "Please enter b: ";
    cin >> b;
    cout << "Please enter c: ";
    cin >> c;

    res = a*(b-c)+1.37;

    cout << "Result: res = " << a << " * ( " << b << " - " << c << " ) + 1.37 = " << res << endl;

    return 0;
}
