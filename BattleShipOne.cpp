/*
 * BattleShipOne.cpp
 * Una battaglia navale contro il computer sulla costa
 * Author: Primerano Giorgia
 * Date: 4 december 2020
 * Help codici mappa: 0=empty, 1=ship, 2=bomb, 3=strike
 */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void initialize(int v[], int l){
    for (int i=0; i<l; i++) v[i]=0;
}

void show(int v[], int l){ //campo di battaglia
    for (int i=0; i<l; i++){
        switch (v[i]){
            case 0:
                cout<<"O ";
                break;
            case 1:

                cout<<"O ";
                break;
            case 2:
                cout<<"- ";
                break;
            case 3:
                cout<<"* ";;
        }
    }
    cout<<endl;
}

void arrange(int v[], int l){//caselle con nave (2 caselle)
    srand(time(NULL));
    int n= rand() % (l-1);
    v[n]=1;
    v[n+1]=1;
}

void launch(int v[], int l){
    int p=-1;
    while (p<0 || p>=l+1){
        cout<<"Inserire le coordinate in cui sgangiare la bomba (1.."<<l<<"): ";
        cin>>p;
    }
    p--;
    if (v[p]==0) v[p]=2;
    if (v[p]==1) v[p]=3;
}

bool weWon(int v[], int l){
    for (int i=0; i<l; i++){
        if (v[i]==1) return false;
    }
    return true;
}

int main()
{
    int num_bomb=0;
    const int MAPLENGTH=10; //costante
    int map[MAPLENGTH];
    cout<<"--BATTAGLIA NAVALE--\n";
    initialize(map,MAPLENGTH);
    arrange(map,MAPLENGTH);
    show(map,MAPLENGTH);
    while (true){
           num_bomb++;
           launch(map,MAPLENGTH);
           show(map,MAPLENGTH);
           if (weWon(map,MAPLENGTH)) break;
    }

    if (num_bomb<=3){
        cout<<"Complimenti";
    }
    else if(num_bomb<=5){
        cout<<"Bravino";
    }
    else if(num_bomb<=7){
        cout<<"Accidenti";
    }
    cout<<" hai distrutto la flotta nemica utilizzando "<<num_bomb<<" bombe."<<endl;

    return 0;
}
