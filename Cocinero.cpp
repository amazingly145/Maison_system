/*
 * Proyecto Maison_system clase Cocinero
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 2
 * Herencia con Empleado
 * Clase Hija
*/

/*
 * Clase Cocinero (archivo cpp)
 * Es una clase donde recopilamos la informacion
 * acerca del cocinero, donde podemos ver los platillos
 * que ha creado y también el numero del mismo
 * obtenemos su informacion y si el numero de platillos
 * termina con su trabajo
 * Implementamos Herencia de la clase Empleado
*/
//Mandamos a llamar las librerías
using namespace std;
#include <iostream>
#include <string>
#include "Cocinero.h"
//Constructor vació
Cocinero::Cocinero(){

}
//Constructor con parámetros
//Implementamos Herencia.
Cocinero::Cocinero(string _nombre, string _id, string _rol, int _numero_platillos): Empleado(_nombre, _id, _rol){
    numero_platillos = _numero_platillos;
}
//Métodos setters
void Cocinero::setNumero_platillos(int _numero_platillos){
    numero_platillos = _numero_platillos;
}
//Métodos getters
int Cocinero::getNumero_platillos(){
    return numero_platillos;
}
/**
 * Empleado Data sobrescritura con Empleado
 * imprime los datos del empleado
 *
 * No regresa nada.
 * Imprime todos los valores del empleado.
 * Asi como, atributos del cocinero
 * verificar el numero de platillos hechos
 */
void Cocinero::EmpleadoData(){
    cout << "------------Datos del Empleado------------"<< endl;
    //se manda a llamar la clase padre
    //y su metodo donde se sobrescribio
    Empleado::EmpleadoData();
    //lo que diferencia cocinero de la clase mesero
    //if's para poder ver si el cocinero termino su trabajo
    if (numero_platillos == 5){
        cout << "Buen trabajo, puedes tomar un descanso" << endl;
        cout << "numero platillos hechos: " << 
            to_string(numero_platillos) << endl;
    }else if (numero_platillos < 5){
        cout << "Solo llevas" << numero_platillos << endl;
        cout << "Continua Trabajando" << endl;
    }else if(numero_platillos > 5){
        cout << "Buen trabajo, puedes ir a descansar" << endl;
        cout << "numero platillos hechos: " << to_string(numero_platillos) << endl;
    }

}