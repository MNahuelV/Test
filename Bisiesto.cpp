/*
Dias del mes
12/06/2021
*/

#include <iostream>
#include <Cassert>

bool bisiesto (int);
double GetCantidadDias (double,int);
using namespace std;
 
int main () {

    cout << GetCantidadDias(2,2100);
assert(GetCantidadDias(3,2021) == 31);
assert(GetCantidadDias(6,2021) == 30);
assert(GetCantidadDias(2,2021) == 28);
assert(GetCantidadDias(1,1932) == 31);
};


/*
se verifica si el año es bisiesto
*/
bool bisiesto (int A)  {return 
     (A%4 == 0 and A%100 !=0) or (A%100 == 0 and A%400 == 0 );
    };

/*
Se verifica cuantos dias tiene el mes
*/
double GetCantidadDias (double M, int A){ return
    M == 1 or M==3 or M==5 or M==7 or M==8 or M==10 or M==12 ? 31:
    M == 4 or M==6 or M==9 or M==11 ? 30 :
    bisiesto (A) ? 29 : 
    28;

};
