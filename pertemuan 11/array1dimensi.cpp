#include <iostream>
using namespace std;

int umur [] = {18, 19, 20, 21, 22};
int n, hasil=0;

int main ()
{
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 11         "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 1 desember 2021      "<<endl;
	cout<<"================================"<<endl;
	for ( n=0 ; n<5 ; ++n )
	{
		hasil+=umur[n];
	}
	cout << hasil;
	return 0;
}
