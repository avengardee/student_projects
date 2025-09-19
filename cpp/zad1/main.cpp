#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	cout<<"Podaj wiek"<<endl;
	cin>>x;
	cout<<"Podaj wiek następnej osoby"<<endl;
	cin>>y;
	cout<<"W sumie macie lat: "<<x+y<<endl;
	if(x+y>100){
		cout<<"Macie w sumie więcej niż 100 lat"<<endl;
	}
	else{
		cout<<"Macie w sumie mniej lub 100 lat"<<endl;
	}
	if(x>y){
		cout<<"Osoba 1 jest starsza"<<endl;
	}else if(y>x){
		cout<<"Osoba 2 jest starsza"<<endl;
	}else{
		cout<<"Obie osoby są tego samego wieku"<<endl;
	}
	return 0;
}
