#include <iostream>

using namespace std;
int main()
{
	char A[5][20];
	float UTS[5];
	float UAS[5];
	float HASIL[5];
	int N, I;

	cout << "Masukkan jumlah siswa = ";
	cin >> N;
	//system("cls");

	for (I = 1; I <= N; I++)
	{
		cout << "Data ke-" << I << endl;
		cout << "Nama siswa : ";
		cin >> A[I];
		cout << "Nilai UTS = ";
		cin >> UTS[I];
		cout << "Nilai UAS = ";
		cin >> UAS[I];
		cout << endl;
	}

	cout << "===================================================================================" << endl;
	cout << "No.\t"<<"Nama Siswa\t"<<"Nilai UTS\t"<<"Nilai UAS\t"<<"RATA-RATA\t"<<"Nilai Huruf" << endl;
	cout << "===================================================================================" << endl;

	for (I = 1; I <= N; I++)
	{
		cout << I;
		cout << "\t";
		cout << A[I];
		cout << "\t \t";
		cout << UTS[I];
		cout << "\t \t";
		cout << UAS[I] << "\t \t";
		HASIL[I] = (UTS[I] + UAS[I]) / 2;
		cout << HASIL[I] << "\t \t";
		if (HASIL[I] >= 81)
		{
			cout << "A" << endl;
		}
		else if (HASIL[I] >= 71 && HASIL[I] <= 80)
		{
			cout << "B" << endl;
		}
		else if (HASIL[I] >= 56 && HASIL[I] <= 70)
		{
			cout << "C" << endl;
		}
		else if (HASIL[I] >= 41 && HASIL[I] <= 55)
		{
			cout << "D" << endl;
		}
		else if (HASIL[I] >= 71 && HASIL[I] <= 80)
		{
			cout << "D" << endl;
		}
		else if (HASIL[I] >= 0 && HASIL[I] <= 40)
		{
			cout << "E" << endl;
		}
	}

	//cin.clear();
	//cin.ignore();
	//cin.get();
}
