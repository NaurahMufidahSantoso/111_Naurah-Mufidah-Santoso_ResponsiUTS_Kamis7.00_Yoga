#include <iostream>
#include <string>
using namespace std;

//class portal
//public;
//	ifstream (tampilKRS);
int main (){
	string nama, sms;
	int nim, krs;
	cout << "=======================|PORTAL UAD|===================" << endl;
	cout << "Masukkan Username: ";
	cin >> nama;
	cout << "Masukkan Password: ";
	cin >> nim;
	cout << endl;

//informasi pribadi pengguna
	cout << "=====|Informasi Pribadi|====="<<endl;
	cout << "Nama: " << nama << endl;
	cout << "NIM: "<< nim << endl;
	cout << "Prodi: Informatika" <<endl;
	cout << "Fakultas: FTI" << endl;
	cout << endl;
	
//	void tampilKRS(krs);
//		cout << "1. Matdis [3 sks]"<<endl;
//		getline()
	
		cout << "KRS" << endl;
		cout << "1. Matdis [3 SKS]" << endl;
		cout << "2. Alpro [3 SKS]" << endl;
		cout << "3. P.WEB[3 sks]"<<endl;
		cout << "Masukkan Pilihan KRS: ";
		cin >> krs;
			cout << "KRS yang dipilih(1-3): " << endl << krs;
		switch(krs) {
			case 1:
				"1. Matdis [3 SKS]";
			case 2:
				"2. Alpro [3 SKS]";
			case 3:
				"3. P.WEB [3 SKS]";
		}

		cout << endl;
		cout << "/t Nilai Mata Kuliah /t" << endl;
		cout << "Masukkan Semester: ";
		cin >> sms; 

}
