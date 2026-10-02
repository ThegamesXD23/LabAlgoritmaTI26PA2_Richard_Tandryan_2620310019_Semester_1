#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cout << "Masukkan nama anda: ";
    getline(cin, a);

    cout <<"Hello " << a <<", how was your day?" <<endl;

    return 0;
}