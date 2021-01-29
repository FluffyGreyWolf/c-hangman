#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

int main() {
    //Tablica mo¿liwych wyrazów
    string wyraz[5] = {"wilk", "krowa", "mysz", "kubek", "deszcz"};

    //Losowanie wyrazu
    srand(time(NULL));
    int numer = rand() % 5;
    string napis = wyraz[numer];
    string wyraz_startowy = wyraz[numer];

    //Sprawdzanie d³ugoœci wyrazu
    int dlugosc = strlen(napis.c_str());


    //Pusta tablica do wyœwietlania d³ugoœci wyrazu w formie "------"
    char znaki[dlugosc];

    //Wype³nienie tablicy o odpowiedniej d³ugoœci znakiami -
    for( int i = 0; i < dlugosc; i++ ) {
        znaki[i] = '-';
    }

    cout << "Witaj w grze wisielec! Odgadnij ukryte slowo aby wygrac!"<<endl;
    cout << "Twoje ukryte slowo wyglada tak: "<<endl;
    cout << znaki << endl;
    cout << "Uwazaj! Masz tylko 5 zyc!"<<endl;

    char litera;
    int zycia = 5;

//Jeœli gracz ma jeszcze ¿ycia pêtla siê wykonuje
while(zycia > 0) {
    //Wczytanie litery do wyszukania w wyrazie
    cout << endl;
    cout << "Wpisz litere: "<<endl;
    cin >> litera;

    //oldznaki pozwala sprawdziæ czy zosta³y ujawnione nowe litery
    string oldznaki = znaki;

    //Sprawdzenie czy wczytana litera znajduje siê w wyrazie - jeœli tak to wypisanie ukrtytego wyrazu ujawniaj¹c tylko podan¹ literê
    for( int i = 0; i < dlugosc; i++ )
        if( litera == napis[i] )
        {
            swap( znaki[ i ], napis[ i ] );
        }
    //Sprawdzanie czy ujawniono nowe litery
    if(oldznaki == znaki)
    {
        //Jeœli nie zosta³y ujawnione nowe litery gracz traci ¿ycie
        cout<<"Nie ma takiej litery!"<<endl;
        zycia -= 1;
        if(zycia == 0)
        {
            cout << "Nie masz juz zyc!"<<endl;
        }
        else
        {
            cout<< "Masz jeszcze "<<zycia<<" zycia!"<<endl;
        }
    }
    cout << znaki<<endl;

    //Sprawdzenie czy gracz odgad³ wyraz
    if(znaki == wyraz_startowy)
    {
        cout << "Wygrales! Gratulacje!"<<endl;
        break;
    }
    //Wypisanie rysunku wisielca w zale¿noœci od pozosta³ych ¿yæ gracza
    if(zycia == 4)
    {
            cout << "|--------------------------|" << endl;
            cout << "|                          |" << endl;
            cout << "|                          |" << endl;
            cout << "|                          |" << endl;
            cout << "|                          |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|               * *        |" << endl;
            cout << "|--------------------------|" << endl;
    }

    if(zycia == 3)
    {
            cout << "|--------------------------|" << endl;
            cout << "|                          |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|               * *        |" << endl;
            cout << "|--------------------------|" << endl;
    }


    if(zycia == 2)
    {
            cout << "|--------------------------|" << endl;
            cout << "|        *********         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|               * *        |" << endl;
            cout << "|--------------------------|" << endl;
    }

    if(zycia == 1)
    {
            cout << "|--------------------------|" << endl;
            cout << "|        *********         |" << endl;
            cout << "|        *       *         |" << endl;
            cout << "|        O       *         |" << endl;
            cout << "|       ***      *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|                *         |" << endl;
            cout << "|               * *        |" << endl;
            cout << "|--------------------------|" << endl;
    }

    if(zycia == 0)
    {
            cout << "|--------------------------|" << endl;
            cout << "|        *********         |" << endl;
            cout << "|        *       *         |" << endl;
            cout << "|        0       *         |" << endl;
            cout << "|       ***      *         |" << endl;
            cout << "|        *       *         |" << endl;
            cout << "|       * *      *         |" << endl;
            cout << "|               * *        |" << endl;
            cout << "|--------------------------|" << endl;

            cout << "Koniec gry! Przegrales!"<<endl;
}
}
}
