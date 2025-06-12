/*
 * Proyecto Maison_system
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 *
 * Este es un proyecto de un sistema de restaurante
 * para la materia de programacion orientada a objetos
 * en este se crean objetos empleados, restaurante, cliente, etc.
 * Se obtiene la informacion de cada una y la procesa.
 * Este es un programa intercativo con el usuario
 * donde puede colocar la informacion y acceder a las distintas opciones del menu.
 */

//Llamar a las librerias principales
using namespace std;
#include <iostream>
#include <string>
//archivos con los objetos del proyecto
#include "Restaurante.cpp"
#include "Empleado.cpp"
#include "Cocinero.cpp"
#include "Mesero.cpp"
#include "Cliente.cpp"
#include "Orden.cpp"
#include "Platillo.cpp"

//funcion para imprimir el menu principal
void menu(){
    cout << "--------------------Menu--------------------" << endl;
    cout << "1. Colocar informacion restaurante" << endl;
    cout << "2. Obtener informacion restaurante" << endl;
    cout << "3. Registrar empleado/cliente" << endl;
    cout << "4. Ver menu del dia" << endl;
    cout << "5. Ver nuevo platillo creado" << endl;
    cout << "6. Nuevo rating" << endl;
    cout << "7. Salir" << endl;
    cout << "------------------------------------------" << endl;
}

//funcion para imprimir las instrucciones de uso
void instrucciones_de_uso(){
    cout << "---------------Instrucciones de uso---------------" << endl;
    cout << "1. En el menu solo usar numeros" << endl;
    cout << "2. Usar numeros del 1 al 7" << endl;
    cout << "3. Seguir las instruciones de uso o variable" << endl;
    cout << "4. Existen dos roles de empleados: meseros o cocineros" << endl;
}
//main
int main(){
    cout << "Bienvenido al sistema de un restaurante." << endl;
    //Variables
    string nombre, direccion, rol, id, atender;
    int usuario, rating, num_platillos, orden_max, num_empleados;
    bool constante;
    //Apuntadores para hacer polimorfismo
    Empleado* empleado = new Cocinero();
    //Objetos
    Restaurante restaurante;
    Orden orden;
    Platillo platillo;
    Mesero mesero;
    Cliente cliente;
    //Para agregacion
    Empleado* empleado_data;
    //Se crea puntero para agregacion
    Platillo* puntador_platillo = new Platillo();
    //se pasa el puntero platillo a orden 
    Orden* ordenes = new Orden(puntador_platillo);
    //Constante para el while
    constante = true;
    instrucciones_de_uso();
    while (constante == true){
        menu();
        cout << "Escoge la opcion del menu que deseas usar: " << endl;
        cin >> usuario;
        //decisiones del usuario
        if (usuario == 1){
            cout << "--------Registrar el restaurante--------" << endl;
            cout << "Nombre del restaurante: " << endl;
            cin >> nombre;
            restaurante.setNombre(nombre);
            cout << "Direccion: " << endl;
            cin >> direccion;
            restaurante.setDireccion(direccion);
            cout << "Rating del usuario (numeros enteros del 1 al 5): " << endl;
            cin >> rating;
            restaurante.setRating(rating);
        }
        else if (usuario == 2){
            cout << restaurante.RestauranteData() << endl;
        }
        else if (usuario == 3){
            //obtener info del empleados
            cout << "--------------Registro de empleados--------------" << endl;
            cout << "Nombre del empleado: " << endl;
            cin >> nombre;
            empleado->setNombre(nombre);
            cout << "Ingresar id de empleado: " << endl;
            cin >> id;
            empleado->setId(id);
            cout << "Cual es el rol que hace el empleado(escribir en minusculas): " << endl;
            cin >> rol;
            if (rol == "cocinero"){
                cout << "Numero de platillos hechos: " << endl;
                cin >> num_platillos;
                empleado_data = new Cocinero(nombre, id, rol, num_platillos);
                empleado_data -> EmpleadoData();
            }
            if (rol == "mesero"){
                cout << "Atiendes una mesa (S/N)"<< endl;
                cin >> atender;
                mesero.atender_cliente(atender);
                empleado_data = new Mesero(nombre, id, rol, atender);
                empleado_data -> EmpleadoData(); 
            }
        }
        else if (usuario == 4){
            ordenes -> menu_del_dia();
        }
        else if (usuario == 5){
            ordenes -> mostrarOrden();
        }
        else if (usuario == 6){
            cout << "Nueva calificacion dado por el cliente (numeros enteros del 1 al 5): " 
                << endl;
            cin >> rating;
            restaurante.setRating(rating);
            if (rating >= 3){
                cout << "Muy buen servicio" << endl;
            }else{
                cout << "Debemos de mejorar el servicio" << endl;
            }
            cout << "El rating fue de: " << restaurante.getRating() << endl;
        }
        else if (usuario == 7){
            cout << "Saliendo del programa..." << endl;
            constante = false;
        }
    }
}