#include <iostream>
#include <math.h>
using namespace std;

class Wieloscian
{
    protected:
    float dlugoscPodstawy;
    float szerokoscPodstawy;
    float wysokosc;

    public:
    void setDlugosc(int dlugosc)
    {
        dlugoscPodstawy = dlugosc;
    }

    void setSzerokosc(int szerokosc)
    {
        szerokoscPodstawy = szerokosc;
    }

    void setWys(int wys)
    {
        wysokosc = wys;
    }

    float getDlugosc()
    {
        return dlugoscPodstawy;
    }

    float getSzerokosc()
    {
        return szerokoscPodstawy;
    }

    float getWysokosc()
    {
        return wysokosc;
    }

};

class Prostopadloscian : public Wieloscian
{
    public:
    float Objetosc()
    {
        return getDlugosc() * getSzerokosc() * getWysokosc();
    }

    float Pole()
    {
       return 2* (( getDlugosc() * getSzerokosc()) + (getDlugosc() * getWysokosc()) + (getSzerokosc() * getWysokosc() ));
    }
};

class Ostroslup : public Wieloscian
{
    public:
    float objetosc()
    {
        return ((getSzerokosc() * getDlugosc() * getWysokosc())/3);
    }

    float pole()
    {
        float wysokoscScianyBocznej = sqrt((getWysokosc() * getWysokosc()) + ((getDlugosc()*getDlugosc()/4)));
        float Pp = getDlugosc() * getSzerokosc();
        float Pb = 2 * (getDlugosc() * wysokoscScianyBocznej);
        float Pc = Pp + Pb;

        return Pc;
    }

};

int main() 
{
    Prostopadloscian x;
    x.setDlugosc(3);
    x.setSzerokosc(4);
    x.setWys(5);
    cout << "PROSTOPADŁOŚCIAN" << endl;
    cout << "Objętość: ";
    cout << x.Objetosc()  << "cm"<< endl;
    cout << "Pole: ";
    cout << x.Pole() << "cm^3"<< endl;
    cout << endl;

    Ostroslup z;
    z.setDlugosc(3);
    z.setSzerokosc(4);
    z.setWys(5);
    cout << "OSTROSŁUP" << endl;
    cout << "Objętość: ";
    cout << z.objetosc()  << "cm"<< endl;
    cout << "Pole: ";
    cout << z.pole() << "cm^3"<< endl;
    cout << endl;


    Prostopadloscian *dx = new Prostopadloscian();
    dx->setDlugosc(3);
    dx->setSzerokosc(4);
    dx->setWys(5);
    cout << "PROSTOPADŁOŚCIAN DYNAMICZNIE" << endl;
    cout << "Objętość: ";
    cout << dx->Objetosc()  << "cm"<< endl;
    cout << "Pole: ";
    cout << dx->Pole() << "cm^3"<< endl;
    cout << endl;

    Ostroslup *dz = new Ostroslup();
    dz->setDlugosc(3);
    dz->setSzerokosc(4);
    dz->setWys(5);
    cout << "OSTROSŁUP DYNAMICZNIE" << endl;
    cout << "Objętość: ";
    cout << dz->objetosc()  << "cm"<< endl;
    cout << "Pole: ";
    cout << dz->pole() << "cm^3"<< endl;
    cout << endl;

    delete dx;
    delete dz;
 
    return 0;
}
