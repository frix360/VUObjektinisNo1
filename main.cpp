#include <iostream>
#include <string>
using namespace std;

int main()
{

    string vardas;

    cout << "Iveskite varda: " << endl;

    cin >> vardas;

    cout << endl;


    auto galune = vardas.back();


    string pasisveikinimas = (galune == 's' ? "Sveikas, " : "Sveika, ") + vardas + "!";

    int lineLength = pasisveikinimas.length() + 4;

    string eil1;
    string eil2;
    string eil3;
    string eil4;
    string eil5;

    for (int i = 0; i < lineLength; i++) {
        eil1 += "*";
    }

    eil2 += "*";
    for (int i = 0; i < lineLength-2; i++) {
        eil2 += " ";
    }
    eil2 += "*";

    eil3 = "* " + pasisveikinimas + " *";


    eil4 = eil2;
    eil5 = eil1;

    cout << eil1 << endl << eil2 << endl << eil3 << endl << eil4 << endl << eil5;

    return 0;
}
