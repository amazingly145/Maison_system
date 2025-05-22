/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Platillo (archivo header)
*
*/
//Mandamos a llamar las librerías
using namespace std;
#include <iostream>
#include <string>
#include "Platillo.h"
Platillo :: Platillo(string _nombre, string _ingredientes, int _calificacion, bool _vegano){
    nombre = _nombre;
    ingredientes = _ingredientes;
    calificacion = _calificacion;
    vegano = _vegano;
}

//Setters
void Platillo ::  setNombre(string _nombre){
    nombre = _nombre;
}
void Platillo :: setIngrediente(string _ingredientes){
    ingredientes = _ingredientes;
}void Platillo :: setCalificaciones( int _calificacion){
    calificacion = _calificacion;
}

bool Platillo :: esvegano(){

}