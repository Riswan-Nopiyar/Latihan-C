#include <iostream>
using namespace std;

int main (){
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 10         "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 24 november 2021     "<<endl;
	cout<<"================================"<<endl;
	int J =10;
	int K;
	 
	 do {
	    K=1;
	 	while (K<=J){
	 		cout <<K*J<<' ';
	 	K++;
	 	}
	 	cout <<endl;
	 	J--;
	 } while (J>=1);
	 return 0;
}
