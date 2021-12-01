#include <iostream>
using namespace std;

string Nama;
string NPM;
string Alamat;
	
main (){
	//input
	getline(cin,Nama);
	getline(cin,NPM);
	getline(cin,Alamat);
	
	// output
	cout<<"Nama Saya Adalah "<<Nama<<" NPM "<<NPM<<" Alamat "<<Alamat;
	
	cout<<">\\\\<" ;
	
	return 0;
}

