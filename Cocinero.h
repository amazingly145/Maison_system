/*
 * Proyecto Maison_system clase Cocinero
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 1
 * Herencia con Empleado
 * Clase Hija
*/

/*
 * Clase Cocinero (archivo header)
 * Es una clase donde recopilamos la informacion
 * acerca del cocinero, donde podemos ver los platillos
 * que ha creado y también el numero del mismo
 * Implementamos Herencia de la clase Empleado
 * Tenemos sobrescritura con Empleado
*/
//Mandamos a llamar las librerias
using namespace std;
#include <iostream>
# include <string>
//llamamos la clase padre
#include "Empleado.h"
#ifndef COCINERO_H
#define COCINERO_H

//Definimos la clase Cocinero
class Cocinero : public Empleado{
    //declaro atributos o variables de instancia
    private:
        int numero_platillos;
    //metodos
    public:
        //Constructores
        Cocinero(); //Constructor default
        Cocinero(string, string, string, int);
        //Setters
        void setNumero_platillos(int);
        //Getters
        int getNumero_platillos( );
        //Sobrescritura con Empleado 
        void EmpleadoData();
};
#endif