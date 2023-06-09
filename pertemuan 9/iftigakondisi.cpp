#include <iostream>
using namespace std;

int main(){
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 9          "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 17 november 2021     "<<endl;
	cout<<"================================"<<endl;
	int nilai = 90;
	//A = 80 - 100
	//B = 60 - 79
	//C = 40 - 59
	//F = 0 - 39
	if(nilai>=80){
		cout << "A";
	} else if(nilai>=60){
		cout << "B";
    } else if(nilai>=40){
		cout << "C";
    } else {
    	cout << "D";
    }
    return 0;
}
