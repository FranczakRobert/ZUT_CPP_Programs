// // https://cpp0x.pl/kursy/Kurs-C++/Dodatkowe-materialy/Konstruktor-destruktor-i-konstruktor-kopiujacy-klasy/313

// // class NazwaTwojejKlasy
// // {
// // public:
// //     NazwaTwojejKlasy(); //To jest definicja konstruktora
// // };

// // NazwaTwojejKlasy::NazwaTwojejKlasy()
// // {
// //     //Tu inicjujemy wartości zmiennych klasy
// // }

// #include <iostream>
// using namespace std;
// class JakasKlasa
// {
// public:
//     int a;
//     char b;
//     std::string c;
//     JakasKlasa();
// };

// JakasKlasa::JakasKlasa()
// {
//     cout << "Klasa utworzona, wartosci zmiennych: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = '" << b << "'" << endl;
//     cout << "c = \"" << c << "\"" << endl;
//     a = 123;
//     b = 'x';
//     c = "napis";
//     cout << "Wartosci zmiennych po zainicjowaniu w konstruktorze: " << endl;
//     cout << "a = " << a << endl;
//     cout << "b = '" << b << "'" << endl;
//     cout << "c = \"" << c << "\"" << endl;
// }

// int main()
// {
//     JakasKlasa tZmienna;
//     cout << "a = " << tZmienna.a << endl;
//     tZmienna.a = 3;
//     cout << "a = " << tZmienna.a << endl; 
//     return( 0 );
// }