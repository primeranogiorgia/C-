/*
 * Voti.cpp
 * Primerano Giorgia
 * ESERCITAZIONE MATRICI E ARRAY
Data una matrice di numeri interi (compresi tra 2 e 10) contenente i voti finali di 5 discipline e di N studenti e un array di caratteri contenente la lettera iniziale del cognome dei rispettivi studenti (dando per scontato che non ci sono lettere uguali) fornire:
1.    La media di tutti gli studenti
2.    La media di un singolo studente, fornendo da tastiera il numero progressivo dell’elenco (Nota: nell’elenco di una classe non esiste il numero 0!!!)
3.    La media di una singola materia, fornendo da tastiera il numero progressivo da 1 a 5
4.    Il numero di studenti che ha una media superiore alla media della classe
 */
#include <iostream>
#include <time.h>

using namespace std;

int generacasuali (){
    int g=(rand()%10)+1;
}

void RiempiMatrice (int a[1][5], int n){
    srand(time(NULL));
    for (int x=0; x<n; x++){
        for (int y=0; y<5; y++){
            a[x][y]=generacasuali();
            while (a[x][y]<2) a[x][y] = generacasuali();
        }
    }
}

void Stampa(int a[1][5], int n){
    cout<<"\n";
    for (int x=0; x<n; x++){
        char cognome [ ]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        cout<<cognome [rand()%21];
        cout<<": \t\t\t   ";
        for (int y=0; y<5; y++){
            cout<<a[x][y]<<"  \t\t\t   ";
        }
        cout<<endl;
    }
}

float Mediatot(int a[1][5],int n){
    float s=0; 
    float mediatot=0;
    for (int x=0;x<n;x++){
        for (int y=0;y<5;y++){
            s=s+a[x][y];
        }
    }
    mediatot=s/(n*5);
    cout<<"\n\t\t\t\t\t\t\tMedia totale: "<<mediatot<<endl;
    }
    
float Mediastudente(int a[1][5],float n){
    float s=0; 
    int alunno;
    float mediastudente;
    cout<<"Inserisci il numero dello studente: ";
    cin>>alunno;
    while (alunno<1 || alunno>n){
        cout<<"!ERRORE IL NUMERO INSERITO NON E' VALIDO!"<<"\nInserisci il numero dello studente: ";
        cin>>alunno;
    }
    alunno--;//start 1
    for (int x=0;x<5;x++){
            s=s+a[alunno][x];
            }
        mediastudente=s/5;
        cout<<"- Media studente "<<alunno+1<<": "<<mediastudente<<endl;
    }
    
float Mediamater(int a[1][5],int n){
    float s=0;
    int materia;
    float mediamater=0;
    cout<<"Inserisci il numero della materia: ";
    cin>>materia;
    while (materia<1 || materia>n){
        cout<<"!ERRORE IL NUMERO INSERITO NON E' VALIDO!"<<"\nInserisci il numero della materia: ";
        cin>>materia;
        }
    materia--;//start 1
    for(int x=0;x<n;x++){
        s=s+a[x][materia];
    }
    mediamater=s/n;
    cout<<"- Media meteria "<<materia+1<<": "<<mediamater<<endl;
    }
    
int Studentisup(int a[1][5],int n){
    float s=0; 
    float mediatot=0;
    float mediastudente;
    int mediastudentisup=0;
    for (int x=0;x<n;x++){
        for (int y=0;y<5;y++){
            s=s+a[x][y];
        }
    }
    mediatot=s/(n*5);
     
    for (int x=0;x<1;x++){
        for (int y=0;y<n;y++){
            s=s+a[n][y];
            mediastudente=s/5;
            if (mediatot<mediastudente){
                mediastudentisup++;
            }
        }
        cout<<"\t\t\t\t\t         Numero studenti sopra la media: "<<mediastudentisup;
    }
}

int main()
{
    int n;
    cout<<"Numero studenti: ";
    cin>>n;
    
    cout<<"\n\t\t\t\t\t\t\t-- Voti Finali --\n"<<"________________________________________________________________________________________________________________________________"<<endl;
	cout<<"|X|\t\t\t";
	int NumMat=1;
	for (int y=0; y<5; y++){
		cout<<"Materia"<<NumMat<<"\t\t";
		NumMat++;
	    }
	    
	int a[n][5];
	RiempiMatrice(a,n);
	Stampa(a,n);
    Mediatot(a,n);
    Mediastudente(a,n);
    Mediamater(a,n);
    Studentisup(a,n);
    
	return 0;
}


