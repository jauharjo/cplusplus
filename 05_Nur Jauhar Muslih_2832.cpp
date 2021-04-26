/*
Tugas Algoritma Pemrograman IF 04
Membuat Program Menampilkan Bilangan Prima dengan Perulangan
Input range berupa angka awal dan akhir dan akan dicari bilangan primanya
*/
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(){
    //Deklarasi Variabel
    int i, j, awal, akhir, hasil;

    cout<< "--------Pencari Bilangan Prima--------\n\n";
    //Range angka yang dicari
    cout<< "Masukkan Batas Awal Bilangan\t: ";
    cin>> awal;
    cout<< "Masukkan Batas Akhir Bilangan\t: ";
    cin>> akhir;
    cout<< "========================================\n";

    //Mencari Perhitungan Bilangan Prima(hanya bisa dibagi 1 dan bilangan itu sendiri)
    for(i=awal; i<=akhir; i++){
        hasil = 2;

        for(j=1; j<=i; j++){
        if(i%j== 0){
            hasil=hasil-1;
        }
    }
    if(hasil == 0){
        cout<< i << ", ";
        Sleep(100);
        }
    }
    cout<< "\n========================================";
    getch();
}
