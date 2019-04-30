#include<iostream>
#include<conio.h>

using namespace std;

struct tumpukan
{
    string data[10];
    int atas;
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
string pop()
{
    string smt;
    if(T.atas==0)
    {
        cout<<"Kosong";
    }
    smt=T.data[T.atas];
    T.atas=T.atas-1;
    return(smt);
}
void push (char Huruf)
{
    if(T.atas<=10)
    {
        T.atas = T.atas+1;
        T.data[T.atas]=Huruf;
    }
    else
    {
        cout<<"Tumpukan Penuh"<<endl;
    }
}
int main()
{
    T.atas=0;
    int i;
    char kalimat[50];
    string ambil;
    cout<<"Masukkan Kalimat = ";
    cin.getline(kalimat,sizeof(kalimat));
    for (i=0;kalimat[i];i++)
    {
        cout<<kalimat[i]<<endl;
        push(kalimat[i]);
    }
    //cetak();
    while (T.atas>=1)
    {
        ambil=pop();
        cout<<ambil;
    }
}
