/*Saya Mochamad Khaairi NIM 2106416 mengerjakan Latihan 1
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//library yang digunakan
#include <bits/stdc++.h>
#include "CRUD.cpp"

using namespace std;

int main()
{
	string nim;
	//instance object menggunakan class CRUD
	CRUD crud;
	//deklarasi list
	list<Mahasiswa> llist;

	//input perintah berupa menu pilihan
	int n = 0;
	//perulangan selama masukkan untuk variabel n bukan 5 (masukkan untuk mengakhiri menu pilihan)
	do
	{
		//masukkan untuk pilihan menu
		cout << "\nMasukkan menu (1 : Input, 2 : ubah, 3 : hapus, 4 : Tampil, 5 : Keluar):" << '\n';
		cin >> n;
		if(n != 5)
		{
			//pilihan 1 untuk menambahkan data
			if(n == 1)
			{
				crud.add(&llist);
			}

			//pilihan 2 untuk mengubah data
			if(n == 2)
			{
				cout << "Masukkan NIM mahasiswa yang akan diubah:";
				cin >> nim;
				crud.update(nim, &llist);
			}

			//pilihan 3 untuk menghapus data
			if(n == 3)
			{
				cout << "Masukkan NIM mahasiswa yang akan dihapus:";
				cin >> nim;
				crud.del(nim, &llist);
			}

			//pilihan 4 untuk menampilkan data
			if(n == 4)
			{
				crud.show(&llist);
			}
		}
	}while(n != 5);

	return 0;
}