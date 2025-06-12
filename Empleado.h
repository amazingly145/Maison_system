/*
 * Proyecto Maison_system clase Empleado
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 1
 * Composicion con Restaurante
 * Herencia con Cocinero y mesero
 * Clase abstracta 
*/

/*
 * Clase Empleado (archivo header)
 * Clase abstracta
 * Herencia con Cocinero y Mesero
 * Es una clase donde se recopila
 * la informacion general del Empleado 
 * como: nombre, id, rol y numero de empleados.
*/

//Llamar las librerias
#include <iostream>
using namespace std;
#include <string>
#ifndef EMPLEADO_H
#define EMPLEADO_H

//declaracion de la clase empleado
class Empleado{
    //declaro atributos o variables de instancia
    //atributos que se van a heredar 
    protected:
        string nombre;
        string id;
        string rol;
        int numero_empleados;
    //metodos
    public:
        //Constructor
        Empleado(); //Constructor default
        Empleado(string, string, string);
        Empleado(string, string, string, int);//Sobrecarga
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
        * y se iguala a cero para que sea 
        * una clase abstractas
        */
        /*Clase abstracta
        * Se iguala a cero para que sea clase abstracta
        * y solo se pueda usar a traves de sus clases hijas
        */
        virtual void EmpleadoData() = 0;
};
#endif