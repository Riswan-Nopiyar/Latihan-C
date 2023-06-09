#include <iostream>
using namespace std;

int main ()
{
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 7          "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 27 oktober 2021      "<<endl;
	cout<<"================================"<<endl;
	int x;
	
	//meminta user untuk memasukkan nilai z dari keyboard
	cout <<"Masukkan Nilai X : ";
	cin >> x;
	cout <<endl;
	
	//memasukkan pemeriksaan terhadap nilai x
	x = (x<10) ? -x : x;
	
	//menampolkan nilai z setelah proses pemeriksaan
	cout<<" | x | = "<<x;
	
	return 0;
}
