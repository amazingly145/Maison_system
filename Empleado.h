/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Empleado (archivo header)
* Es una clase donde se recopila
* la informacion general del Empleado 
* como: nombre, id, rol.
* este es el archivo header.
*/

//Llamar las librerias
#include <iostream>
using namespace std;
#include <string>
#ifndef EMPLEADO_H
#define EMPLEADO_H

//Clase Empleado
class Empleado{
    protected:
        string nombre;
        string id;
        string rol;
        int numero_empleados;
    public:
        //Constructor
        Empleado();
        Empleado(string, string, string);
        Empleado(string, string, string, int);
        //Metodos setters
        void setNombre(string);
        void setId(string);
        void setRol(string);
        void setNumero_empleados(int);
        //Metodos getters
        string getNombre();
        string getId();
        string getRol();
        string getNumero_empleados();
        /*Sobrescritura con Empleado y Cocinero
        * se pone la funcion virtual
        * para hacer polimorfismo
        */
       //Clase abstracta
        virtual void EmpleadoData() = 0;
};
#endif