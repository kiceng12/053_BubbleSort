// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variabel global array a dengan uuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyaknya elemen array

void input() {   //procedur untuk input

	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; // output ke layar
		cin >> n; // input dari pengguna
		if (n <= 20) // jika n kurang dari atau sama dengan 20 
			break; // keluar dari loop
		else {    // jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar 
    	}
    }
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;
   