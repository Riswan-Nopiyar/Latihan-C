#include <iostream>
using namespace std;

int main()
{
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 7          "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 27 oktober 2021      "<<endl;
	cout<<"================================"<<endl;
	bool a, b;
	a = (7==5);
	b = (5>4);
	
	bool x, y, z;
	x = a && b;
	y = a || b;
	z = !(a&&b);
	cout<< x << y << z <<endl;
	return 0;
}
