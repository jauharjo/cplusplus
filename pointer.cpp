#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    /*
    int x, y, *px;
    x = 80; //Nilai x = 80
    px = &x; //PX = alamat memory dari x
    y = *px; //y = yang ditunjuk oleh px (yaitu x)

    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    cout<<"px = "<<px<<endl;
    cout<<"*px = "<<*px<<endl;

    float *x1, *x2, y1;
    y1 = 12.34; //Nilai y
    x1 = &y1; //Nilai x1 = alamat  y1
    x2 = x1; //Nilai x2 = nilai dari x1/salinan dari x1

    cout<<"Y1 = "<<y1<<" di x1 = "<<x1<<endl;
    cout<<"Y1 = "<<y1<<" di x2 = "<<x2<<endl;

    int nilai[3], *penunjuk;
    nilai[0]=123;
    nilai[1]=456;
    nilai[2]=789;
    penunjuk = &nilai[0];

    cout<<"penunjuk"<<*penunjuk<<"alamat penunujuk"<<penunjuk<<endl;
    cout<<"penunjuk"<<*(penunjuk+1)<<"alamat penunujuk"<<penunjuk+1<<endl;
    cout<<"penunjuk"<<*(penunjuk+2)<<"alamat penunujuk"<<penunjuk+2<<endl;

    int a=300, b=200, *pa,*pb;
    pa = &a;
    pb = &b;

    if(pa<pb)
    cout<<"PA lebih rendah dari PB\n";
    if(pa==pb)
    cout<<"PA sama dengan PB\n";
    if(pa>pb)
    cout<<"PA lebih tinggi dari PB\n"; */
    // 8 2 12 5 10

    int angka[5], *p;

    p = &angka[3];
    *p=5;//4
    p++; *p=10;//5
    p=angka; *(p+1)=2;//1=2
    *p=8;//0=8
    *(p+2)=*p+4;//3=8+4

    for(int n=0; n<5; n++)
        cout<<angka[n]<<", ";
    return 0;
}
