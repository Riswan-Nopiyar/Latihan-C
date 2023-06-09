#include <iostream>
using namespace std;
int a,b,k,z,c,d,e;
void awalan ();
void awalan ()
{
	cout<<"Masukkan nilai pertama = ";cin>>a;
	cout<<"Masukkan nilai kedua = ";cin>>b;
}
void pemrog();
void pemrog()
{   cout<<"================================"<<endl;
	cout<<" Program : pertemuan 12         "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 8 desember 2021      "<<endl;
	cout<<"================================"<<endl<<endl;
}
void penjumlahan();
void penjumlahan()
{
	awalan();
	z=a+b;
	cout<<"Hasil dari penjumlahan = "<<z<<endl;
}
void pengurangan();
void pengurangan ()
{
	awalan();
	c=a-b;
	cout<<"Hasil dari penjumlahan = "<<c<<endl;
}
void perkalian();
void perkalian()
{
	awalan();
	d=a*b;
	cout<<"Hasil dari penjumlahan = "<<d<<endl;
}
void pembagian();
void pembagian()
{
	awalan();
	e=a/b;
	cout<<"Hasil dari penjumlahan = "<<e<<endl;
}
void keluar ();
void keluar ()
{
	cout<<"Terima Kasih"<<endl;
}
main()
{
	pemrog();
	cout<<"Menu Utama"<<endl<<endl;
	cout<<"1. OPERASI PENJUMLAHAN"<<endl;
	cout<<"2. OPERASI PENGURANGAN"<<endl;
	cout<<"3. OPERASI PERKALIAN"<<endl;
	cout<<"4. OPERASI PEMBAGIAN"<<endl;
	cout<<"5. KELUAR "<<endl<<endl;
	cout<<"MASUKKAN KODE [1,2,3,4,5] = ";cin>>k;
	switch (k)
{
case 1: penjumlahan();break;
case 2: pengurangan();break;
case 3: perkalian();break;
case 4: pembagian();break;
case 5: keluar ();break;
default : cout<<"pilihan cuma ada 5";break;
}
return 0;
}
