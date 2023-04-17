#include <iostream>
#include "pytanie.cpp" //dziala z poziomu VSC
//#include "pytanie.h" //dziala tylko poprzez wywolanie z konsoli


using namespace std;

int main()
{
    int ile;

    cout << "Na ile pytan chcesz odpowiedziec ?" << endl;
    cin >> ile ;
    Pytanie p[ile];
    p[0].punkty=0;

    for(int i=1; i<=ile; i++)
    {   
        p[i-1].nr_pyt=i;
        p[i-1].wczytaj();
        p[i-1].wypisz();
        p[i-1].sprawdz();       
        p[i].punkty=p[i-1].punkty; 
    }

    
    return 0;
}