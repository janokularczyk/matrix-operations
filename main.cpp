#include <iostream>
using namespace std;

void tworzenieMacierzy3x3(float macierz[3][3]) {
    int temp;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> temp;
            macierz[i][j] = temp;
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
                    cout << "MACIERZ_1:" << endl;
                    drukowanieMacierzy3x3(macierz1);
                    cout << "\nMACIERZ_2:" << endl;
                    drukowanieMacierzy3x3(macierz2);
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