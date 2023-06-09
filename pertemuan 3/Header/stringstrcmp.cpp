#include <string.h>
#include <iostream>

using namespace std;

int main(){
	char string1[10]; char string2[20]; int hasil;
	cout<<"================================"<<endl;
	cout<<" Program : Header               "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 6 oktober 2021       "<<endl;
	cout<<"================================"<<endl;
	cout<<"Masukkan Kata Pertama = "; cin >>string1;
	cout<<"Masukkan Kata Kedua = "; cin>>string2;
	
	hasil = strcmp(string1,string2);
	
	if(hasil == 0) {
		cout<<"Kata Pertama dan Kedua Sama";
	}else {
		cout<<"Kata Pertama dan Kedua Berbeda";
	}
	
}
