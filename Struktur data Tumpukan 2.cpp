#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct tumpukan
{
    string data[10];
    int atas;
    int isi[100];
};
tumpukan T;

void cetak ()
{
    int i;
    for (i=T.atas;i>=1;i--)
    {
        cout<<T.data[i]<<endl;
    }
}
int pop()
{
    int ambil=0;
    if(T.atas==0)
    {
        cout<<"=======Stack Empty=======";
    }
    else
    {
        ambil=T.isi[T.atas];
        T.atas=T.atas-1;
    }
    return(ambil);
}
void push (int bilangan)
{
    if (T.atas==10)
    {
        cout<<"======Stack Full======";
    }
    else
    {
        T.atas = T.atas+1;
        T.data[T.atas]=bilangan;
    }
}
int main()
{
    T.atas=0;
     int bil,data;
     int pil;
    do
    {
     cout<<"1. Input data";
     cout<<"\n2. Ambil data";
     cout<<"\n3. Tampil data";
     cout<<"\n4. Exit";
     cout<<"\nMasukkan yang anda inginkan = ";
     cin>>pil;
     if(pil==1)
     {
         cout<<"Input data = ";
         cin>>bil;
         push(bil);
         system("cls");
     }
    else if(pil==2)
    {
        data=pop();
        cout<<"\nData yang diambil = "<<data<<endl;
        getch();
        system("cls");
    }
    else if(pil==3)
    {
        cetak();
        getch();
        system("cls");
    }
} while (pil<4);
}
