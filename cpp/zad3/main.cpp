#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string imie;
	string nazwisko;
	cout<<"podaj imie: "<<endl;
	cin>>imie;
	cout<<"podaj nazwisko: "<<endl;
	cin>>nazwisko;
	fstream plik;
	plik.open("dane.txt", ios::app);
	if(!plik.is_open()){
	cout<<"blud"<<endl;
	return 1;
	}
	plik<<imie + " " +  nazwisko;
	plik.close();
	return 0;
}
