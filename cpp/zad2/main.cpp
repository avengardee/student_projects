#include <iostream>

using namespace std;

int main(){
	cout<<"Le Bandit"<<endl;
	for(int x=0; x<10; x++){
		cout<<x<<endl;
	}
	int a, b, liczba, suma;
	cout<<"Podaj liczbę"<<endl;
	cin>>a;
	cout<<"Podaj drugą liczbę"<<endl;
	cin>>b;
	suma = a+b;
	cout<<"Suma: "<<suma<<endl;
	cout<<"Podaj kolejną liczbę do dodania (0 aby zakończyć)"<<endl;
	while(true){
		cin>>liczba;
		if(liczba==0){
			break;
		}
		suma += liczba;
		cout<<"Suma: "<<suma<<endl;
	}
	return 0;
}
