/*
* Proyecto Maison_system clase Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 11 de junio del 2025
* version 2
* Composicion con Empleado
*/

/*
* Clase Restaurante (archivo cpp)
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
//se llama el archivo header de RSestaurante.
#include "Restaurante.h"

//Clase Restaurante
//Constructor que recibe e inicializa los parámetros
//Constructor por default 
Restaurante::Restaurante(){

}
//Constructor para inicializar variables
Restaurante::Restaurante(string _nombre, string _direccion, int _rating){
    nombre = _nombre;
    direccion = _direccion;
    rating = _rating;
}

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

//Metodos Getters
string Restaurante::getNombre(){
    return nombre;
}
int Restaurante::getRating(){
    return rating;
}
string Restaurante::getDireccion(){
    return direccion;
}

/* Recopila todos los datos del restaurante
* regresa un string con las variables del restaurante
*/
string Restaurante :: RestauranteData(){
    return "El restaurante se llama: "+ nombre + "\nSe ubica en: " +
        direccion + "\nTiene un numero de empleados de: " + "5";
}