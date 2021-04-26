/*
Tugas Algoritma Pemrograman IF 04
Membuat Program perulangan
Input angka dan diubah menjadi karakter yang jumlahnya sesuai dengan input
*/
#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    //Deklarasi variabel
    int input, i;

    cout<< "--Penghitung panjang karakter--\n";
    cout<< "===============================\n";
    cout<< "Masukkan angka\t: ";
    cin>> input;
    cout<< "===============================\n";

   //Perulangan
    for(i=0; i<input; i++){
        if(i%2==0){

            (cout<< "/");
        }
        else{
            cout<< "\\";
        }
        Sleep(500);
    }

}
