/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Cliente (archivo header)
* Es una clase donde se recopila la información
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
    private:
        string cliente;
        int num_personas;
        string forma_pago;
    public:
        Cliente();
        Cliente(string, int, string);
        void setCliente(string);
        void setForma_pago(string);
        void setNum_personas(int);
        string getCliente();
        string getForma_pago();
        int getNum_personas();
        string ClienteData();
};
#endif