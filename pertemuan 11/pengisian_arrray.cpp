#include<iostream>
using namespace std;

int main(){
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 11         "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 1 desember 2021      "<<endl;
	cout<<"================================"<<endl;
	
	int nilai [5]= {20,10,60,80,100};
	nilai [0] = 25;
	
	for (int i=0;i<5;i++){
		cout << nilai[i]<< endl;
	}
	return 0;
}
