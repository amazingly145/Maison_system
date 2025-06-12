/*
 * Proyecto Maison_system clase Mesero
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 1
 * Herencia con Empleado
 * Clase Hija
 * Composicion con Cliente 
*/

/*
 * Clase Mesero (archivo header)
 * Es una clase donde recopilamos la informacion
 * acerca del mesero, donde podemos ver
 * numero de mesa que atiende, y los datos del cliente
*/

//Mandamos a llamar las librerías
#include <iostream>
using namespace std;
#include <string>
//llamamos la clase padre
#include "Empleado.h"
//llamamos la clase de composicion
#include "Cliente.h"
#ifndef MESERO_H
#define MESERO_H

//Definimos la clase Mesero con herencia 
class Mesero : public Empleado{
    //declaro atributos o variables de instancia
    private:
        int numero_mesa;
        Cliente cliente;
        string atender;
    //declaro metodos 
    public:
        //Constructores
        Mesero();
        Mesero(string, string, string, string);
        Mesero(string, string, string , int, Cliente, string);
        //Metodos setters
        void setNumero_mesa(int);
        void setAtender(string);
        //Metodos getters
        int getNumero_mesa();
        string getAtender();
        string getCliente();
        //verificar si esta atendiendo
        void atender_cliente(string);
        //Sobrescritura con Empleado
        void EmpleadoData();
};
#endif