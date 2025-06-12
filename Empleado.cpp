/*
 * Proyecto Maison_system clase Empleado
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 2
 * Composicion con Empleado
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
//Constructorpor default
Empleado::Empleado(){

}
//Constructor donde se inicializan los valores
Empleado::Empleado(string _nombre, string _id, string _rol){
    nombre = _nombre;
    id = _id;
    rol = _rol;
}
//Constructor de sobre carga
Empleado :: Empleado(string _nombre, string _id, string _rol, 
    int _numero_empleados){
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
string Empleado :: getNumero_empleados(){
    return to_string(numero_empleados);
}

/* Metodo para obtener informacion del empleado
 * Se va a crear sobrescritura con sus clases hijas
 * se imprimen los datos del empleado
 */
void Empleado::EmpleadoData(){
    cout << "Nombre del empleado: "+ nombre + "\nId: " + 
    id + "\nRol:"+ rol << endl;
}