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
class Platillo{
    private: 
        string nombre;
        string ingredientes;
        int calificacion;
        bool vegano;
    public:
        Platillo (string, string, int, bool);
        //Metodos setters
        void setNombre(string);
        void setIngrediente(string);
        void setCalificaciones (int);
        //Metodos getters
        string getNombre( );
        string getIngrediente();
        int getCalificacion();
        bool esvegano();

        
};