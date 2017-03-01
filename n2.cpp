#include<iostream>
using namespace std;


int main(){
    double mtr,ft;

    cout << "Please enter your number in meters: ";
    cin >> mtr;

    ft = mtr*3.28;

    cout << mtr << "m = Converting your meter to feet: " << ft << "nft" << endl;

    return 0;
}
