/*
 * Proyecto Maison_system clase Platillo
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 2
 * Agregacion con Orden
*/
/*
* Clase Platillo(archivo cpp)
* Es una clase donde obtenemos las componentes de la orden
* tambien se puede calificar el platillo y se menciona si esta bien o no
*/
//Mandamos a llamar las librerías
using namespace std;
#include <iostream>
#include <string>
#include "Platillo.h"
//Constructor default
Platillo::Platillo(){

}
Platillo :: Platillo(string _nombre, string _entrada,  int _calificacion, bool _vegano, string _plato_fuerte, string _postre, string _ingrediente){
    nombre = _nombre;
    entrada = _entrada;
    plato_fuerte = _plato_fuerte;
    postre = _postre;
    calificacion = _calificacion;
    vegano = _vegano;
    ingredientes = _ingrediente;
}
//Metodos Setters
void Platillo ::  setNombre(string _nombre){
    nombre = _nombre;
}
void Platillo :: setEntrada(string _entrada){
    entrada = _entrada;
}
void Platillo::setPlato_fuerte(string _plato_fuerte){
    plato_fuerte = _plato_fuerte;
}
void Platillo::setPostre(string _postre){
    postre = _postre;
}
void Platillo :: setCalificaciones( int _calificacion){
    calificacion = _calificacion;
}
void Platillo :: setIngredientes(string _ingredientes){
    ingredientes = _ingredientes;
}
//Metodos Getters
string Platillo::getNombre(){
    return nombre;
}
string Platillo::getEntrada(){
    return entrada;
}
string Platillo::getPlato_fuerte(){
    return plato_fuerte;
}
string Platillo::getPostre(){
    return postre;
}
/* Verifica la calificacion obtenida
 * y verifica si la calificacion es buena o mala
 * regresa la calificacion
*/
int Platillo::getCalificacion(){
    if (calificacion >= 3){
        cout << "Muy buen platillo" << endl;
        cout << "Tiene una calificacion de: ";
    }else{
        cout << "Debemos de mejorar el platillo" << endl;
        cout << "Tiene una calificacion de: ";
    }
    return calificacion;
}

string Platillo::getIngredientes(){
    return ingredientes;
}
