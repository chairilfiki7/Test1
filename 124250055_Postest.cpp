//Chairil Fikri M // 124250055
#include <iostream>
using namespace std;


struct alamat{
	string jalan;
	string kota;
	string prov;
	int kode;
	};

struct mahasiswa{
	string nama;
	int nim;
	char kelas;
	string status;
	bool ketstatus = 1; 
	float ipk;
	struct alamat al;
	} data[100];

int i;
int d;

int main(){
	cout << "Masukkan banyak data yang di imput: ";
	cin >> d;
	
	for (i = 0; i< d; i++){
	 cout << "Data ke-" << i+1 << endl;
	 cout << "Nama : ";
	 cin >> data[i].nama;
	 cout << "Nim : ";
	 cin >> data[i].nim;
	 cout << "kelas : ";
	 cin >> data[i].kelas;
	 cout << "Status Mahasiswa (1 untuk aktif atau 2 untuk tidak aktif): ";
	 cin >> data[i].status;
	 if (data[i].ketstatus == 1){
		 data[i].status = "Aktif";
		 } else {
		 data[i].status = "Tidak Aktif";
		 }
		 
	 cout << "IPK : ";
	 cin >> data[i].ipk; 
	 cout << "Nama jalan: ";
	 cin >> data[i].al.jalan;
	 cout << "Nama Kota: ";
	 cin >> data[i].al.kota;
	 cin.ignore();
	 cout << "Nama Provinsi: ";
	 getline(cin,data[i].al.prov);
	 cout << "Kode Pos: ";
	 cin >> data[i].al.kode;
	 cin.ignore();
	 cout << endl;
	 }
	 
	for (i = 0; i< d; i++){
	 cout << "Data ke-" << i+1 << endl;
	 cout << "Nama : " << data[i].nama << endl;
	 cout << "Nim : " << data[i].nim << endl;
	 cout << "kelas : " << data[i].kelas << endl;
	 cout << "Status : " << data[i].status << endl;
	 
	 cout << "IPK : " << data[i].ipk << endl; 
	 cout << "Alamat: " << data[i].al.jalan << ", " <<  data[i].al.kota << ", " << data[i].al.prov << ", " << data[i].al.kode << endl;
	 cout << "----------------------------------------" << endl;
	 
	 cout << endl;
	 }
	 
	 
	 
	
	return 0;
	}
