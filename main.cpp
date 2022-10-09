#include <iostream>
#include <gconio.h>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include "regras.h"
using namespace std;

int main()
{
    /*primeiro vetor de animais = tartaruga, segundo vetor = lebre*/
    int *relogio,lebre=0,tartaruga=0,i=0, le, ta;
    setlocale (LC_ALL, "portuguese");
    srand (time(0));
    animais anim[50];
    relogio = new(int);
    *relogio = 70;
    Mensagem();
    for (int x=0; x<70; x++){

        cout << "\n\ntempo:";
        cout << "" << *relogio << "\n\n";
        fflush(stdin);
        *relogio = *relogio - 1;
        lebre = rand()%10;
        tartaruga = rand()%10;

         textcolor(YELLOW);
         fflush(stdin);
         le = regrasLebre(anim,tartaruga,i);
         textcolor(WHITE);
         textcolor(GREEN);
         fflush(stdin);
         ta = regrasTartaruga(anim,tartaruga,i);
         textcolor(WHITE);
            if (le == ta){
                textcolor(RED);
                cout << "\nAIII!";
                textcolor(WHITE);
            }
    }

    cout << "\n";
    for (int x=0; x<le; x++){

        cout << "L";
    }
    cout << "\n";
    for (int x=0; x<ta; x++){

        cout << "T";
    }
    Empate(anim,le,ta,i);
delete relogio;
relogio = NULL;
}
