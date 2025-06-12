/*
* Proyecto Maison_system clase Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 11 de junio del 2025
* version 1
* Composicion con Empleado
*/

/*
* Clase Restaurante (archivo header)
* Es una clase donde recopilamos la informacion
* importante de un restaurante como su:
* direccion, nombre y el rating que le dan.
* Solo se mencionan los atributos y metodos
*/

//se mandan a llamar las librerias
#include <iostream>
using namespace std;
#include <string>
/*
 *se manda a llamar el archivo header
 *de empleado para implementar composicion
*/ 
#include "Empleado.h"
#ifndef RESTAURANTE_H
#define RESTAURANTE_H

//declaracion de la clase restaurante
class Restaurante{
    //declaro atributos o variables de instancia
    private:
        string nombre;
        string direccion;
        int rating;
    //declaro metodos que va a tener el objeto
    public:
        //Constructores
        Restaurante (); //Constructor por default
        Restaurante(string, string, int);
        //setters
        void setNombre(string);
        void setDireccion(string);
        void setRating(int);
        //Getters
        string getNombre();
        int getRating();
        string getDireccion();
        //Recopilacion de datos
        string RestauranteData();
};
#endif