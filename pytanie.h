#include <iostream>

using namespace std;

class Pytanie
{
    public:

    string tresc;
    string a,b,c,d;
    int nr_pyt;
    string odpowiedz;
    string poprawna;
    int punkty;

    void wczytaj();
    void wypisz();
    void sprawdz();

};