#include <iostream>
using namespace std;

int main() {

	double harga, diskon, jumlahdiskon, hargasetelahdiskon;

	cout << "=MASUKAN=" << endl;
	cout << "harga barang(rp)=";
	cin >> harga;

	cout << "diskon barang (%)=";
	cin >> diskon;

	jumlahdiskon = harga * (diskon / 100);
	hargasetelahdiskon = harga * (diskon / 100);

	cout << "\nhasil:" << endl;
	cout << "Jumlah Diskon        =RP" << jumlahdiskon << endl;
	cout << "Harga setelah diskon   =RP" << hargasetelahdiskon << endl;

	return 0;


}