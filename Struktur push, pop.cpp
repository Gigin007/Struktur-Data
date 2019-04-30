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
    smt=T.data[T.atas];
    T.atas=T.atas-1;
    return(smt);
}
void push (char Huruf)
{
    T.atas = T.atas+1;
    T.data[T.atas]=Huruf;
}
int main()
{
    T.atas=0;
    string  ambil;
    push('A');
    push('B');
    push('C');
    push('D');
    cetak();
    ambil=pop();
    cout<<"Data yang diambil adalah = "<<ambil<<endl;
    cetak();
}
