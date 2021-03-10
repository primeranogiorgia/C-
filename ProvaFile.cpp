/*
 * ProvaFile.cpp 
 * Giorgia Primerano
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	//creazione di un file
	ofstream myFile("prova.txt"); //(se non esiste, se esiste viene sovrascritto)
	myFile<<"Prima frase"<<endl;
	myFile<<"Seconda frase"<<endl;
	myFile.close();//chiusura del file
	
	//lettura di un file esistene
	string s;
	ifstream myFile2("prova.txt");
	while(getline(myFile2,s)){//file da leggere e stringa da leggere
		cout<<s<<endl;
	}

	myFile2.close();
	return 0;
}


