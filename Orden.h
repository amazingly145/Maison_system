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

class Orden{
    private:
        int numero_orden;
        float total_pagar;
        int numero_platillos;
        int numero_mesa;
        string fecha;
        string especialidad;
    public:
        Orden();
        Orden (int, float, int, int, string);
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
        string mostrarOrden();
};
