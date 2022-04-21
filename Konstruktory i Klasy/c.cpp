#include <iostream>
#include <math.h>

using namespace std;
const float pi = 3.14;

// Storzenie klasy o nazwy Figury, zawierającej trzy pola.
class Figury
{
    //ustawienie dostepnosci pol na publiczne
public:
    float promienKuli;
    float wysokoscWalca;
    float wysokoscStozka;

    //Utworzenie konstruktora bezparametrowego z przypisanumi wartosciami
    Figury()
    {
        promienKuli = 101;
        wysokoscWalca = 102;
        wysokoscStozka = 103;
    }

    // Utworzenie konstruktora wieloargumentowego z listą inicjalizacyjną
    Figury(float kula, float walec, float stozek) : promienKuli(kula), wysokoscWalca(walec), wysokoscStozka(stozek)
    {
    }
    
    //Tworzę dwie metody
    public:
    float oblicz_Powierzchnie()
    {
        float polePowierzchni;
        float l = sqrt(promienKuli*promienKuli + wysokoscStozka*wysokoscStozka); // Tworząca stozka.
            // Polowa Kuli
        polePowierzchni = 
            2 * pi * promienKuli * promienKuli   
            //Walec
            + 2 * pi * promienKuli * wysokoscWalca  
            // Stozek (boczna)
            + pi * promienKuli * l;

        return polePowierzchni;
    }

    float oblicz_Objetosc()
    {
        float objetosc;
            //Kula (polowa)
        objetosc = 
            4/6 * pi * promienKuli * promienKuli * promienKuli
            //Walec
            +pi * promienKuli * promienKuli * wysokoscWalca
            // stoek
            + 1/3 * pi * promienKuli * promienKuli * wysokoscStozka;

        return objetosc;
    }
    
};

int main()
{   
    //Tworzymy nowe obiekty klasy Figury

    Figury pierwszy;

    cout << "Objętość PIERWSZEGO OBIEKTU figury zlozonej: "<< endl;
    cout << pierwszy.oblicz_Objetosc() << endl;
    cout << "Pole powierzchni PIERWSZEGO OBIEKTU figury zlozonej: "<< endl;
    cout << pierwszy.oblicz_Powierzchnie() << endl;

    Figury drugi(101,102,103);

    cout << "Objętość DRUGIEGO OBIEKTU figury zlozonej: "<< endl;
    cout << drugi.oblicz_Objetosc() << endl;
    cout << "Pole powierzchni DRUGIEGO OBIEKTU figury zlozonej: "<< endl;
    cout << drugi.oblicz_Powierzchnie() << endl;
    
    Figury trzeci(11,12,13);

    cout << "Objętość TRZECIEGO OBIEKTU figury zlozonej: "<< endl;
    cout << trzeci.oblicz_Objetosc() << endl;
    cout << "Pole powierzchni TRZECIEGO OBIEKTU figury zlozonej: "<< endl;
    cout << trzeci.oblicz_Powierzchnie() << endl;

    Figury *dynamiczna = new Figury(21,20,19);
    cout << "Objętość CZWARTEGO OBIEKTU (dynamiczny) figury zlozonej : "<< endl;
    cout << dynamiczna->oblicz_Objetosc() << endl;
    cout << "Pole powierzchni CZWARTEGO OBIEKTU (dynamiczny) figury zlozonej: "<< endl;
    cout << dynamiczna->oblicz_Powierzchnie() << endl;

    delete(dynamiczna);



    return 0;
}


