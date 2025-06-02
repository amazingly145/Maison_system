/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Cliente (archivo cpp)
* Es una clase donde se recopila la información
* del cliente, como su nombre, numero de personas 
* que la acompañan y la forma de pago.
*/
//Mandamos a llamar las librerias
using namespace std;
#include <iostream>
#include <string>
#include "Cliente.h"
//Definimos la clase cliente
//Constructores 
Cliente::Cliente(){

}
Cliente::Cliente(string _cliente, int _num_personas, string _forma_pago){
    cliente = _cliente;
    num_personas = _num_personas;
    forma_pago = _forma_pago;
}
//Metodos setters
void Cliente::setCliente(string _cliente){
    cliente = _cliente;
}
void Cliente::setForma_pago(string _forma_pago){
    forma_pago = _forma_pago;
}
void Cliente :: setNum_personas(int _num_personas){
    num_personas = _num_personas;
}
//Metodos getters
string Cliente::getCliente(){
    return cliente;
}
string Cliente::getForma_pago(){
    return forma_pago;
}
int Cliente::getNum_personas(){
    return num_personas;
}
string Cliente::ClienteData(){
    return "Nombre del cliente: " + cliente + 
        ", viene con: " + to_string(num_personas) + 
        " personas, forma de pago: " + forma_pago;
}

