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
* Clase Orden(archivo header)
* Es una clase donde se recopila la informacion
* del cliente, como su nombre, numero de personas 
* que la acompañan y la forma de pago.
*/
//Mandamos a llamar las librerias
using namespace std;
#include <iostream>
#include <string>
#include "Platillo.h"
#ifndef ORDEN_H
#define ORDEN_H
//definimos la clase orden
class Orden{
    //declaramos los atributos o variables de instancia
    private:
        int numero_orden;
        int numero_platillos;
        int numero_mesa;
        string fecha;
        string especialidad;
        //puntero para hacer agregacion
        Platillo*pplatillo;  
    public:
        //Metodo para inicializar el puntero
        //Orden recibe el puntero platillo
        Orden(Platillo*);
        Orden();
        Orden (int, int, int, string);
        //Sobrecarga
        Orden (int, int, int, string, string);
        //Setters
        void setNumero_orden(int);
        void setTotal_pagar(float);
        void setNumero_platillos(int);
        void setNumero_mesa(int);
        void setFecha(string);
        //Getters
        int getNumero_Orden();
        float getTotal_pagar();
        float getNumero_platillos();
        int getNumero_mesa();
        string getFecha();
        //
        void menu_del_dia();
        //Metodo para mostrarOrden
        void mostrarOrden();
};
#endif