#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int bb,tb,brtideal;
   char lagi, clrscr;

 do
 {
     clrscr();

   cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    cout<<"                                                                                                 "<<endl;
    cout<<"           TESS BADAN IDEAL                                                   "<<endl;
    cout<<"                                                                                                   "<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl<<endl;


       cout<<" . Masukan Tinggi Badan Anda (cm) = ";cin>>tb;
       cout<<" . Masukan Berat Badan Andda (kg) = ";cin>>bb;
      cout<<"\n\n";
       brtideal=((tb-100)-(tb-100)*0.1);

      cout<<" . Berat Badan Idealnya = "<<brtideal;
      cout<<"\n\n";

      if(brtideal<=2 && brtideal>=-2)
              {
             cout<<" . Berat Badan Anda Ideal. "<<endl;
             }
          else
                {
             cout<<" .Anda Termasuk kurng Gizi . "<<endl;
             }
        cout<<"\n";
        cout<<"Apakah akan Menghitung lagi [Y/T]";cin>>lagi;
        cout<<"\n\n";
      }
      while(lagi=='Y'|| lagi=='y');
             //clrscr();
      cout<<"::. Terimakasih Telah Melakukan Tess  Bada Ideal .:: ";

     getch();
}
