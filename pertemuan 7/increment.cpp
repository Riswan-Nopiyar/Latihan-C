#include<iostream>
using namespace std;

int main(){
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 7          "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 27 oktober 2021      "<<endl;
	cout<<"================================"<<endl;
	int x; //mendeklarasikan variabel x
	
	//mengisi nilai ke dalam variabel x dengan nilai 7
	x = 7;
	
	//melakukan pre-increment
	cout <<"Nilai x nilai awal : " << x << endl;
	cout <<"Nilai ++x          : " << ++x << endl;
	cout <<"Nilai x nilai akhir: "<< x << endl;
	
	//merubah nilai x menjadi 10
	x = 10;
	
	//melakukan post-increment
	cout <<"Nilai x nilai awal : " << x << endl;
	cout <<"Nilai x++          : " << x++ <<endl;
	cout <<"Nilai x nilai akhir: " << x << endl <<endl;
	
	return 0;
	
}
