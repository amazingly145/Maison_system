/*
 * Proyecto Maison_system clase Cliente
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 1
 * Composicion con mesero
*/
/*
* Clase Cliente (archivo header)
* Es una clase donde se recopila la informacion
* del cliente, como su nombre, numero de personas 
* que la acompañan y la forma de pago.
*/
//Mandamos a llamar las librerias
using namespace std;
#include <iostream>
#include <string>
#ifndef CLIENTE_H
#define CLIENTE_H

//Definimos la clase cliente
class Cliente{
    //declaramos los atributos o variables de instancia
    private:
        string nombre_cliente;
        int num_personas;
        string forma_pago;
    public:
        //Constructores
        Cliente();
        Cliente(string, int, string);
        //Setters
        void setCliente(string);
        void setForma_pago(string);
        void setNum_personas(int);
        //Getters
        string getCliente();
        string getForma_pago();
        int getNum_personas();
        //Obtener datos del cliente
        string ClienteData();
        void ClienteData2(string, int , string);
};
#endif