#include <iostream>
#include <conio.h>
using namespace std;


struct data{
char nim[20],nama[20],kelas[20];};
data batas[100];
int a,b,c,d;

void inputdata()
{    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"NIM\t: ";cin>>batas[a].nim;
   cout<<"Nama\t: ";cin>>batas[a].nama;
   a++;}
   system("CLS");
   }



void lihatdata()
{int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tNIM\t||\tNama\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"==================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<batas[i].nim<<"\t||";
  cout<<batas[i].nama<<"\t||\n";
  }
  cout<<"================================================ ";getch();system("cls");
  }

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-"<<x<<" Terhapus ++++++++++++++++++++++++++++++";
 getch();system("cls");
}

void editdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"NIM\t: ";cin>>batas[l].nim;
cout<<"Nama\t: ";cin>>batas[l].nama;
lihatdata();
}

int main()
{     int pilih;
 char w;

  awal:
  cout<<"\n |===============================|";
  cout<<"\n |   PILIHAN MENU                |";
  cout<<"\n |-------------------------------|";
  cout<<"\n |1. Masukkan data               |";
  cout<<"\n |2. Hapus Data                  |";
  cout<<"\n |3. Lihat Data                  |";
  cout<<"\n |4. Edit Data                   |";
  cout<<"\n |5. Keluar                      |";
  cout<<"\n |-------------------------------|";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {system("cls");inputdata();goto awal;}
  if(pilih==2)
   {system("cls");hapusdata();goto awal;}
  if(pilih==3)
   {system("cls");lihatdata();goto awal;}
  if(pilih==4)
   {system("cls");editdata();goto awal;}
  if(pilih==5)
   {system("cls");
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";cin>>w;
    if(w=='y'||w=='Y')
    {system("cls");
     cout<<"\n\n\n\n\n----------------------------PROGRAM SELESAI----------------------------";}
    if(w=='n'||w=='N')
           {system("cls");goto awal;}}
  else
   {system("cls");cout<<"Pilihan 1-5";getch();system("cls");goto awal;}
}
