/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Empleado (archivo header)
* Es una clase donde se recopila
* la informacion general del Empleado 
* como: nombre, id, rol.
* este es el archivo header.
*/

//Llamar las librerias
#include <iostream>
using namespace std;
#include <string>

//Clase Empleado
class Empleado{
    protected:
        string nombre;
        string id;
        string rol;
        int numero_empleados;
    public:
        //Constructor
        Empleado();
        Empleado(string, string, string,int);
        //Metodos setters
        void setNombre(string);
        void setId(string);
        void setRol(string);
        void setNumero_empleados(int);
        string getNombre();
        string getId();
        string getRol();
        int getNumero_empleados();
        //Sobre escritura
        string EmpleadoData();
};