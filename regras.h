#include <iostream>
#include <gconio.h>
using namespace std;
struct animais{
int lee[69];
int taa[69];
int t=1;
int l=1;
};

void Mensagem(){
cout << "BANG!!!!";
cout << "\nE LA VÃO ELES!!!!";

}
int regrasLebre(animais regras[],int lebre, int i){
/*lebre*/
if (lebre >= 1 && lebre <= 2){
    /*Dorme*/
    cout << "\nLebre está dormindo";
}
if (lebre >= 3 && lebre <= 4){
    /*Dá um salto grande*/
    cout << "\nLebre Dá um salto grande";
    regras[i].lee[regras[i].l] += 12;
}
if (lebre == 5){
    /* escorrega bastante*/
    cout << "\nLebre Escorrega bastante";
    if (regras[i].lee[regras[i].l] <= 0){
        regras[i].lee[regras[i].l] -= 1;
    }
    else{
        regras[i].lee[regras[i].l]-= 12;
    }

}
if (lebre >= 6 && lebre <= 8){
      /*Dá um salto pequeno*/
      cout << "\nLebre Dá um salto pequeno";
    regras[i].lee[regras[i].l] += 1;
}
if (lebre >= 9 && lebre <= 10){
    /*Escorrega um pouco*/
    cout << "\nLebre escorrega um pouco";
     if (regras[i].lee[regras[i].l] <= 0){
        regras[i].lee[regras[i].l] = 1;
    }
    else{
        regras[i].lee[regras[i].l] -= 1;
    }
}

return regras[i].lee[regras[i].l];
}

int regrasTartaruga(animais regras[],int tartaruga, int i){
    /*tartaruga*/
if (tartaruga >= 1 && tartaruga <= 5){
    cout << "\nTartaruga caminha rapidamente!";
    regras[i].taa[regras[i].t]+= 3;

}
if (tartaruga >= 6 && tartaruga <= 7){
    /*Escorrega*/
    cout << "\nTartaruga escorrega!";
    if (regras[i].taa[regras[i].t] <= 0){
        regras[i].taa[regras[i].t]= 1;
    }
    else{
        regras[i].taa[regras[i].t ] -= 6;
    }
}
if (tartaruga >= 8 && tartaruga <= 10){
    /*caminha lentamente*/
    cout << "\nTartaruga caminha lentamente..";
    regras[i].taa[regras[i].t ]+= 1;
}

return regras[i].taa[regras[i].t];
}

void Empate(animais regras[],int le, int ta,int i){
le = regras[i].lee[regras[i].l];
ta = regras[i].taa[regras[i].t];
if(le >= ta){
        textcolor(GREEN);
        cout << "\nLEBRE VENCEU!!! MARMELADA!!!\n";
        textcolor(WHITE);
    }
    else if (ta > le || ta == le){
        textcolor(YELLOW);
        cout << "\nTARTARUGA VENCEU!!! E ISSO AÍÍ!!!\n";
        textcolor(WHITE);
    }


}
