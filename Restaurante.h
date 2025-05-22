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
* Este es el archivo header.
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

//Clase Restaurante
class Restaurante{
    //atributos
    private:
        string nombre;
        string direccion;
        Empleado numero_empleados;
        int rating;
    //Metodos
    public:
        Restaurante(string,string, Empleado, int);
        void setNombre(string);
        void setDireccion(string);
        void setRating(int);
        int getRating();
        string getDireccion();
        string RestauranteData();
};