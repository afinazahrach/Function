#include <iostream>
using namespace std;

// Struktur Function
// Deklarasi function dengan parameter
int tambah (int a, int b) {
	return a + b;
	
}

int main() {
	int x = 5, y = 7, hasil;
	
	// Memanggil function tambah dan menyimpan hasilnya ke dalam variabel hasil
	hasil = tambah(x, y);
	
	// Menampilkan hasil
	cout << "Hasil penjumlahan " << x << " dan " << y << " adalah " << hasil << endl;
	
	
	return 0;
}

// Function
// Tipe data pengembalian adalah integer, dan function dinamakan "tambah"
int tambah(int a, int b) {
	// parameter adalah a dan b
	int hasil = a + b; // menghitung hasil penjumlahan
	return hasil; // mengembalikan hasil penjumlahan
}

// Prosedur
// Prosedur dinamakan "tampilkan_nama"
void tampilkan_nama(string nama) {
	cout << "Nama saya adalah " << nama << endl;
	// prosedur hanya menampilkan pesan, tanpa mengembalikan nilai apa pun
} 

// Membuat Function Luas Lingkaran
#include<iostream>
#include<cmath>
using namespace std;

double luaslingkaran(double r){
	double pi = M-PI;
	return pi*r*r;
}

int main(){
	double r;
	
	cin >> r;
	
	cout << "Luas Lingkaran: " << luasLingkaran(r);
	
	return 0;
}

// Membuat Prosedur Absen
void absen (string name, int npm){
	cout << name << "_" << npm;
}

int main (){
	
	string nama;
	int npm;
	
	getline (cin, name);
	cin >> npm;
	
	absen (name, npm);
	
	return 0;
}
