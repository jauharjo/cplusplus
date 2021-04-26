#include<iostream>
using namespace std;
int decToHexa(int n)
{
    int i = 0;
    char hexaDeciNum[100];
    while(n!=0)
    {
        int temp  = 0;
        temp = n % 16;

        if(temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        n = n/16;
    }
    for(int j=i-1; j>=0; j--)
        cout << hexaDeciNum[j];
}


int main()
{
  int n;
    cout << "----------------------------------------------------------\n";
    cout << "  Program C++ Konversi Bilangan Desimal Ke HeksaDesimal \n";
    cout << "                      anakit.id \n";
    cout << "----------------------------------------------------------\n";

cout<<"  Masukkan Angka Decimal :";cin>>n;
cout<<"  Dalam Bilangan Heksa Desimal = ";
    decToHexa(n);
    return 0;
}
