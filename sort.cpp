#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int nilai['n'], n, x;

    cout<<"===============================\n";
    cout<<"Program Pengurutan Angka\n";
    cout<<"===============================\n";
    cout<<"Banyak Data: ";
    cin>>n;
    for (int a=1; a<=n; a++){
    cout<<"nilai["<<a<<"]: ";
    cin>>nilai[a];
    }

    cout<<"===============================\n";
    cout<<"\nNilai Sebelum diurutkan\n";
    for(int a=1; a<=n; a++){
        cout<<nilai[a]<<" ";
    }

    //Menggunakan Metode Bubble Sort
    for(int a=n-1; a>=1; a--){
        for(int b=1; b<=a; b++){
            if(nilai[b]>nilai[b+1]){
            x=nilai[b+1];
            nilai[b+1]=nilai[b];
            nilai[b]=x;
            }
        }
    }

    cout<<"\n\nNilai Setelah Diurutkan Secara Descending (Besar ke Kecil)"<<endl;
    for (int a=n; a>=1; a--){
        cout<<nilai[a]<<" ";
    }

    getch();
}
