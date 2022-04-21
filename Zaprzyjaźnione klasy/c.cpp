#include <iostream>
using namespace std;

class Druga;

class Pierwsza
{ 
    friend class Druga;
    private:
    int wartoscA;

    public:
    Pierwsza() : wartoscA(150) 
    {
    }
    int DodajAiB(Druga & z, Pierwsza k);
};

class Druga
{
    friend class Pierwsza;
    private:
    int wartoscB;

    public:
    Druga()
    {
        wartoscB = 20;
    }

    int DodajAiB(Druga z, Pierwsza & k)
    {
        int wynik = z.wartoscB + k.wartoscA;
    
        return wynik;
    }
};


int Pierwsza::DodajAiB(Druga & z, Pierwsza k)
    {
        int wynik = z.wartoscB + k.wartoscA;
    
        return wynik;
    }


int main()
{
    Pierwsza pierwsza;
    Druga druga;

    cout << pierwsza.DodajAiB(druga, pierwsza) << endl;

    cout << druga.DodajAiB(druga, pierwsza) << endl;
 
    return(0);
}
