/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Empleado (archivo cpp)
* Archivo cpp, donde se implementa
* todos lo atributos y metodos
* del archivo header
* este es el archivo cpp.
*/

//Llamar las librerias
#include <iostream>
using namespace std;
#include <string>
#include "Empleado.h"

//Constructor donde se inicializan los valores
Empleado::Empleado(){

}

Empleado :: Empleado(string _nombre, string _id, string _rol, int _numero_empleados){
    nombre = _nombre;
    id = _id;
    rol = _rol;
    numero_empleados = _numero_empleados;
}

//Metodos setteres
void Empleado :: setNombre(string _nombre){
    nombre = _nombre;
}
void Empleado :: setId (string _id){
    id = _id;
}
void Empleado :: setRol(string _rol){
    rol = _rol;
}
void Empleado :: setNumero_empleados(int _numero_empleados){
    numero_empleados = _numero_empleados;
}
//Metodos getters
string Empleado :: getNombre(){
    return nombre;
}
string Empleado :: getId(){
    return id;
}
string Empleado :: getRol(){
    return rol;
}
int Empleado :: getNumero_empleados(){
    return numero_empleados;
}

//Sobreescritura con gerente y mesero
string Empleado :: EmpleadoData(){
    return "Nombre empleado: " + nombre + "Id" + id +
    "Rol" + rol;
}




