#include <iostream>
using namespace std;

void wyswietlMenu() {
    cout << "\n1. Pokaz obie macierze" << endl;
    cout << "2. Dodaj obie macierze" << endl;
    cout << "3. Pomnoz macierze" << endl;
    cout << "4. Pomnoz macierze przez wektor" << endl;
    cout << "5. Wprowadz macierze" << endl;
    cout << "0. Wyjdz\n" << endl;
}

void tworzenieMacierzy3x3(float macierz[3][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> macierz[i][j];
        }
    }
}

void drukowanieMacierzy3x3(float macierz[3][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }
}

void dodawanieMacierzy(float a[3][3], float b[3][3]) {

}

void mnozenieMacierzy(float a[3][3], float b[3][3]) {

}

void mnozenieMacierzyPrzezWektor() {

}

int main() {

    bool flaga = true;
    while(flaga) {

        float macierz1[3][3];
        float macierz2[3][3];

        cout << "Wprowadź wyrazy macierzy 1:\n";
        tworzenieMacierzy3x3(macierz1);

        cout << "Wprowadź wyrazy macierzy 2:\n";
        tworzenieMacierzy3x3(macierz2);

        bool flagaOperacji = true;
        while(flagaOperacji) {

            wyswietlMenu();

            int wyborOperacji;
            cin >> wyborOperacji;

            switch(wyborOperacji) {
                case 1: 
                    cout << "MACIERZ_1:" << endl;
                    drukowanieMacierzy3x3(macierz1);
                    cout << "\nMACIERZ_2:" << endl;
                    drukowanieMacierzy3x3(macierz2);
                    break;
                case 2:
                    cout << "WYNIK:" << endl;
                    dodawanieMacierzy(macierz1, macierz2);
                    break;
                case 3:
                    cout << "WYNIK:" << endl;
                    mnozenieMacierzy(macierz1, macierz2);
                    break;
                case 4:
                    cout << "WYNIK MACIERZ_1:" << endl;
                    mnozenieMacierzyPrzezWektor();
                    cout << "WYNIK MACIERZ_2:" << endl;
                    mnozenieMacierzyPrzezWektor();
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