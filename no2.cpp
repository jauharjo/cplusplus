#include <iostream>

using namespace std;

int main()
{
    int x, *px;

    cout<<"=======================================\n";
    cout<<"Program pemberi grade dari sebuah nilai\n";
    cout<<"=======================================\n";
    cout<<"Masukkan nilai : ";
    cin>>x;
    cout<<"=======================================\n";

    px = &x;
    char grade;

    if(*px>=90){
        grade='A';
        cout<<"Grade dari nilai kamu : "<<grade<<endl;
    }
    else if(*px>=80){
        grade='B';
        cout<<"Grade dari nilai kamu : "<<grade<<endl;
    }
    else if(*px>=70){
        grade='C';
        cout<<"Grade dari nilai kamu : "<<grade<<endl;
    }
    else if(*px>=60){
        grade='D';
        cout<<"Grade dari nilai kamu : "<<grade<<endl;
    }
    else if(*px>=50){
        grade='E';
        cout<<"Grade dari nilai kamu : "<<grade<<endl;
    }
    else{
        cout<<"Nilai kamu tidak lulus\n";
    }
}
