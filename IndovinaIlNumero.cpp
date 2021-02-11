/*
 * IndovinaIlNumero.cpp
 * Giorgia Primerano
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int generanumero (){
	srand(time(NULL));
	return (rand() % 10)+1;
} 
	int n;
	int p=2;
	int genera=generanumero();
	
int main()
{		
	cout<<genera<<"\n";
	cout<<"--INDOVINA IL NUMERO--\n"<<"Inserisci un numero da 1 a 10: ";
	cin>>n;
	
	while (n<1 || n>10){
		cout<<"Il numero inserito non e' valido\n"<<"inserisci un numero da 1 a 10: ";
		cin>>n;
	}
	
	while (n!=genera){
		if  (p==0){
			cout<<"Hai finito i tuoi tentativi\n"<<"Il numero generato era: "<<genera;
			break;
		}
		else{
			p=p-1;
			cout<<"Non hai indovinato\n"<<"Inserisci un numero da 1 a 10: ";
			cin>>n;	
		}
	}
	if (n==genera){
		cout<<"Hai indovinato"<<"\n";
	}

	return 0;
}

