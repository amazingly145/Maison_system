/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Restaurante (archivo header)
* Es una clase donde recopilamos la información
* importante de un restaurante como su:
* direccion, nombre, numero de empleados y el rating que le dan.
* Este es el archivo cpp.
* Se aplica lo que tenemos en el archivo header
* Aplicamos metoodos y atributos
*/

//Se mandan a llamar las librerias
#include <iostream>
using namespace std;
#include <string>
// se llama el archivo header de Hestaurante.
#include "Restaurante.h"

//Clase Restaurante
//Constructor que recibe e inicializa los parámetros
Restaurante::Restaurante(){

}
Restaurante::Restaurante(string _nombre, string _direccion/*, Empleado*_num_empleados*/, int _rating){
    nombre = _nombre;
    direccion = _direccion;
    //num_empleados = _num_empleados;
    rating = _rating;
}
/*Restaurante::Restaurante(string _nombre, string _direccion, int _rating){
    nombre = _nombre;
    direccion = _direccion;
    rating = _rating;
}*/
//Metodos setters
void Restaurante::setNombre(string _nombre){
    nombre = _nombre;
}
void Restaurante::setDireccion(string _direccion){
    direccion = _direccion;
}
void Restaurante::setRating(int _rating){
    rating = _rating;
}
/*void Restaurante::setNumEmpleados(Empleado* _empleado) {
    num_empleados = _empleado;
}*/
//Metodos Getters
int Restaurante::getRating(){
    return rating;
}
string Restaurante::getDireccion(){
    return direccion;
}

//Recopila todos los datos del restaurante
string Restaurante :: RestauranteData(){
    return "El restaurante se llama: "+ nombre + "\nSe ubica en: " +
        direccion + "\nTiene un numero de empleados de: " + "5" /*+ num_empleados->getNumero_empleados()*/;
}