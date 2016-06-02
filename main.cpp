#include <QCoreApplication>
#include <iostream>
#include "funktionen.h"

using namespace std; //unqualifizierte Namen können im Namensbereich std liegen (z.B. cout)


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Einfache Ausgabe - endl setzt eine neue Zeile und löscht den Buffer
    cout << "\"Hallo Welt!\"" << endl;

    // Typenumwandlung in C++
    int c = 7;
    double b = 1.25;
    double resultat = static_cast<double>(c) + b;
    cout << "Resultat:" << resultat << endl;

    // if-Schleife
    bool boolean = true;
    if(boolean == true){
        cout << "True" << endl;
    }else if(boolean == false){
        cout << "False" << endl;
    }else{
        cout << "Kacke" << endl;
    }

    // Switch Case
    switch(c){
        case 3:
            cout << "Drei" << endl;
            break;

        case 5:
            cout << "Fünf" << endl;
            break;

        case true: // True ist immer, wenn der Wert nicht 0 ist
            cout << "Hää?" << endl;
            break;

        default:
            cout << "Default Case!" << endl;
            break;
    }

    // While-Schleife - Schleifen können auch mit "break" verlassen werden - mit "continue" werden einzelne Schritte übersprungen
    int i = 0;
    while(i <= 9){
        cout << i << endl;
        i++;
    }

    // For-Schleife
    for(i; i >= 0; i--){
        cout << i << endl;
    }

    //Funktion aufrufen
    cout << zahl(98) << endl;

    return a.exec();
}
