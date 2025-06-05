/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Orden(archivo header)
* Es una clase donde se recopila la información
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
//Agregacion con platillo
class Orden{
    private:
        int orden_max;
        int numero_orden;
        float total_pagar;
        int numero_platillos;
        int numero_mesa;
        string fecha;
        string especialidad;
        //puntero para hacer agregacion
        Platillo*pplatillo;  
    public:
        //Metodo para inicializar el puntero
        Orden(Platillo*);
        Orden();
        Orden (int, float, int, int, string, int _orden_max);
        //Sobrecarga
        Orden (int, float, int, int, string, string);
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
        void nuevoPlatillo();
        void mostrarOrden();
};
#endif