#include<iostream>
#include <cstdlib>
using namespace std;
class Zespolona;

class Zespolona
{
    private:
    int czesc_rzeczywista;
    int czesc_urojona;

    public:

    Zespolona(int r, int u)
    {
        this->czesc_rzeczywista = r;
        this->czesc_urojona = u;
    }

    Zespolona operator+ (Zespolona &objekt)
    {
        return Zespolona (czesc_rzeczywista + objekt.czesc_rzeczywista, czesc_urojona + objekt.czesc_urojona);
    }

    Zespolona operator- (Zespolona &objekt)
    {
        return Zespolona (czesc_rzeczywista - objekt.czesc_rzeczywista, czesc_urojona - objekt.czesc_urojona);
    }

    Zespolona operator* (Zespolona &objekt)
    {
        return Zespolona (((czesc_rzeczywista * objekt.czesc_rzeczywista) - (czesc_urojona * objekt.czesc_urojona)),((czesc_rzeczywista * objekt.czesc_urojona) + (czesc_rzeczywista *  objekt.czesc_rzeczywista)));
    }


    Zespolona operator/ (Zespolona &objekt)
    {
        return Zespolona ((((czesc_rzeczywista * objekt.czesc_rzeczywista) + (czesc_urojona * objekt.czesc_urojona)) / ((objekt.czesc_rzeczywista * objekt.czesc_rzeczywista) + (objekt.czesc_urojona * objekt.czesc_urojona))), (((czesc_urojona * objekt.czesc_rzeczywista) - (czesc_rzeczywista * objekt.czesc_urojona)) / ((objekt.czesc_rzeczywista * objekt.czesc_rzeczywista) + (objekt.czesc_urojona * objekt.czesc_urojona))));    
    }

    void* operator new(size_t rozmiar) 
    {
        void* wsk = malloc(rozmiar);

        return wsk;
    }
    
    void operator delete(void* wsk) 
    {
        free(wsk);
    }

    void wyswietl()
    {
        cout << "z = " << czesc_rzeczywista << " + " << czesc_urojona << "i" << endl;
    }

};

int main()
{
    Zespolona a =  Zespolona(2,2);
    Zespolona b =  Zespolona(2,2);
    cout << endl;
    cout << endl;
    cout << "PODPUNKT 1: " << endl;
    cout << endl;
    Zespolona dodawanie = (a + b);
    cout << "Dodawanie "; 
    dodawanie.wyswietl();

    Zespolona odejmowanie = (a - b);
    cout << "Odejmowanie "; 
    odejmowanie.wyswietl();

    Zespolona mnozenie = (a * b);
    cout << "Mnozenie "; 
    mnozenie.wyswietl();;

    Zespolona dzielenie = (a / b);
    cout << "Dzielenie "; 
    dzielenie.wyswietl();


    Zespolona *newA = new Zespolona(2,2);
    Zespolona *newB = new Zespolona(2,2);
    
    Zespolona *wynik = new Zespolona(0,0);

    cout << endl;
    cout << endl;
    cout << "PODPUNKT 2: " << endl;
    cout << endl;
    *wynik = *newA + *newB;
    cout << "Dodawanie "; 
    wynik->wyswietl();
    
    *wynik = *newA - *newB;
    cout << "Odejmowanie "; 
    wynik->wyswietl();

    *wynik = *newA * *newB;
    cout << "Mnozenie "; 
    wynik->wyswietl();

    *wynik = *newA / *newB;
    cout << "Dzielenie "; 
    wynik->wyswietl();
    cout << endl;
    cout << endl;

    delete newA;
    delete newB;
    delete wynik;
}
