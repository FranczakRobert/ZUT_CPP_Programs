#include <iostream>
using namespace std;

class Ssak
{
    public:
    Ssak() 
    {
        cout << "Jestem konstruktorem bezparametrowym klasy Ssak." << endl;
    }

    Ssak(string output)
    {
        cout << "Jestem konstruktorem parametrowym klasy Ssak."<< endl;
    }
};

class Pies : public Ssak
{
    public:
    Pies() : Ssak("")
    {
        cout << "Jestem konstruktorem bezparametrowym klasy Pies." << endl;
    }
    Pies(string p)
    {
        cout << "Jestem konstruktorem parametrowym klasy Pies." << endl;
    }

};

class Kot : public Ssak
{
    public:
    Kot()
    {
        cout << "Jestem konstruktorem bezparametrowym klasy Kot." << endl;
    }
    Kot(string k) : Ssak("")
    {
        cout << "Jestem konstruktorem parametrowym klasy Kot." << endl;
    }
};

class Husky : public Pies
{
    public:
    Husky() 
    {
        cout << "Jestem konstruktorem bezparametrowym klasy Husky." << endl;
    }
    Husky(string h) : Pies(h)
    {
        cout << "Jestem konstruktorem parametrowym klasy Husky." << endl;
    }
};

int main() 
{
    Pies bezp;
    cout << endl;
    Pies para("");
    Kot bezpKot;
    cout << endl;
    Kot paraKot("");

    cout << endl;
    cout << endl;
    Husky h1;
    Husky h("Jestem konstruktorem parametrowym klasy Husky.");

    return 0;
}
