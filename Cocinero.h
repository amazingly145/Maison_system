/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Cocinero (archivo header)
* Es una clase donde recopilamos la informacion
* acerca del cocinero, donde podemos ver los platillos
* que ha creado y también el numero del mismo
* Implementamos Herencia de la clase Empleado
*/
//Mandamos a llamar las librerías
using namespace std;
#include <iostream>
# include <string>
#include "Empleado.h"
//Definimos la clase Cocinero
class Cocinero : public Empleado{
    private:
        int numero_platillos;
    public:
        Cocinero();
        Cocinero(string _nombre, string _id, string _rol, int);
        void setNumero_platillos(int);
        int getNumero_platillos( );
        //Sobre escritura 
        string EmpleadoData();

};