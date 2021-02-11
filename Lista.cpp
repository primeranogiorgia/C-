/*
 * Lista.cpp
 * Primerano Giorgia
 * Realizzare un programma in C++ denominato Lista.cpp che definisce una classe Lista (di stringhe), 
   con i metodi add, read , write e print, oltre a len e size. Poi nella funzione main dichiarare un oggetto di tipo Lista 
   e riempirlo di stringhe composte da un numero casuale di '*' per poi stampare il contenuto della Lista.
 */
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class Lista{
private:
    string *data;
    int lun;
    int top=0;
public:
    Lista(int lunghezza){
        lun = lunghezza;
        data = new string [lun];
    }

    int size(){
        cout<<"Size lista: "<<lun<<endl;
        return lun; 
    }

    string read(int i){
        return data[i];
    }

    void add(string v){
        if(top<10){
            data[top] = v;
            top++;
        }
    }
        
    void print(){
            for (int i=0; i<lun; i++){
                cout<<read(i)<<endl;
            }
        }
    
    string genera(){
        string s;
        int x =(rand() % 10) + 1;
        for (int i=0; i<x; i++){
            s=s+"*";
        }
        return s;
    }
};

int main()
{
    Lista l(10);
    cout<<"----LISTA----"<<endl;
    srand(time(NULL));
    for (int i=0; i<10; i++){
        l.add(l.genera());
    }
    l.size();
    l.print();
    
    return 0; 
}

