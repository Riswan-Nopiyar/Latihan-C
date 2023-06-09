#include<iostream>
using namespace std;

//kita membuat 2 buah fungsi utama yaitu fungsi test() dan fungsi main()
//membuat fungsi bernama test()
void test(){
	cout<<"================================"<<endl;
	cout<<" Program : pertemuan 5          "<<endl;
	cout<<" Nama    : Riswan Nopiyar       "<<endl;
	cout<<" NPM     : 2010010085           "<<endl;
	cout<<" Kelas   : 3A reg BJM           "<<endl;
	cout<<" Dibuat  : 13 oktober 2021      "<<endl;
	cout<<"================================"<<endl;
	int x;// variabel x ini hanya dikenal oleh fungsi test()
	
	x=20;
	cout<<"Nilai x didalam fungsi test() adalah : "<<x<<endl;
}

//membuat fungsi bernama main()
int main(){
	// x tidak dapat digunakan di fungsi main()
	//cout<<"Nilai x didalam fungsi main() adlah : "<<x<<endl;
	//memanggil fungsi test()
	test();
	
	return 0;
}
