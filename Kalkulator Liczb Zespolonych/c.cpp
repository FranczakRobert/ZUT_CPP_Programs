#include <iostream>
using namespace std;

// Tworzenie struktury
struct zespolona{
    public:
    double rzeczywista;
    double urojona;
};
// Deklaracje metod
void pobierzDane(struct zespolona*);
void wyswietlWynik(struct zespolona);

struct zespolona suma(struct zespolona, struct zespolona);
struct zespolona roznica(struct zespolona, struct zespolona);
struct zespolona iloczyn(struct zespolona, struct zespolona);
struct zespolona iloraz(struct zespolona, struct zespolona);
struct zespolona sprzezona(struct zespolona);


int main()
{
    // Tworzenie obiektu pierwszej liczby zaspolonej
    zespolona pierwsza;
    cout << "Wprowadź pierwszą liczbę zespolona: " << endl;
    pobierzDane(&pierwsza);
    cout << "Wprowadzona liczba zespolona: " << endl;
    cout << "Z1 = " << pierwsza.rzeczywista << " + " << pierwsza.urojona << "i" << endl;

    // Tworzenie obiektu drugiej liczby zaspolonej
    zespolona druga;
    cout << "Wprowadź drugą liczbę zespolona: " << endl;
    pobierzDane(&druga);
    cout << "Wprowadzona liczba zespolona: " << endl;
    cout << "Z2 = " << druga.rzeczywista << " + " << druga.urojona << "i" << endl;

    // DODAWANIE
    zespolona z3;
    z3 = suma(pierwsza, druga);
    cout << "SUMA: Z1 + Z2 = ";
    wyswietlWynik(z3);

    // ODEJMOWANIE
    zespolona z4;
    z4 = roznica(pierwsza, druga);
    cout << "RÓŻNICA: Z1 - Z2 = ";
    wyswietlWynik(z4);

    //MNOŻENIE
    zespolona z5;
    z5 = iloczyn(pierwsza, druga);
    cout << "ILOCZYN: Z1 * Z2 = ";
    wyswietlWynik(z5);

    //DZIELENIE
    zespolona z6;
    z6 =  iloraz(pierwsza, druga);
    cout << "ILORAZ: Z1 / Z2 = ";
    wyswietlWynik(z6);

    //SPRZĘŻENIE PIERWSZE PODANEJ LICZBY ZESPOLONEJ
    zespolona z7;
    z7 = sprzezona(pierwsza);
    cout << "SPRZĘŻENIE: Z1:  ";
    wyswietlWynik(z7);

    //SPRZĘŻENIE DRUGIEJ PODANEJ LICZBY ZESPOLONEJ
    zespolona z8;
    z8 = sprzezona(druga);
    cout << "SPRZĘŻENIE: Z2:  ";
    wyswietlWynik(z8);

    return(0);
}

void pobierzDane(zespolona* dane)
{
    cout << "Część rzeczywista: ";
    cin >>dane->rzeczywista;
    cout << "Część urojona: ";
    cin >> dane->urojona;
}

void wyswietlWynik(zespolona wynik)
{
    if(wynik.urojona >= 0)
    {
        cout << wynik.rzeczywista << " + " << wynik.urojona << "i" << endl;
    }
    else
    {
        cout << wynik.rzeczywista << " " << wynik.urojona << "i" << endl;
    }
}

struct zespolona suma(zespolona pierwsza, zespolona druga)
{
    zespolona suma;
    suma.rzeczywista =(pierwsza.rzeczywista + druga.rzeczywista);
    suma.urojona = (pierwsza.urojona + druga.urojona);

    return suma;
}

struct zespolona roznica(zespolona pierwsza, zespolona druga)
{
    zespolona roznica;
    roznica.rzeczywista =(pierwsza.rzeczywista - druga.rzeczywista);
    roznica.urojona = (pierwsza.urojona - druga.urojona);

    return roznica;
}

struct zespolona iloczyn(zespolona pierwsza, zespolona druga)
{
    zespolona iloczyn;

    iloczyn.rzeczywista= ((pierwsza.rzeczywista * druga.rzeczywista) - (pierwsza.urojona * druga.urojona));
    iloczyn.urojona = ((pierwsza.rzeczywista * druga.urojona) + (pierwsza.urojona *  druga.rzeczywista));

    return iloczyn;
}

struct zespolona iloraz(zespolona pierwsza, zespolona druga)
{
    zespolona iloraz;

    iloraz.rzeczywista = (((pierwsza.rzeczywista * druga.rzeczywista) + (pierwsza.urojona * druga.urojona)) / ((druga.rzeczywista * druga.rzeczywista) + (druga.urojona * druga.urojona)));
    iloraz.urojona = (((pierwsza.urojona * druga.rzeczywista) - (pierwsza.rzeczywista * druga.urojona)) / ((druga.rzeczywista * druga.rzeczywista) + (druga.urojona * druga.urojona)));

    return iloraz;
}

struct zespolona sprzezona(zespolona lzesp)
{
    zespolona liczba;

    liczba.rzeczywista = lzesp.rzeczywista;
    liczba.urojona = lzesp.urojona * -1;


    return liczba;
}



