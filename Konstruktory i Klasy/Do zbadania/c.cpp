#include <iostream>
#include <math.h>

using namespace std;
const float pi = 3.14;

// Storzenie klasy o nazwy Figury, zawierającej trzy pola.
class Figury
{
    //ustawienie dostepnosci pol na publiczne
public:
    int promienKuli;
    int wysokoscWalca;
    int wysokoscStozka;

    //Utworzenie konstruktora bezparametrowego z przypisanumi wartosciami
    Figury()
    {
        promienKuli = 101;
        wysokoscWalca = 102;
        wysokoscStozka = 103;
    }

    // Utworzenie konstruktora wieloargumentowego 
    Figury(int promienKuli, int wysokoscWalca, int wysokoscStozka)
    {
        this->promienKuli = promienKuli;
        this->wysokoscStozka = wysokoscStozka;
        this->wysokoscWalca = wysokoscWalca;
    }

    //Tworzę dwie metody
    public:
    float oblicz_Powierzchnie()
    {
         // Powierzchnia kuli
        float kula = 4 * pi * promienKuli * promienKuli;

        // Walec Powierzchnia
        float walec = 2 * pi * promienKuli * (promienKuli + wysokoscWalca);

        //Stozek
        float l = sqrt((wysokoscStozka * wysokoscStozka) + (promienKuli * promienKuli));
        float stozek = pi * promienKuli * (promienKuli + l);

        float zlozona = (kula/2) + walec + stozek;

        return zlozona;
    }

    float oblicz_Objetosc()
    {
        float kula = (4/3) * pi * promienKuli * promienKuli * promienKuli;

        float walec = pi * promienKuli * promienKuli * wysokoscWalca; 

        float stozek = (pi * promienKuli * promienKuli * wysokoscStozka)/3;
        

        float zlozona = (kula/2) + walec + stozek;

        return zlozona;
    }
    
};

int main()
{   
    //Tworzymy nowe obiekty klasy Figury

    Figury *pierwszy = new Figury();

    cout << "Objętość PIERWSZEGO OBIEKTU figury zlozonej: "<< endl;
    cout << pierwszy->oblicz_Objetosc() << endl;
    cout << "Pole powierzchni PIERWSZEGO OBIEKTU figury zlozonej: "<< endl;
    cout << pierwszy->oblicz_Powierzchnie() << endl;

    Figury *drugi = new Figury(101,102,103);

    cout << "Objętość DRUGIEGO OBIEKTU figury zlozonej: "<< endl;
    cout << drugi->oblicz_Objetosc() << endl;
    cout << "Pole powierzchni DRUGIEGO OBIEKTU figury zlozonej: "<< endl;
    cout << drugi->oblicz_Powierzchnie() << endl;
    
    Figury *trzeci = new Figury(11,12,13);

    cout << "Objętość TRZECIEGO OBIEKTU figury zlozonej: "<< endl;
    cout << trzeci->oblicz_Objetosc() << endl;
    cout << "Pole powierzchni TRZECIEGO OBIEKTU figury zlozonej: "<< endl;
    cout << trzeci->oblicz_Powierzchnie() << endl;


    return 0;
}


