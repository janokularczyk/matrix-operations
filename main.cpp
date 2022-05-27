#include <iostream>
using namespace std;

int main() {

    bool flaga = true;
    while(flaga) {
        int liczbaKolumn1 = 0;
        int liczbaWierszy1 = 0;
        int liczbaKolumn2 = 0;
        int liczbaWierszy2 = 0;

        cout << "\nWprowadz liczbe kolumn 1 macierzy: " << endl;
        cin >> liczbaKolumn1;
        cout << "Wporwadz liczbe wierszy 1 macierzy: " << endl;
        cin >> liczbaWierszy1;

        cout << "\nWprowadz liczbe kolumn 2 macierzy: " << endl;
        cin >> liczbaKolumn2;
        cout << "Wporwadz liczbe wierszy 2 macierzy: " << endl;
        cin >> liczbaWierszy2;

        bool flagaOperacji = true;
        while(flagaOperacji) {
            cout << "\n1. Pokaz obie macierze" << endl;
            cout << "2. Dodaj obie macierze" << endl;
            cout << "3. Pomnoz macierze" << endl;
            cout << "4. Pomnoz macierze przez wektor" << endl;
            cout << "5. Wprowadz macierze" << endl;
            cout << "0. Wyjdz\n" << endl;

            int wyborOperacji;
            cin >> wyborOperacji;

            switch(wyborOperacji) {
                case 1: 
                    cout << "drukowanie..." << endl;
                    break;
                case 2:
                    cout << "dodawanie..." << endl;
                    break;
                case 3:
                    cout << "mnozenie..." << endl;
                    break;
                case 4:
                    cout << "mnozenie przez wektor..." << endl;
                    break;
                case 5:
                    flagaOperacji = false;
                    break;
                case 0:
                    cout << "do zobacznia" << endl;
                    flagaOperacji = false;
                    flaga = false;
                    break;
                default: 
                    cout << "operacja niewspierana" << endl;
                    break;
            }  
        }
    }

    return 0;
}