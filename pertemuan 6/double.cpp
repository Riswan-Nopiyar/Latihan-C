#include <iostream>
using namespace std;

int main(){
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 6          "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 20 oktober 2021      "<<endl;
	cout<<"================================"<<endl;
	float jari, hasil ;
	const double p=3.14;
	
	cout<<"Masukkan jumlah jari-jari = ";cin>>jari;
	hasil = jari*(jari*p);
	cout<<"Luas dari lingkaran 3.14 x "<<jari<<" x "<<jari<<" adalah "<<hasil;
	
	return 0;
}
