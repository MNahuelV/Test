#include <iostream>
#include <cassert>

bool EsBis (unsigned);
unsigned CantD (unsigned,unsigned);

int main () {
 assert(CantD(2,2020) == 30);
 assert(CantD(3,2021) == 31);
 assert(CantD(6,2021) == 30);
 assert(CantD(2,2021) == 28);
 assert(CantD(1,1932) == 31);
}

//Se verifica que el año sea bisiesto.
bool EsBis (unsigned A) {return
 A%100 == 0 and A%400 == 0 ? 0:
 1 ;
}

//Se verifica cantidad de dias del Mes
unsigned CantD (unsigned M,unsigned A) {  return 
M==1 or M==3 or M==5 or M==7 or M==8 or M==10 or M==12 ? 31:
M==4 or M==6 or M==9 or M==11 ? 30:
EsBis (A) == 1 ? 28:
29;
}
