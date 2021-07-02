/*
Dias del mes
01/07/2021
*/

#include <iostream>
#include <Cassert>

bool bisiesto (unsigned);
unsigned getCantidadDias (unsigned,unsigned);

using namespace std;
 
int main () {
    
    {//Pruebas
    assert(getCantidadDias(3,2021) == 31);
    assert(getCantidadDias(6,2021) == 30);
    assert(getCantidadDias(2,2021) == 28);
    assert(getCantidadDias(1,1932) == 31);
    assert(getCantidadDias(2,1900) == 28);
    assert(getCantidadDias(2,2000) == 29);
    }

    unsigned solicitarMes();
    unsigned solicitarYear();

    unsigned mes = solicitarMes();
    unsigned year = mes == 2? solicitarYear(): 2021;

    void validar(unsigned mes, unsigned year);


    validar(mes,year);
    
};

unsigned solicitarMes(){
    cout << "Ingrese un mes:\n";
    unsigned mes;
    cin >> mes;
    return mes;
}

unsigned solicitarYear(){
    cout << "Ingrese un anio:\n";
    unsigned year;
    cin >> year;
    return year;
}

void validar(unsigned mes, unsigned year){
    mes<1 or mes>12 ? 
    cout << mes << " no es un mes valido.":
    year < 1583 or year > 3000 ? 
    cout << year << " no es un anio valido.":
    cout << "La cantidad de dias es:" << getCantidadDias(mes,year);
}

unsigned getCantidadDias (unsigned mes, unsigned year){ return
    mes == 1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12 ? 31:
    mes == 4 or mes==6 or mes==9 or mes==11 ? 30 :
    bisiesto (year) ? 29 : 
    28;
};

bool bisiesto (unsigned year)  {return 
     (year%4 == 0 and year%100 !=0) or (year%100 == 0 and year%400 == 0 );
};

    /*Otro tipo de getCantidadDias
    unsigned getCantidadDias (unsigned mes, unsigned year){ return
    mes == 4 or mes==6 or mes==9 or mes==11 ? 30 :
    mes == 2 and bisiesto (year) ? 29 : 
    mes == 2 and not bisiesto (year) ? 28 :
    31;
};
*/