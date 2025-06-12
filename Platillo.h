/*
 * Proyecto Maison_system clase Platillo
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 1
 * Agregacion con Orden
*/
/*
* Clase Platillo(archivo header)
* Es una clase donde obtenemos las componentes de la orden
* tambien se puede calificar el platillo y se menciona si esta bien o no
*/
//Mandamos a llamar las librerias
using namespace std;
#include <iostream>
#include <string>
#ifndef PLATILLO_H
#define PLATILLO_H
//definimos la clase Platillo
class Platillo{
    //declaramos los atributos o variables de instancia
    private: 
        string nombre;
        string entrada;
        string plato_fuerte;
        string postre;
        string ingredientes;
        int calificacion;
        bool vegano;
    //declaramos metodos
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
        //obtener calificacion e ingredientes
        int getCalificacion();
        string getIngredientes(); 
};
#endif