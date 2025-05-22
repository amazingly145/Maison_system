/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Mesero (archivo cpp)
* Es una clase donde recopilamos la informacion
* acerca del mesero, donde podemos las mesas atendidas
* numero de mesa que atiende, y la decision de 
* ayudar al empleado.
*/
//Mandamos a llamar las librerías
using namespace std;
#include <iostream>
#include <string>
#include "Mesero.h"

Mesero :: Mesero (string _nombre, string _id, string _rol, int _numero_mesa, Cliente _cliente, string _atender) : Empleado(_nombre, _id, _rol){
    numero_mesa = _numero_mesa;
    cliente = _cliente;
    atender = _atender;
}

void Mesero :: setNumero_mesa(int _numero_mesa){
    numero_mesa = _numero_mesa;
}
void Mesero :: setAtender(string _atender){
    atender = _atender;
}
int Mesero :: getNumero_mesa(){
    return numero_mesa;
}

string Mesero :: getAtender(){
    return atender;
}

bool Mesero :: atender_cliente(string _atender){
    if (_atender == "true"){
        return "Si esta trabajando";
    }else{
        return "No esta trabajando";
    }
}