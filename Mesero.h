/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Mesero (archivo header)
* Es una clase donde recopilamos la informacion
* acerca del mesero, donde podemos las mesas atendidas
* numero de mesa que atiende, y la decision de 
* ayudar al empleado.
*/
//Mandamos a llamar las librerías
#include <iostream>
using namespace std;
#include <string>
#include "Empleado.h"
#include "Cliente.h"
#ifndef MESERO_H
#define MESERO_H

class Mesero : public Empleado{
    private:
        int numero_mesa;
        Cliente cliente;
        string atender;
    public:
        Mesero();
        Mesero(string, string, string, string);
        Mesero(string, string, string , int, Cliente, string);
        void setNumero_mesa(int);
        int getNumero_mesa();
        void setAtender(string);
        string getAtender();
        void atender_cliente(string);
        void EmpleadoData();
};
#endif