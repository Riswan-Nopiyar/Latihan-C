#include <iostream>
using namespace std;

int main(){
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 10         "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 24 november 2021     "<<endl;
	cout<<"================================"<<endl;
	for (int j=1; j<=10; j++){
		for (int k=1; k<=j; k++) {
			cout << k*j << ' ';
		}
		cout<<endl;
	}
	    return 0;
}
