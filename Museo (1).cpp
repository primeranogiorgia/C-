#include <iostream>
using namespace std;

int main()
{
	int p;
	int t;
	float sconto;
	float ps;
	cout<<"Inserisci il prezzo del biglietto\n";
	cin>>p;
		
	while (p<=0){
		cout<<"Il numero inserito non e' valido:\n"<<"Inserisci il prezzo del biglietto\n";
		cin>>p;
	}
	
	cout<<"Tipologia di visitatore:\n1=studente\n2=pensionato\n3=cittadini residenti nel comune di Bologna\n4=portatori di handicap\n5=visitatore generico";
	cout<<"Inserisci la tipologia di visitatore\n";
	cin>>t;
	
	switch(t)
	{
	case 1:
	sconto= p * 50 / 100;
	ps = p  - sconto;
	cout<<"Il prezzo scontato e': "<<ps;
	break;
	case 2:
	sconto= p * 30 / 100;
	ps = p  - sconto;
	cout<<"Il prezzo scontato e': "<<ps;
	break;
	case 3:
	sconto= p * 25 / 100;
	ps = p  - sconto;
	cout<<"Il prezzo scontato e': "<<ps;
	break;
	case 4:
	cout<<"Entrata libera"<<endl;
	break;
	case 5:
	cout<<"Non hai diritto a nessuna agevolazione"<<endl;
	break;
	default:
	cout<<"Il numero inserito non e' valido"<<endl;
	break;
}
	return 0;
}


