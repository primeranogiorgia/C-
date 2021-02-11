/* 
  * HelloMatrix.cpp
  * Scrivere un programma che usa apposite funzioni per: 
  - inizializzare random una matrice di interi
  - riempire la matrice come fosse una tavola pitagorica (grande 10)
  - calcolare la somma degli elementi sulla riga passata come parametro.
  * Author: Giorgia Primerano
  * Date: 18/12/'20
  */
#include <iostream>
#include <time.h>
#include <random>
using namespace std;

int generanumero (){
    return (rand() % 10)+1;
}

void RiempiMatrice(int a[]){
    srand(time(NULL));
    for (int r=0; r<10; r++){
        a[r]=generanumero();
    }
}

int Stampa(int a[]){
    cout<<" ";
    for (int r=0; r<10; r++){
        cout<<a[r]<<"\t";
    }
    cout<<endl;
    for (int t=0; t<10; t++){
        cout<<a[t]<<" ";
        for (int c=0; c<10; c++){ 
            cout<<a[t]*a[c]<<"\t";
        }
    cout<<endl;
    }
}

int Somma(int a[]){
    int somma=0;
    for (int r=0; r<10; r++){
        somma=somma+a[r];
    }
    cout<<"\n\tSomma degli elementi sulla riga passata come parametro: "<<somma;
}

int main()
{
    int a[10];
    cout<<"\t\t--Tavola Pitagorica con numeri casuali--\n"<<"___________________________________________________________________________"<<endl;
    RiempiMatrice(a);
    Stampa(a);
    Somma(a);

    return 0;
}
