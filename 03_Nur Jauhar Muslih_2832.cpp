/*
Tugas Algoritma Pemrograman IF 04
Membuat Kalkulator berat badan ideal
Rumus : - Laki-laki = (tinggi badan-100)-((tinggi badan-100)*10%)
        - Perempuan = (tinggi badan-100)-((tinggi badan-100)*15%)
*/
#include <iostream>

using namespace std;

int main(){
    //Deklarasi variabel
    float tinggi, bbcowok, bbcewek;
    char jk;
    cout<< "--Kalkulator Pengukur Berat Badan Ideal--\n";
    cout<< "======================================\n";
    cout<< "+ Jenis kelamin (L/P)\t\t: ";
    cin>> jk;


    // Jika kita menginputkan jenis kelamin laki-laki(l)
    if(jk=='l'){
        cout<< "+ Masukkan tinggi badan (cm)\t: ";
        cin>> tinggi;
        bbcowok = (tinggi-100)-((tinggi-100)*0.1);
        cout<< "======================================\n";
        cout<< "+ Berat badan ideal kamu\t: " << bbcowok << " Kg\n";
    }
    // Jika kita menginputkan jenis kelamin perempuan(p)
   if(jk=='p'){
        cout<< "+ Masukkan tinggi badan (cm)\t: ";
        cin>> tinggi;
        bbcewek = (tinggi-100)-((tinggi-100)*0.15);
        cout<< "======================================\n";
        cout<< "+ Berat badan ideal kamu\t: " << bbcewek << " Kg\n";
    }
    // Jika kita menginputkan jenis kelamin selain l dan p
    if(jk!='l'&&jk!='p'){
        cout<< "\n\t--INPUT DATA SALAH--\n";
    }
}
