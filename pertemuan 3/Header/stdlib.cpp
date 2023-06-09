#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	char nama[10];
	int jumlah_karakter;
	cout<<"================================"<<endl;
	cout<<" Program : Header               "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 6 oktober 2021       "<<endl;
	cout<<"================================"<<endl;
	
	cout <<"Masukkan sebuah kata = "; cin>>nama;
	system("CLS");
	jumlah_karakter = strlen(nama);
	cout <<"kata " <<nama;
	cout <<"Memiliki " <<jumlah_karakter<< "Karakter";
}
