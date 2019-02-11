#include <iostream>
#include <stdio.h>


using namespace std;


void printLine(int length, string str) {
 for(int i = 0; i < length; i++) {
    printf(str.c_str());
 }
}
int main()
{
    string vardas;
    int dydis = 9999;

    printf("Koks jusu vardas: ");
    cin >> vardas;

    while (dydis < 1 || dydis > 10) {
        printf("\n");
        printf("Iveskite remelio dydi (nuo 1 iki 10): ");
        cin >> dydis;
    }

    printf("\n \n");

    string pasisveikinimas = "Sveikas, " + vardas + "!";

    int horLength = (pasisveikinimas.length() + dydis * 2) + 2;
    int vertLength = dydis * 2 + 1;

    printLine(horLength, "*");
    printf("\n");


    for (int i = 0; i < vertLength; i++) {
        if (i == vertLength / 2)
            printf("%*c%s%*c", -dydis-1,'*', pasisveikinimas.c_str(), dydis+1, '*');

        else
            printf("%c%*c", '*', horLength-1, '*');

        printf("\n");
    }

    printLine(horLength, "*");

    cin.get();

    return 0;
}
