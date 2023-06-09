#include <iostream>
using namespace std;

int LuasPersegi (int p, int l){
	int luas;
	luas = p*l;
	return luas;
}

int main()
{
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 12         "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 8 desember 2021      "<<endl;
	cout<<"================================"<<endl;
	int a,b;
	
	cout << "Masukkan Panjang : "; cin >> a;
	cout << "Masukkan lebar: "; cin >> b;
	
	cout << "luas persegi: " << LuasPersegi(a,b);
	return 0;
}
