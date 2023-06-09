#include <iostream>
using namespace std;

int main()
{
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 6          "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 20 oktober 2021      "<<endl;
	cout<<"================================"<<endl;
	int angka;//Tipe data integer untuk menyimpan data bersifat bilangan bulat
	bool hasil = true; //Tipe data Boolean yang mempunyai nilai awal true (1)
	
	cout<<"Masukkan angka = ";cin>>angka; //input Bilangan bulat ke variabel "angka"

	hasil = angka > 10;
	//variabel "hasil" akan menyimpan nilai kondisi dari variabel "angka" > 10.
	cout<<hasil; //jika kondisi true maka akan tertulis angka 1 atau 0 jika kondisi false.
	return 0;
}
