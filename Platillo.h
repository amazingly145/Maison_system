/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Platillo (archivo header)
*
*/
//Mandamos a llamar las librerías
using namespace std;
#include <iostream>
#include <string>
#ifndef PLATILLO_H
#define PLATILLO_H
class Platillo{
    private: 
        string nombre;
        string entrada;
        string plato_fuerte;
        string postre;
        string ingredientes;
        int calificacion;
        bool vegano;
    public:
        //Constructor
        Platillo();
        Platillo (string, string, int, bool, string, string, string);
        //Metodos setters
        void setNombre(string);
        void setEntrada(string);
        void setPlato_fuerte(string);
        void setPostre(string);
        void setCalificaciones (int);
        void setIngredientes(string);
        //Metodos getters
        string getNombre();
        string getEntrada();
        string getPlato_fuerte();
        string getPostre();
        int getCalificacion();
        bool esvegano(string);
        string getIngredientes(); 
};
#endif
