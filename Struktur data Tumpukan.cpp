#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define MAX 3
using namespace std;
int top=-1, Stack[MAX];
int a,b,c,d;

/*void inputdata()
{    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
  d=0;
  for(c=1;c<=b;c++){
  d=d+1;
  cout<<"Masukkan data ke - "<<d<<" : "<<endl;
  cin>>a;

  a++;}
  system("cls");}*/
void push()
{
    if(top == MAX-1)
    {
        cout << "Stack sudah Penuh !" << endl;
    }
    else
    {
        top++;
        cout << ">> Masukan Data : ";
        cin >> Stack[top];
        cout << "\n Pada Index ke '" << top << "' \n";
        cout << "Data [" << Stack[top] << "] Telah Ditambah ! " << endl;
    }
}

void pop()
{
    if(top == -1)
    {
        cout << ">> Stack Kosong !" << endl;
    }
    else
    {
        cout << "n\Data [" << Stack[top] << "] pada index ke '" << top << "' dalam Stack Diambil !" << endl;
        Stack[top--];
    }
}

int clearr()
{
    return top = -1;
}

void Print()
{
    if (top == -1) {
 cout << "          Stack : ";
        cout << "\n===========================" << endl;
        cout << "          Empty ! \n===========================" << endl;
    }
    else {
        cout << "          Stack : ";
        cout << "\n===========================" << endl;
 for (int i = top; i >= 0; i--){
  cout << "     XXXXX[ " << Stack[i] << " ]XXXXX" << endl;
 }
 cout << "===========================" << endl;
    }
}

int main()
{
    int choose;
    //inputdata();
    do {
        Print();
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Print";
        cout << "\n4. Clear";
        cout << "\n5. Exit";
             //<< "\nCodeProgram ismynr.xyz"
        cout<< "\nPergerakan ( TOP ) : " << top;
        cout << "\n\n>> Choose : ";
        cin >> choose;
        switch (choose){
            case 1:
                push();//getch();
                break;
            case 2:
                pop();//getch();
                break;
            case 3:
                Print();
                clearr();
                cout << "\nClear Succes" << endl;
                //getch();
                break;
            case 4:
                cout<< clearr();
                getch();
                break;
            case 5:
                cout << "Terima Kasih telah menggunakan program ini :)" << endl;
                getch();
                break;
            default:
                cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
                getch();
                break;
        }
        system("cls");
    }while(choose !=4);
}
