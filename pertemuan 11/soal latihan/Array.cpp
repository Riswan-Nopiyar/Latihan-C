#include <iostream>
using namespace std;

int main ()
{
	cout<<"================================"<<endl;
	cout<<" Program : latihan soal         "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 1 desember 2021      "<<endl;
	cout<<"================================"<<endl;
	int jml_sepuluh;
	int a[10];
	for(int i=0;i<10;i++){
		cin >> a[i];
		if(a[i]>10) jml_sepuluh++;
	}
	cout << "Banyaknya = " << jml_sepuluh;
	
}
