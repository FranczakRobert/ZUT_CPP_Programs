#include<iostream>

using namespace std;
class Ulamek
{
    private:
    int licznik;
    int mianownik;
    int m2;
    int l2;

    public:

    Ulamek(int a, int b)
    {   
        licznik = a;
        mianownik = b;   
    }

    Ulamek operator+ (Ulamek &objekt)
    {
        if(mianownik != objekt.mianownik)
        {  
            int m2 = mianownik * objekt.mianownik;
            int l  = licznik * objekt.mianownik + objekt.licznik * mianownik;

            return Ulamek (l, m2);
        }
        else
            return Ulamek (licznik + objekt.licznik, mianownik);
    }

    Ulamek operator- (Ulamek &objekt)
    {
        if(mianownik != objekt.mianownik)
        {  
            m2 = mianownik * objekt.mianownik;
            l2  = licznik * objekt.mianownik - objekt.licznik * mianownik;

            if(m2 == 0 || l2 == 0)
            {
                return Ulamek (0, 0);
            }

            return Ulamek (l2, m2);
        }
        else
        {
            m2 = mianownik;
            l2 = licznik - objekt.licznik; 
            if(m2 == 0 || l2 == 0)
            {
                return Ulamek (0, 0);
            }
            else
                return Ulamek (l2, m2);
        }

    }

    Ulamek operator* (Ulamek &objekt)
    {
        
        l2 = licznik * objekt.licznik;
        m2 = mianownik * objekt.mianownik;

        if(m2 == 0 || l2 == 0)
            {
                return Ulamek (0, 0);
            }
        else
            return Ulamek (l2,m2);
    }


    Ulamek operator/ (Ulamek &objekt)
    {
        l2 = licznik * objekt.mianownik;
        m2 = mianownik * objekt.licznik;
        
        if(m2 == 0 || l2 == 0)
            {
                return Ulamek (0, 0);
            }
        else
            return Ulamek (l2,m2);
    }

    void wyswietlWynik()
    {
        cout << licznik <<  "/" << mianownik;
    }

};

int main()
{
    int a,b,c,d;

    cout << "PIERWSZY UŁAMEK " << endl;
    cout << "Licznik: ";
    cin >> a;
    cout << "Mianownik: ";
    cin >> b;
    cout << endl;
    Ulamek pierwsz = Ulamek(a,b);

    cout << endl;
    cout << "DRUGI UŁAMEK " << endl;
    cout << "Licznik: ";
    cin >> c;
    cout << "Mianownik: ";
    cin >> d;
    cout << endl;
    cout << endl;
    Ulamek drugi = Ulamek(c,d);


    Ulamek wynik = Ulamek(0,0);
    cout << endl;
    cout << "DODAWANIE" << endl;
    wynik = pierwsz + drugi;
    wynik.wyswietlWynik();
    cout << endl;

    cout << endl;
    cout << "ODEJMOWANIE" << endl;
    wynik = pierwsz - drugi;
    wynik.wyswietlWynik();
    cout << endl;

    cout << endl;
    cout << "MNOŻENIE" << endl;
    wynik = pierwsz * drugi;
    wynik.wyswietlWynik();
    cout << endl;

    cout << endl;
    cout << "DZIELENIE" << endl;
    wynik = pierwsz / drugi;
    wynik.wyswietlWynik();
    cout << endl;


}
