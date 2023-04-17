#include <iostream>
#include "pytanie.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void Pytanie::wczytaj() //metoda klasy Pytanie
{
    fstream plik;
    string linia;
    int nr_linii=1;

    plik.open("quiz.txt",ios::in);

    if (plik.good()==false) // zabezpieczenie przed błędem w pilku txt
    {
        cout << "Blad podczas odczytu pliku lub jego brak";
        getchar();
        exit(0);
    }

    while(getline(plik,linia))
    {
        if(nr_linii==(nr_pyt-1)*6+1) tresc=linia;
            
        if(nr_linii==(nr_pyt-1)*6+2) a=linia;
                   
        if(nr_linii==(nr_pyt-1)*6+3) b=linia;
            
        if(nr_linii==(nr_pyt-1)*6+4) c=linia;
            
        if(nr_linii==(nr_pyt-1)*6+5) d=linia;
            
        if(nr_linii==(nr_pyt-1)*6+6) poprawna=linia;
           

        nr_linii++;
    }

    plik.close();
}

void Pytanie::wypisz()
{
    cout << endl <<"Pytanie " << nr_pyt << endl;
    cout << tresc << endl;
    cout << a << endl << b << endl << c << endl << d << endl;
    cin >> odpowiedz;

}

void Pytanie::sprawdz()
{
    if (odpowiedz==poprawna)
    {
        punkty++;
        cout << "To dobra odpowiedz!  "<< endl << "Twoj wynik: " << punkty << "/" << nr_pyt<< endl;
    }

    else cout << "To zla odpowiedz"<< endl << "Twoj wynik: " << punkty << "/" << nr_pyt<< endl;
}
