#include<iostream>
#include<cstdlib>
using namespace std;

struct simpul
{
    int A;
    simpul *next;
};

int main ()
{
    simpul *awal,*akhir,*bantu,*baru;
    int bil;
    char jawab;
    cout<<"Masukkan data = ";
    cin>>bil;
    baru = new simpul;
    baru->A=bil;
    baru->next=NULL;
    awal=baru;
    akhir=baru;
    cout<<"Ingin input data lagi = ";
    cin>>jawab;
    //menambah data ditengah
    /*baru->A=bil;
    baru->next=NULL;
    bantu=awal;
    while (bantu->A!=sisip)
    {
        bantu=bantu->next;
    }
    baru->next = bantu ->next;
    bantu->next=baru;*/
    while(jawab=='Y'||jawab=='y')//menambah data di akhir
    {
    cout<<"Masukkan data = ";
    cin>>bil;
    baru = new simpul;
    baru->A=bil;
    baru->next=NULL;
    baru->next=awal;
    awal=baru;
    cout<<"Ingin input data lagi = ";
    cin>>jawab;
    }
    bantu=awal;
    while(bantu!=NULL)
    {
        cout<<bantu->A<<" ";
        bantu =bantu ->next;
    }
}
