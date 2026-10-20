#include <iostream>
using namespace std;

int main() {
    float r, t, volume;
    double const phi=3.14;
    cout<<"Masukkan jari jari tabung: ";
    cin>>r;
    cout<<"Masukkan tinggi tabung: ";
    cin>>t;
    volume=phi*r*r*t;

    cout<<"Volume tabung tersebut adalah: "<<volume<<endl;

}