#include <iostream>
using namespace std;

int main()
{
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 9          "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 17 november 2021     "<<endl;
	cout<<"================================"<<endl;
	char nilai = 'D';
	
	switch(nilai){
		case 'A':
			cout << "Luar biasa" << endl;
			break;
		case 'B':
			cout << "Bagus" << endl;
			break;
		case 'C':
			cout << "Anda lulus" << endl;
			break;
		case 'D':
			cout << "Mengikuti remedi" << endl;
			break;
		case 'E':
			cout << "Anda tidak lulus" << endl;
			break;
		default :
			cout << "Tidak ada nilai" << endl;
}
cout << "Karena nilai anda adalah "  << nilai << endl;

return 0;
}
