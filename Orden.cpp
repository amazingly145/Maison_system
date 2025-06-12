/*
 * Proyecto Maison_system clase Orden
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 1
 * Composicion con empleado
 * Agregacion con Platillo
*/

/*
* Clase Orden(archivo cpp)
* Es una clase donde se recopila la informacion
* del cliente, como su nombre, numero de personas 
* que la acompañan y la forma de pago.
*/
//Mandamos a llamar las librerias
#include <iostream>
using namespace std;
#include <string>
#include "Orden.h"
//Agregacion con platillo
Orden :: Orden (){

}
//Constructor para inicializar el platillo
/*Creamos el punteo que apunta a platillo 
 * lo inicializamos en el constructor defaault*/
Orden::Orden(Platillo*punteroplatillo) : pplatillo(punteroplatillo){
    
}
Orden :: Orden(int _numero_orden, int numero_mesa, int _numero_platillos, string _fecha){
    numero_orden = _numero_orden;
    numero_platillos = _numero_platillos;
    fecha = _fecha;
}

Orden :: Orden (int _numero_orden, int numero_mesa, int _numero_platillos, string _fecha, string _especialidad){
    numero_orden = _numero_orden;
    numero_platillos = _numero_platillos;
    fecha = _fecha;
    especialidad = _especialidad;
}
//Setters
void Orden :: setNumero_orden(int _numero_orden){
    numero_orden = _numero_orden;
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

 float Orden::getNumero_platillos(){
    return numero_platillos;
}
int Orden :: getNumero_mesa(){
    return numero_mesa;
} 
string Orden ::getFecha(){
    return fecha;
}
/*
 * Obtenemos el menu del dia
 * de la clase platillo
 * se imprime los componentes del menu
*/
void Orden::menu_del_dia(){
    cout << "----------------Menu del dia----------------" << endl;
    cout << "Entrada: " << endl;
    pplatillo -> setEntrada("crema de calabaza\n");
    cout << pplatillo -> getEntrada();
    cout << "Plato Fuerte: " << endl;
    pplatillo -> setPlato_fuerte("Carne molida\n");
    cout << pplatillo -> getPlato_fuerte();
    cout << "Postre: " << endl;
    pplatillo -> setPostre("pastel de chocolate\n");
    cout << pplatillo -> getPostre();
    cout << "-------------------------------------------"<< endl;
}
/*
 * Obtenemos la orden
 * de la clase platillo
 * se ven los ingredientes y se pide la calificacion
 * al final tambien obtenemos la calificacion
*/
void Orden::mostrarOrden(){
    int calificacion;
    cout << "--------------Ver Orden--------------" << endl;
    pplatillo -> setNombre("Sandwich");
    cout << "Nombre del platillo: " << pplatillo -> getNombre() << endl;
    pplatillo -> setIngredientes("pan, queso, jamon, mayonesa");
    cout << "Ingredientes: " << pplatillo -> getIngredientes() << endl;
    cout << "Calificacion del platillo: ";
    cin >> calificacion;
    pplatillo -> setCalificaciones (calificacion);
    cout << pplatillo -> getCalificacion() << endl;

}