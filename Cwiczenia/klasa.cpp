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
// class Czlowiek
// {
//     public:
//     string imie;
//     int wiek;

//     void przedstawSie()
//     {
//         cout << "Nazywam się " << imie << " i mam " << wiek << " lat" <<endl;
//     }
// };

// int main()
// {
//     Czlowiek czlowiek1;
//     czlowiek1.imie = "Robert";
//     czlowiek1.wiek = 24;
//     czlowiek1.przedstawSie();

//     return( 0 );
// }