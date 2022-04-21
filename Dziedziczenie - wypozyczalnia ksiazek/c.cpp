#include <iostream>

using namespace std;

class Osoba {

    string imie, nazwisko;
    int wiek;
    public:
    Osoba()
    {
        imie = " ";
        nazwisko = " ";
        wiek = 0;
    }
    void setImie(string value)
    {
        imie = value;
    }
    void setNazwisko(string value)
    {
        nazwisko = value;
    }
    void setWiek(int value)
    {
        wiek = value;
    }
    
    void wypisz()
    {
        cout << "Imię: " << imie <<endl;
        cout << "Nazwisko: " << nazwisko <<endl;
        cout << "Wiek: " << wiek <<endl;
    }
};

class Ksiazka {
    string tytul,gatunek;
    int dataWydania;
    double cena;
    bool wypozyczona;

    public:
    Ksiazka()
    {
        wypozyczona = false;
    }

    Osoba autor;
    void setTytul(string value)
    {
        tytul = value;
    }
    void setGatunek(string value)
    {
        gatunek = value;
    }
    void setDataWydania(int value)
    {
        dataWydania = value;
    }
    void setCena(float value)
    {
        cena = value;
    }

    bool wypo()
    {
        return wypozyczona;
    }

    void setWypo(bool value)
    {
        wypozyczona = value;
    }

    void wypisz()
    {
        cout << endl;
        autor.wypisz();
        cout << "Tytuł: " << tytul <<endl;
        cout << "Gatunek: " << gatunek <<endl;
        cout << "DataWydania: " << dataWydania <<endl;
        cout << "Cena: " << cena <<endl;
        cout << endl;
    }
};

class Czytelnik : public Osoba{
    int dodaneKsiazki;
    bool zaDuzo;
    bool wyp;
    Ksiazka **tablica;

    public:
    Czytelnik()
    {
        zaDuzo = false;
        wyp = false;
        dodaneKsiazki = 0;
        tablica = new Ksiazka*[3];
    }

    void DodajKsiazke(Ksiazka *ksiazka)
    {
        if(dodaneKsiazki < 3)
        {   
            if(ksiazka->wypo() == true)
            {
                wyp = true;
            }

            if(ksiazka->wypo() == false)
            {
                tablica[dodaneKsiazki] = ksiazka;
                ksiazka->setWypo(true);
                dodaneKsiazki++;
            }
        }
        else
        {
            zaDuzo = true;
        }
    }

    void checkWypo()
    {
        if(wyp == true)
        {
            
            cout <<"Ksiązka jest juz wyporzyczona przez innego uzytkowanika" << endl;
        }
    }

    void wypiszKsiazki()
    {
        if(zaDuzo == true)
            cout << "CZYTELNIK WYPOYCZYŁ JUZ 3 KSIĄZKI" << endl;
        for (int i = 0; i < dodaneKsiazki; i++)
        {
            tablica[i]->wypisz();
        }
    }
};

int main(void) 
{
    
    Ksiazka *jeden = new Ksiazka();
    jeden->setTytul("Ksiazka 1");
    jeden->setDataWydania(1902);
    jeden->setGatunek("Epicka");
    jeden->setCena(30.00);
    jeden->autor.setImie("Bolesław");
    jeden->autor.setNazwisko("Prus");
    jeden->autor.setWiek(45);

    Ksiazka *dwa = new Ksiazka();
    dwa->setTytul("Ksiazka 2");
    dwa->setDataWydania(1997);
    dwa->setGatunek("Przygodowy");
    dwa->setCena(49.79);
    dwa->autor.setImie("Henryk");
    dwa->autor.setNazwisko("Sienkiewicz");
    dwa->autor.setWiek(55);

    Ksiazka *trzy = new Ksiazka();
    trzy->setTytul("Ksiazka 3");
    trzy->setDataWydania(1997);
    trzy->setGatunek("Fantazy");
    trzy->setCena(49.79);
    trzy->autor.setImie("J.K");
    trzy->autor.setNazwisko("Rowling");
    trzy->autor.setWiek(55);

    Ksiazka *cztery = new Ksiazka();
    cztery->setTytul("Ksiazka 4");
    cztery->setDataWydania(1997);
    cztery->setGatunek("Fantazy");
    cztery->setCena(49.79);
    cztery->autor.setImie("Jrr");
    cztery->autor.setNazwisko("Tolkien");
    cztery->autor.setWiek(55);

    Ksiazka *piec = new Ksiazka();
    piec->setTytul("Ksiazka 5");
    piec->setDataWydania(1963);
    piec->setGatunek("Antyutopia");
    piec->setCena(23.79);
    piec->autor.setImie("Gorge");
    piec->autor.setNazwisko("Orwell");
    piec->autor.setWiek(55);

    Ksiazka *szesc = new Ksiazka();
    szesc->setTytul("Ksiazka 6");
    szesc->setDataWydania(2004);
    szesc->setGatunek("Antyutopia");
    szesc->setCena(12.33);
    szesc->autor.setImie("Adam");
    szesc->autor.setNazwisko("Pack");
    szesc->autor.setWiek(23);

    Ksiazka *siedem = new Ksiazka();
    siedem->setTytul("Ksiazka 7");
    siedem->setDataWydania(2003);
    siedem->setGatunek("Dramat");
    siedem->setCena(100.79);
    siedem->autor.setImie("Mark");
    siedem->autor.setNazwisko("Zerk");
    siedem->autor.setWiek(46);

    Ksiazka *osiem = new Ksiazka();
    osiem->setTytul("Ksiazka 8");
    osiem->setDataWydania(1936);
    osiem->setGatunek("Horror");
    osiem->setCena(99.79);
    osiem->autor.setImie("Pal");
    osiem->autor.setNazwisko("Sek");
    osiem->autor.setWiek(63);

    Ksiazka *dziewiec = new Ksiazka();
    dziewiec->setTytul("Ksiazka 9");
    dziewiec->setDataWydania(1932);
    dziewiec->setGatunek("Dramt");
    dziewiec->setCena(29.22);
    dziewiec->autor.setImie("Mark");
    dziewiec->autor.setNazwisko("Markowicz");
    dziewiec->autor.setWiek(42);

    Ksiazka *dziesiec = new Ksiazka();
    dziesiec->setTytul("Ksiazka 10");
    dziesiec->setDataWydania(1923);
    dziesiec->setGatunek("Dramat");
    dziesiec->setCena(32.44);
    dziesiec->autor.setImie("Jan");
    dziesiec->autor.setNazwisko("Jack");
    dziesiec->autor.setWiek(44);

    Ksiazka *jedenascie = new Ksiazka();
    jedenascie->setTytul("Ksiazka 11");
    jedenascie->setDataWydania(2013);
    jedenascie->setGatunek("SCI");
    jedenascie->setCena(43.22);
    jedenascie->autor.setImie("Jack");
    jedenascie->autor.setNazwisko("Sparrow");
    jedenascie->autor.setWiek(91);

    Ksiazka *dwanascie = new Ksiazka();
    dwanascie->setTytul("Ksiazka 12");
    dwanascie->setDataWydania(2019);
    dwanascie->setGatunek("Podroznicza");
    dwanascie->setCena(232.11);
    dwanascie->autor.setImie("Adam");
    dwanascie->autor.setNazwisko("Mickiewicz");
    dwanascie->autor.setWiek(19);


    Czytelnik *czytelnik1 = new Czytelnik();
    czytelnik1->DodajKsiazke(jeden);
    czytelnik1->DodajKsiazke(dwa);
    czytelnik1->DodajKsiazke(trzy);
    czytelnik1->DodajKsiazke(dwanascie); // test wypozyczenia 4 ksiazki.

    Czytelnik *czytelnik2 = new Czytelnik();
    // Wypozyczenie 3 ksiazek ale jedna juz jest wypozyczona
    czytelnik2->DodajKsiazke(cztery);
    czytelnik2->DodajKsiazke(jeden);
    czytelnik2->DodajKsiazke(szesc); 

    Czytelnik *czytelnik3 = new Czytelnik();
    // test wypozyczenia 4 ksiazki ale czytelnik probowal wypozyczyc wczesniej ksiazke ktora juz jest wypozyczona.
    czytelnik3->DodajKsiazke(siedem);
    czytelnik3->DodajKsiazke(cztery);
    czytelnik3->DodajKsiazke(dziewiec);
    czytelnik3->DodajKsiazke(dziesiec); 
    

    cout << "Ksiązki wypozyczone przez PIERWSZEGO czytelnika" << endl;
    czytelnik1->wypiszKsiazki();
    czytelnik1->checkWypo();
    
    cout << endl;
    cout << endl;

    cout << "Ksiązki wypozyczone przez DRUGIEGO czytelnika" << endl;
    czytelnik2->wypiszKsiazki();
    czytelnik2->checkWypo();

    cout << endl;
    cout << endl;

    cout << "Ksiązki wypozyczone przez TRZECIEGO czytelnika" << endl;
    czytelnik3->wypiszKsiazki();
    czytelnik3->checkWypo();


    delete jeden;
    delete dwa;
    delete trzy;
    delete cztery;
    delete piec;
    delete szesc;
    delete siedem;
    delete osiem;
    delete dziewiec;
    delete dziesiec;
    delete jedenascie;
    delete dwanascie;

    delete czytelnik1;
    delete czytelnik2;
    delete czytelnik3;

    return 0;
}