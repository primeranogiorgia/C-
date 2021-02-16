/*
 *   Pila2.cpp
 *   Primerano Giorgia 
 */
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

class Lista {
private:
    int l;
    int top=0;
    string *data;
public:
    Lista (int lunghezza){
        l=lunghezza;
        data=new string [l];
        //for (int i=0; i<l; i++) data[i]="";
    }
    int size(){
        cout<<l<<endl;
        return l;
    }
    string get(int i){
        return data[i];
    } 
    int len(){
        return l;
    }
    string read(int i){
        return data[i];
    }
    void stampa(){
        for (int i=0; i<l; i++){
            cout<<read(i)<<endl;
        }
    }
    void add (string valore){
        if(top<100){
            data[top] = valore;
            top++;
        }
    }
    string generanumero(){
        string g;
        int s =(rand() % 20) + 1;
        for (int i=0; i<s; i++){
            g=g+"";
        }
        return g;
    }
    void sort (){
    	for (int k=0;k<top;k++){
			for (int i=0;i<top-1;i++){
				if (data [i]>data[i+1]){
					string temp=data[i];
					data[i]=data[i+1];
					data[i+1]=temp;
				}
			}
		}
	}
};
int main()
{
    Lista v(10);
    srand(time(NULL));
    /*for (int i=0; i<10; i++)
    {
        v.add(v.generanumero());
    }*/

    v.add("Cucciolo");
    v.add("Eolo");
    v.add("Dotto");
    v.add("Gongolo");
    v.add("Pisolo");
    v.add("Mammolo");
    v.add("Brontolo");
    
    v.stampa();
	v.sort();
	cout<<"Vettore ordinato:"<<endl;
	v.stampa();
	
    return 0;
}
