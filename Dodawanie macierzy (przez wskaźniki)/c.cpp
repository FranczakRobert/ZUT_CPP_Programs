#include <iostream>

using namespace std;
// Definiuję klasę oraz metodę
class Macierz;
Macierz* DodajMacierze(Macierz* macierzA, Macierz* macierzB);

class Macierz
{
    private:
    static const int wiersze = 3;
    static const int kolumny = 3;
    float tab[wiersze][kolumny];

    //Tworzę metody
    public:
    Macierz()
    {
        for (int i = 0; i < wiersze; i++)
        {
           for (int j = 0; j < kolumny; j++)
           {
               tab[i][j] = 0;
           }
        }
    }

    void WczytajDane()
    {  
        cout << "Wprowadź wartości macierzy:"<< endl;
        int wartosc = 0;
        for (int i = 0; i < wiersze; i++)
        {
           for (int j = 0; j < kolumny; j++)
           {  
               cout << "Tab [" << i << "]" << "[" << j << "] = ";
               cin >> wartosc;
               tab[i][j] =  wartosc;
           }
        }
    }

    void Wypisz()
    {
        for (int i = 0; i < wiersze; i++)
        {
            cout <<"| ";
           for (int j = 0; j < kolumny; j++)
           {  
               cout << tab[i][j]<< " ";
           }
            cout <<"|"<< endl;     
        }
    }
    // Zaprzyjaźniam metodę 
    friend Macierz* DodajMacierze(Macierz *macierzA , Macierz *macierzB);
};

int main()
{
    //Tworzę obiekty 
    Macierz *macierzA = new Macierz();

    cout << "Macierz A" << endl;
    macierzA->WczytajDane();
    cout << endl;
    macierzA->Wypisz();
    cout << endl;


    Macierz *macierzB = new Macierz();
    cout << endl;
    cout << "Macierz B" << endl;
    macierzB->WczytajDane();
    cout << endl;
    macierzB->Wypisz();
    cout << endl;

    Macierz *wynik = new Macierz();
    cout << endl;
    cout << "Macierze A + B = " << endl;
    wynik = DodajMacierze(macierzA, macierzB);
    wynik->Wypisz();

    delete macierzA;
    delete macierzB;
    delete wynik;

    return 0;
}

//Tworzę ciało metody
Macierz* DodajMacierze(Macierz* macierzA, Macierz* macierzB)
{
    Macierz *dodanaMacierz = new Macierz();

    for (int i = 0; i < dodanaMacierz->wiersze; i++)
        {
           for (int j = 0; j < dodanaMacierz->kolumny; j++)
           {  
               dodanaMacierz->tab[i][j] = macierzA->tab[i][j] + macierzB->tab[i][j];
           }
        }
    return dodanaMacierz;
    delete dodanaMacierz;
}