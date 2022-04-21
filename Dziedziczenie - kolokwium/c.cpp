#include <iostream>

using namespace std;

class Student {
    private:
    int nrIndeks;

    public:
    void setIndex(int value)
    {
        nrIndeks = value;
    }
    int getIndex()
    {
        return nrIndeks;
    }
};

class Kolokwium : public Student {
    double wynikKol1;
    double wynikKol2;
    double wynikKol3;

    public:
    double getWynik1()
    {
       return wynikKol1;
    }
    double getWynik2()
    {
       return wynikKol2;
    }
    double getWynik3()
    {
       return wynikKol3;
    }

    void SetWyniki(double value1, double value2, double value3)
    {
       wynikKol1 = value1;
       wynikKol2 = value2;
       wynikKol3 = value3;
    }

    void wyświetlWynikiKolokwium()
    {
        cout << "Wynik 1 kolokwium: " << wynikKol1 << endl;
        cout << "Wynik 2 kolokwium: " << wynikKol2 << endl;
        cout << "Wynik 3 kolokwium: " << wynikKol3 << endl;
    }

};

class Egzamin
{
    private:
    double wynikEgzaminu;

    public:
    void SetWynikEgzaminu(double value)
    {
       wynikEgzaminu = value;
    }
    double GetWynikEgzaminu()
    {
        return wynikEgzaminu;
    }

    void wyświetlWynikEgzaminu()
    {
        cout << "Wynik Egzaminu: "<< wynikEgzaminu << endl;
    }
};

class Wynik : public Kolokwium , public Egzamin
{
    private:
    double wynikStudenta;

    public:
    void obliczWynik()
    {
        wynikStudenta = ((getWynik1() + getWynik2() + getWynik3()) / 3 + 3 * GetWynikEgzaminu()); 
    }

    void wyswietlWynik()
    {
        cout << "Wynik końcowy w pkt: "<< wynikStudenta << endl;
    }
    
};

int main(void) {

    Wynik Tom;
    cout << endl;
    cout << endl;
    cout << "STUDNET 1" <<endl;
    Tom.setIndex(1);
    Tom.SetWyniki(4,4,3);
    Tom.SetWynikEgzaminu(5);
    Tom.obliczWynik();
    cout << "Nr indexu: " << Tom.getIndex() << endl;
    cout << "Wynik 1 kolokwium: " << Tom.getWynik1() << endl;
    cout << "Wynik 2 kolokwium: " << Tom.getWynik2() << endl;
    cout << "Wynik 3 kolokwium: " << Tom.getWynik3() << endl;
    cout << "Wynik Egzaminu: " << Tom.GetWynikEgzaminu() << endl;
    Tom.wyswietlWynik();
    cout << endl;
    cout << endl;



    Wynik *Mark = new Wynik();
    cout << "STUDNET 2" <<endl;
    Mark->setIndex(2);
    Mark->SetWyniki(3,4,3);
    Mark->SetWynikEgzaminu(3);
    Mark->obliczWynik();
    cout << "Nr indexu: " << Mark->getIndex() << endl;
    cout << "Wynik 1 kolokwium: " << Mark->getWynik1() << endl;
    cout << "Wynik 2 kolokwium: " << Mark->getWynik2() << endl;
    cout << "Wynik 3 kolokwium: " << Mark->getWynik3() << endl;
    cout << "Wynik Egzaminu: " << Mark->GetWynikEgzaminu() << endl;
    Mark->wyswietlWynik();
    cout << endl;
    cout << endl;
    return 0;

    delete Mark;
}