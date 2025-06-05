#include <iostream>
using namespace std;
#include <string>
#include "Orden.h"
//Agregacion con platillo

Orden :: Orden (){

}
//Constructor para inicializar el platillo
Orden::Orden(Platillo*punteroplatillo) : pplatillo(punteroplatillo){
    
}
Orden :: Orden(int _numero_orden, float _total_pagar, int numero_mesa, int _numero_platillos, string _fecha, int _orden_max){
    numero_orden = _numero_orden;
    total_pagar = _total_pagar;
    numero_platillos = _numero_platillos;
    fecha = _fecha;
    orden_max = _orden_max;
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
void Orden::nuevoPlatillo(){
    cout << "Menu del dia: " << endl;
    cout << "Entrada" << endl;
    pplatillo -> setEntrada("crema de calabaza\n");
    cout << pplatillo -> getEntrada();
    cout << "Plato Fuerte" << endl;
    pplatillo -> setPlato_fuerte("Carne molida\n");
    cout << pplatillo -> getPlato_fuerte();
    cout << "Postre" << endl;
    pplatillo -> setPostre("pastel de chocolate\n");
    cout << pplatillo -> getPostre();
}
void Orden::mostrarOrden(){
    pplatillo -> setNombre("Sandwich");
    cout << "Nombre del platillo: " << pplatillo -> getNombre() << endl;
    pplatillo -> setIngredientes("pan, queso, jamon, mayonesa");
    cout << "Ingredientes: " << pplatillo -> getIngredientes() << endl;
    //cout << "Es Vegano: " << pplatillo -> esvegano() << endl;
}
