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
	const float p=3.14;//variabel konstanta
	
	cout<<"Masukkan Jumlah jari-jari = ";cin>>jari;
	hasil = (jari * p)*2; //disini kita menggunakan variabel float
	//karena hail dari perhitungan lingkaran biasanya berbentuk bilangan pecahan
	cout<<"Keliling dari lingkaran adalah "<<hasil;
	
	return 0;
}
