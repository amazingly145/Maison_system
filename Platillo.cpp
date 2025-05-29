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
int Platillo::getCalificacion(){
    return calificacion;
}
string Platillo::getIngredientes(){
    return ingredientes;
}
//Metodo para saber si es vegano
bool Platillo :: esvegano(string ingredientes){
    if (ingredientes=="vegano"){
        return true;
    }else{
        return false;
    }
}
