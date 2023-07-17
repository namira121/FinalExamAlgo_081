#include <iostream>
#include <string>
using namespace std;

class MAHASISWA {
private:
	const int MAX_MAHASISWA = 100;
	int NIM[100];
	string nama[100];
	int tahunMasuk[100];
	int jumlahMahasiswa = 0;
public:
	virtual void tambahMahasiswa() {
	}
	virtual void tampilkanSemuaMahasiswa() {
	}
	virtual void algorithmacariMahasiswaByNIM() {
	}
	virtual void algorithmaSortByTahunMasuk() {
	}

};
//isi disini
class Pengerjaan : private MAHASIWA {
public:
	void tambahMahasiswa{
		if (jumlahMahasiswa < 100) {
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama : ";
			getline(cin, nama[jumlahMahasiswa]);
			cout << "Tahun Masuk: ";
			cin >> tahunMasuk[jumlahMahasiswa];
			cin.ignore();
			jumlahMahasiswa++;
			cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else {
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}
	}

		//isi disini
		void tampilkanSemuaMahasiswa() {
		do {
			cout << cout << "============MAHASISWA==========" << endl;
			cout << "NIM : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama : ";
			getline(cin, nama[jumlahMahasiswa]);
			cout << "Tahun Masuk : ";
			cin >> tahunMasuk[jumlahMahasiswa];
			cin.ignore();
		} while (jumlahMasiswa < 100);
	}
	void algorithmacariMahasiswaByNIM() {
		int comparisons;

		do {
			cout << "Masukkan NIM : ";
			cin >> NIM;

			comparisons = 0;
			for (i = 0; i < n; i++)
			{
				comparisons++;
				if (NIM[i] == NIM)
				{
					cout << "\n" << NIM << "ditemukan di" << (i + 1) << endl;
					break;
				}
			}

			if (i == n)
				cout << "\n" << NIM << "tidak ditemukan\n";
			cout << "\nnumber of comparisons: " << comparisons << endl;
		}

	}

	void algorithmaSortByTahunMasuk() {
		int temp;
		int j;

		for (int i = 1; i < n; i++) {
			temp = arr[i];
			j = i - 1;
			while (j >= 0 && arr[j] > temp) {
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = temp;
			cout << "\nPas " << i << ": ";
			for (int k = 0; k < n; k++) {
				cout << arr[k] << " ";
			}
		}

	}

};

int main() {
	Pengerjaan obj;
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			obj.tambahMahasiswa();
			break;
		case 2:
			obj.tampilkanSemuaMahasiswa();
			break;
		case 3:
			obj.algorithmacariMahasiswaByNIM();
			break;
		case 4:
			obj.algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

//2. menggunakan stackArray, insertionsort dan linearsearch
//3. Perbedaan stack dan queues adalah stack menggunakan sistem LIFO atau LAST-IN-FIRST-OUT
//   jadi data yang terakhir masuk akan keluar pertama sedangkan queue menggunakan sistem FIFO 
//   yaitu FIRST-IN-FIRST-OUT data yang masuk terlebih dahulu akan keluar pertama. Contoh dari 
//   stack ada undo dan redo sedangkan contoh untuk queue adalah antrian loket.
//4. untuk menggunakan algoritma stack yaitu stack menggunakan cara LIFO atau LAST-IN-FIRST-OUT 
//   sehingga data yang terakhir masuk akan dieksekusi.
//5. a. kedalaman dari struktur tersebut adalah: 2^5-1=32-1=31
//   b. Inorder: 5 1 8 10 12 15 20 22 25, 28 30 36 38 40 45 48 50 
//      Preorder: 25 20 10 5 1 8 12 15 22 36 30 28 40 38 48 45 50
//      Postorder: 1 8 15 5 12 10 22 20 45 50  28 38 48 30 40 36 25