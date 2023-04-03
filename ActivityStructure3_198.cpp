// ActivityStructure3_198.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct AlamatDetail
{
	char desa[20];
	char kota[20];
};
struct Mahasiswa {
	char nim[12];
	char nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "masukkan nim: ";
		cin.getline(mhs[1].nim, 12);
		cout << "masukkan nama : ";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat : " << endl;
		cout << "\nNama Desa : ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "\nNama Kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "masukan umur : ";
		cin >> mhs[1].umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\nNim : " << mhs[i].nim;
		cout << "\nNama : " << mhs[i].nama;
		cout << "\nDesa : " << mhs[i].alamat.desa;
		cout << "\nKota : " << mhs[1].alamat.kota;
		cout << "\nUmur : " << mhs[i].umur;

	}
}

