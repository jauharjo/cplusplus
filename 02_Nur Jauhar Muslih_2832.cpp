/*
Tugas Algoritma Pemrograman IF 04
Mencari nilai dari sisi miring segitiga sama kaki
Rumus = akar dari penjumlahan (sisi alas pangkat 2 dengan sisi tegak pangkat 2)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
int a, b, c; //Deklarasi variabel

cout<< "---Mencari panjang sisi miring segitiga siku-siku---\n";

cout<< "Sisi alas = " ;
cin>> a;//Input nilai sisi alas
cout<< "Sisi tegak = ";
cin>> b;//Input nilai sisi tegak

c = sqrt(pow(a, 2)+pow(b, 2)); //Menghitung nilai c (rumus mencari sisi miring)
cout<< "Sisi miring = " <<c<<endl;//Hasil perhitungan
}
