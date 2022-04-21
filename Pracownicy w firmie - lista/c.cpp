#include <iostream>

using namespace std;
class Firma;

class Pracownik
{
    private:
    string _imie;
    string _nazwisko;
    string _stanowsko;
    float _zarobki;
    int _przepracowaneDni;
    
    public:
    void SetImie(string imie)
    {
        _imie = imie;
    }
    void SetNazwisko(string nazwisko)
    {
        _nazwisko = nazwisko;
    }
    void SetStanowsko(string stanowsko)
    {
        _stanowsko = stanowsko;
    }
    void SetZarobki(float zarobki)
    {
        _zarobki = zarobki;
    }
    void SetPrzepracowaneDni(int dni)
    {
        _przepracowaneDni = dni;
    }

    string GetImie()
    {
        return _imie;
    }
    string GetNazwisko()
    {
        return _nazwisko;
    }
    string GetStanowsko()
    {
        return _stanowsko;
    }
    float GetZarobki()
    {
        return _zarobki;
    }
    int GetDni()
    {
        return _przepracowaneDni;
    }

    Pracownik(string imie, string nazwisko, string stanowsko, float zarobki, int przepracowaneDni)
    {
        this->SetImie(imie);
        this->SetNazwisko(nazwisko);
        this->SetStanowsko(stanowsko);
        this->SetZarobki(zarobki);
        this->SetPrzepracowaneDni(przepracowaneDni);
    }
};
class Firma
{
    public:
    Pracownik **tab;
    int liczbaPracownikow = 0;
    int numerPracownika = 1;
    Firma()
    {
        tab = new Pracownik* [100];
    }

    void DodajPracownika(Pracownik *obiekt)
    {
        tab[liczbaPracownikow] = obiekt;
        liczbaPracownikow++;
    }

    void Wypisz()
    {
        cout << "SPIS WSZYSTKICH PRACOWNIKÓW: " << endl;
        cout << endl;

        for (int i = 0; i < liczbaPracownikow; i++)
        {
            cout << "Pracownik numer: " << numerPracownika <<endl;
            cout << "Imię: " << tab[i]->GetImie() <<endl;
            cout << "Nazwisko: " <<  tab[i]->GetNazwisko() <<endl;
            cout << "Stanowisko: " << tab[i]->GetStanowsko() <<endl;
            cout << "Zarobiki: " <<  tab[i]->GetZarobki() << " $" <<endl;
            cout << "Przepracowane dni: " <<  tab[i]->GetDni() <<endl;
            cout << endl;
            numerPracownika++;
        }   
    }

    Pracownik* UtworzPracownika(string imie, string nazwisko, string stanowsko, float zarobki, int przepracowaneDni)
    {
        Pracownik *x = new Pracownik(imie,nazwisko,stanowsko,zarobki,przepracowaneDni);
        return x;
        delete x;
    }
};
float ZaGodzine(float zarobki, int dni)
{
    // Przy załozeniu ze pracuje 8h dziennie z weekendami
    float godziny = dni * 8;
    float naGodzine = zarobki / godziny;

    return naGodzine;
}

int main()
{
    Firma firma = Firma ();
    int wybor;
    string imie;
    string nazwisko;
    string stanowsko;
    float zarobki;
    int przepracowaneDni;
    bool flag = true;
    int numer = 0;
    Pracownik *pierwszy = new Pracownik("Tom","Holand","Junior PM", 8000.30,464);

        cout << endl;
        cout << "MENU" <<endl;
        cout << "1. Wypisz pracowników" <<endl;
        cout << "2. Dodaj pracownika" <<endl;
        cout << "3. Wypisz pracownika o numerze identyfikacyjnym" <<endl;
        cout << "4. Wypisz stawkę za godzinę dla pracownika o nazwisku" <<endl;
        cout << "5. Wypisz ilość godzin przepracowanych w miesiącu przez pracownika o nazwisku." <<endl;
        cout << "6. Wyjście z programu" <<endl;
        cout << endl;
    while (flag == true)
    {
        wybor = 0;
        cout << "Wpisz numer zadania, ktore chcesz wykonać: ";
        cin >> wybor;
       switch (wybor)
        {
        case 1:
            firma.Wypisz();
            break;
        case 2:
            cout << "Wprowadź imię: " <<endl;
            cin >> imie;
            cout << "Wprowadź nazwisko: " <<endl;
            cin >> nazwisko;
            cout << "Wprowadź stanowisko: " <<endl;
            cin >> stanowsko;
            cout << "Wprowadź kwotę zarobkow: " <<endl;
            cin >> zarobki;
            cout << "Wprowadź przepracowane dni w miesiącu: " <<endl;
            cin >> przepracowaneDni;
            pierwszy = firma.UtworzPracownika(imie,nazwisko,stanowsko,zarobki,przepracowaneDni);
            firma.DodajPracownika(pierwszy);
            break;

        case 3:
            cout << "Podaj numer identyfikacyjny pracownika: " <<endl;
            cin >> numer;
            cout << "Pracownik o numerze " << numer <<" nazywa się  "<<endl;
            cout << firma.tab[numer - 1]->GetImie();
            break;

        case 4:
            cout << "Wpisz nazwisko pracownika:  " <<endl;
            cin >> nazwisko;
            cout << nazwisko <<" ma  ";
                for (int i = 0; i < firma.liczbaPracownikow; i++)
                {
                    if(nazwisko == firma.tab[i]->GetNazwisko())
                    {
                        cout <<  ZaGodzine(firma.tab[i]->GetZarobki(), firma.tab[i]->GetDni());
                        cout << nazwisko <<" $ na godzinę" <<endl;
                        break;
                    }
                }
                
            break;

        case 5:
            cout << "Wpisz nazwisko pracownika:  " <<endl;
            cin >> nazwisko;
            cout << nazwisko <<" przepracował ";
                for (int i = 0; i < firma.liczbaPracownikow; i++)
                {
                    if(nazwisko == firma.tab[i]->GetNazwisko())
                    {
                        cout << firma.tab[i]->GetDni();
                        cout <<" dni w miesiącu" <<endl;
                        break;
                    }
                }
            break;
        case 6:
            flag = false;
            break;
        }
    }
    return 0;
}