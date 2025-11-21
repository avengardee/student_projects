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
	fstream liczby;
	liczby.open("nig.txt");
	if(!liczby.is_open()){
	cout<<"chyba nie kmini"<<endl;
	return 1;
	}
	int liczba;
	int suma = 0;
	while(liczby >> liczba){
	suma += liczba;
	}
	liczby.close();
	cout<<"Suma liczb z pliku: "<<suma<<endl;
	return 0;
}
