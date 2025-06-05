*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Cocinero (archivo cpp)
* Es una clase donde recopilamos la informacion
* acerca del cocinero, donde podemos ver los platillos
* que ha creado y también el numero del mismo
* Implementamos Herencia de la clase Empleado
*/
//Mandamos a llamar las librerías
using namespace std;
#include <iostream>
#include <string>
#include "Cocinero.h"
//Constructor vació
Cocinero::Cocinero(){

}
//Constructor con parámetros
//Implementamos Herencia.
Cocinero::Cocinero(string _nombre, string _id, string _rol, int _numero_platillos): Empleado(_nombre, _id, _rol){
    numero_platillos = _numero_platillos;
}
//Métodos setters
void Cocinero::setNumero_platillos(int _numero_platillos){
    numero_platillos = _numero_platillos;
}
//Métodos getters
int Cocinero::getNumero_platillos(){
    return numero_platillos;
}
void Cocinero::EmpleadoData(){
    Empleado::EmpleadoData();
    cout << "numero platillos hechos: " << to_string(numero_platillos) << endl;

}
