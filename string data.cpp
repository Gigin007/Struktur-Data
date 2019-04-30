#include<iostream>

using namespace std;

int main ()
{
    char nama[50];
    cout<<"Inputkan Nama Anda = ";
    //cin>>nama;
    cin.get(nama,sizeof(nama));
    cout<<"Nama anda "<<nama<<endl;
    cout<<"Huruf ke 2 anda adalah "<<nama[1]<<endl;

    int jumB=0;
    int jumk=0;
    int jumlah=0;
    int i=0;
    for(i=0;nama[i];i++)
    {
        if((nama[i]>='a')&&(nama[i]>='z'))
            jumk=jumk+1;
        if((nama[i]>='A')&&(nama[i]>='Z'))
            jumB=jumB+1;
    }
    cout<<"Jumlah karakter pada nama = "<<jumlah<<endl;
    cout<<"Jumlah huruf besar nama = "<<jumB<<endl;
    cout<<"Jumlah huruf kecil nama = "<<jumk<<endl;
}
