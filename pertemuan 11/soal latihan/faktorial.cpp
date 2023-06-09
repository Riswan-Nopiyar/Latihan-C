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
	 //FAKTORIAL
	 //5! = 5*4*3*2*1
	 //6! = 6*5*4*3*2*1
	 // Riswan Nopiyar_2010010085
	 
	 int bilangan, hasil = 1;
	 cin >> bilangan;
	 for(int i=bilangan;i>=1;i--){
	 	hasil *=i;
	 }
	 cout << bilangan << "! = " << hasil;
}
