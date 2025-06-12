/*
 * Proyecto Maison_system clase Cliente
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 2
 * Composicion con mesero
*/

/*
 * Clase Cliente (archivo cpp)
 * Es una clase donde se recopila la informacion
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
Cliente::Cliente() {
    nombre_cliente = "";
    num_personas = 0;
    forma_pago = "";
}
Cliente::Cliente(string _nombre_cliente, int _num_personas, string _forma_pago){
    nombre_cliente = _nombre_cliente;
    num_personas = _num_personas;
    forma_pago = _forma_pago;
}
//Metodos setters
void Cliente::setCliente(string _cliente){
    nombre_cliente = _cliente;
}
void Cliente::setForma_pago(string _forma_pago){
    forma_pago = _forma_pago;
}
void Cliente :: setNum_personas(int _num_personas){
    num_personas = _num_personas;
}
//Metodos getters
string Cliente::getCliente(){
    return nombre_cliente;
}
string Cliente::getForma_pago(){
    return forma_pago;
}
int Cliente::getNum_personas(){
    return num_personas;
}
/*Obtenemos la informacion del cliente
 * regresa su nombre las personas con las que esta
 * y la forma de pago
*/
string Cliente::ClienteData( ) {
    return "Nombre del cliente: " + nombre_cliente + 
        ", viene con: " + to_string(num_personas) + 
        " personas, forma de pago: " + forma_pago;
}
/*Obtenemos la informacion del cliente
 * se imprim su nombre las personas con las que esta
 * y la forma de pago
*/
void Cliente::ClienteData2(string _nombre_cliente, int _num_personas, string _forma_pago){
    cout << "Nombre del cliente: " + _nombre_cliente + 
        "\n" +  "En la mesa hay: " + to_string(_num_personas) + 
        "\nForma de pago: " + _forma_pago + "\n";
}
