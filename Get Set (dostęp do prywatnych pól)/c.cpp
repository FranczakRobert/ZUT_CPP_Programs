#include <iostream>

using namespace std;

class Pies
{
    private:

    string _imie;
    string _rasa;
    char _plec;
    int _wiek;
    double _waga;
    float _wielkosc;

    public:
    // SETERY
    void SetImie(string imie)
    {
        _imie = imie;
    }

    void SetRasa(string rasa)
    {
        _rasa = rasa;
    }

    void SetPlec(char plec)
    {
        _plec = plec;
    }

    void SetWiek(int wiek)
    {
        _wiek = wiek;
    }

    void SetWaga(double waga)
    {
        _waga = waga;
    }

    void SetWielkosc(float wielkosc)
    {
        _wielkosc = wielkosc;
    }

    // GETERY
    string GetImie()
    {
        return _imie;
    }
    string GetRasa()
    {
        return _rasa;
    }
    char GetPlec()
    {
        return _plec;
    }
    int GetWiek()
    {
        return _wiek;
    }
    double GetWaga()
    {
        return _waga;
    }
    float GetWielkosc()
    {
        return _wielkosc;
    }

    Pies(string imie, string rasa, char plec, int wiek, double waga, float wielkosc)
    {
        SetImie(imie);
        SetRasa(rasa);
        SetPlec(plec);
        SetWiek(wiek);
        SetWaga(waga);
        SetWielkosc(wielkosc);
    }
};

int main()
{
    Pies pies("Edmund", "Owczarek", 'M', 2 , 22.4 , 1.2 );
    cout << "Imię pieska: " << pies.GetImie() << endl;
    cout << "Rasa pieska: " << pies.GetRasa() << endl;
    cout << "Płeć pieska: " << pies.GetPlec() << endl;
    cout << "Wiek pieska: " << pies.GetWiek() << endl;
    cout << "Waga pieska: " << pies.GetWaga() <<  "kg" << endl;
    cout << "Wielkość pieska: " << pies.GetWielkosc()<< "cm" << endl;

    cout << endl;
    pies.SetImie("Jolka");
    pies.SetRasa("Dalmatynczyk");
    pies.SetPlec('K');
    pies.SetWiek(1);
    pies.SetWaga(22);
    pies.SetWielkosc(0.5);
    cout << endl;

    cout << "Imię pieska: " << pies.GetImie() << endl;
    cout << "Rasa pieska: " << pies.GetRasa() << endl;
    cout << "Płeć pieska: " << pies.GetPlec() << endl;
    cout << "Wiek pieska: " << pies.GetWiek() << endl;
    cout << "Waga pieska: " << pies.GetWaga() << "kg" << endl;
    cout << "Wielkość pieska: " << pies.GetWielkosc() << "cm" << endl;
    cout << endl;

    Pies *kundel = new Pies("Janek", "Mops", 'M', 4 , 5 , 0.5);
    cout << "Imię pieska: " << kundel->GetImie() << endl;
    cout << "Rasa pieska: " << kundel->GetRasa() << endl;
    cout << "Płeć pieska: " << kundel->GetPlec() << endl;
    cout << "Wiek pieska: " << kundel->GetWiek() << endl;
    cout << "Waga pieska: " << kundel->GetWaga() << "kg" << endl;
    cout << "Wielkość pieska: " << kundel->GetWielkosc() << "cm" << endl;


    cout << endl;
    kundel->SetImie("Bozena");
    kundel->SetRasa("Owczarek Kaukaski");
    kundel->SetPlec('K');
    kundel->SetWiek(6);
    kundel->SetWaga(45);
    kundel->SetWielkosc(2);
    cout << endl;

    cout << "Imię pieska: " << kundel->GetImie() << endl;
    cout << "Rasa pieska: " << kundel->GetRasa() << endl;
    cout << "Płeć pieska: " << kundel->GetPlec() << endl;
    cout << "Wiek pieska: " << kundel->GetWiek() << endl;
    cout << "Waga pieska: " << kundel->GetWaga() << "kg" << endl;
    cout << "Wielkość pieska: " << kundel->GetWielkosc() << "cm" << endl;


    delete kundel;

    return 0;
}