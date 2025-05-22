#include <iostream>
using namespace std;
#include <string>
#include "Orden.h"

Orden :: Orden (){

}
Orden :: Orden(int _numero_orden, float _total_pagar, int numero_mesa, int _numero_platillos, string _fecha){
    numero_orden = _numero_orden;
    total_pagar = _total_pagar;
    numero_platillos = _numero_platillos;
    fecha = _fecha;
}

Orden :: Orden (int _numero_orden, float _total_pagar, int numero_mesa, int _numero_platillos, string _fecha, string _especialidad){
    numero_orden = _numero_orden;
    total_pagar = _total_pagar;
    numero_platillos = _numero_platillos;
    fecha = _fecha;
    especialidad = _especialidad;
}
//Setters
void Orden :: setNumero_orden(int _numero_orden){
    numero_orden = _numero_orden;
}

void Orden :: setTotal_pagar(float _total_pagar){
    total_pagar = _total_pagar;
}

void Orden::setNumero_platillos(int _numero_platillos){
    numero_platillos = _numero_platillos;
}

void Orden::setNumero_mesa(int _numero_mesa){
    numero_mesa = _numero_mesa;
}

void Orden :: setFecha(string _fecha){
    fecha = _fecha;
}

//Metodos getters
int Orden::getNumero_Orden(){
    return numero_orden;
}

float Orden::getTotal_pagar(){
    return total_pagar;
}
 float Orden::getNumero_platillos(){
    return numero_platillos;
}
int Orden :: getNumero_mesa(){
    return numero_mesa;
} 
string Orden ::getFecha(){
    return fecha;
}
string Orden::mostrarOrden(){
    return "La orden es:";
}