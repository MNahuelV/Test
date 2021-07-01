/*
Dias del mes
12/06/2021
*/

#include <iostream>
#include <Cassert>

unsigned bisiesto (unsigned);
unsigned getCantidadDias (unsigned,unsigned);

void validarAnio(unsigned year);
unsigned solicitarAnio();

using namespace std;
 
int main () {

    void testCantDias();
    void testBisiesto();

    void validarMes(unsigned mes);
    

    unsigned solicitarMes();
    

/*assert(GetCantidadDias(3,2021) == 31);
assert(GetCantidadDias(6,2021) == 30);
assert(GetCantidadDias(2,2021) == 28);
assert(GetCantidadDias(1,1932) == 31);*/

    validarMes(
        solicitarMes()
    );

};

unsigned solicitarMes(){
    cout << "Ingrese un mes:\n";
    unsigned mes;
    cin >> mes;
    return mes;
}

unsigned solicitarAnio(){
    cout << "Ingrese un anio:\n";
    unsigned year;
    cin >> year;
    return year;
}

void validarMes(unsigned mes){
    mes<1 or mes>12 ? cout << mes << "no es un mes valido.":
    cout << "La cantidad de dias es:" << getCantidadDias(mes);
}

unsigned bisiesto (unsigned A)  {return 
     (A%4 == 0 and A%100 !=0) or (A%100 == 0 and A%400 == 0 )? 29:
     28;
    };

/*
Se verifica cuantos dias tiene el mes
*/
unsigned getCantidadDias (unsigned M){ return
    M == 1 or M==3 or M==5 or M==7 or M==8 or M==10 or M==12 ? 31:
    M == 4 or M==6 or M==9 or M==11 ? 30 :
    validarAnio(
        solicitarAnio()
    );
    ;
};