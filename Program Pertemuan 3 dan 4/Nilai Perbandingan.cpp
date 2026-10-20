#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    float NilaiRata;
    char nama[30];

    cout<<"Nama Siswa: ";
    cin>>nama;
    cout<<"Nilai Perbandingan I: ";
    cin>>a;
    cout<<"Nilai Perbandingan II: ";
    cin>>b;
    cout<<"Nilai Perbandingan III: ";
    cin>>c;

    NilaiRata=(a+b+c)/3;
    cout<<"Siswa yang bernama"<<nama<<endl;
    cout<<"Memperoleh nilai rata-rata " <<NilaiRata<< "dari hasil perlombaan yang diikutinya"<<endl;

    if(NilaiRata>=85) {
        cout<<"Hadiah yang didapat adalah Komputer Core i5"<<endl;
    }
    else if(NilaiRata>=70) {
        cout<<"Hadiah yang didapat adalah Uang sebesar Rp. 2.500,000"<<endl;
    }
    else
        cout<<"Hadiah yang didapat adalah Hiburan"<<endl;
    return 0;
} 