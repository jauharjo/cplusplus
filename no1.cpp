#include <iostream>

using namespace std;

int panjang_kata(char *kata) {
 int panjang = 0;
 while (*(kata++) != '\0')
  panjang++;

 return panjang;
}

int main() {
    char string[100];

    -
    cout<<"Program penghitung jumlah karakter\n";
    cout<<"==================================\n";

    cout << "Input kata yang akan dihitung : \n";
    cin.getline(string, 100);
    cout<<"==================================\n";
    cout << "Panjang Karakter: " << panjang_kata(string);
    cout<<"\n==================================\n";

 return 0;
}
