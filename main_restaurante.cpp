//Llamar a las librerias principales
using namespace std;
#include <iostream>
#include <string>
//Llamar a los archivos .cpp de las clases 
#include "Restaurante.cpp"
#include "Empleado.cpp"
#include "Cocinero.cpp"
#include "Mesero.cpp"
#include "Cliente.cpp"
#include "Orden.cpp"
#include "Platillo.cpp"

void menu(){
    cout << "Menu" << endl;
    cout << "1. Colocar informacion restaurante" << endl;
    cout << "2. Obtener informacion restaurante" << endl;
    cout << "3. Registrar empleado" << endl;
    cout << "4. Registrar platillo" << endl;
    cout << "5. Ver platillo" << endl;
    cout << "6. Ver calificaciones del restaurante" << endl;
    cout << "7. Salir" << endl;
}
void instrucciones_de_uso(){
    cout << "Instrucciones de uso" << endl;
    cout << "1. En el menu solo usar numeros" << endl;
    cout << "2. Usar numeros del 1 al 7" << endl;
}
int main(){
    cout << "Bienvenido al sistema de un restaurante." << endl;
    //Variables
    string nombre, direccion, rol, id, atender;
    int usuario, num_empleados, rating, num_platillos, orden_max;
    bool constante;
    //Objetos
    Empleado empleado;
    Restaurante restaurante;
    Orden orden;
    Platillo platillo;
    Mesero mesero;
    //Puntero
    Empleado *empleado_data;
    //Para agregacion
    //Se crea puntero para agregacion
    Platillo* puntador_platillo = new Platillo();
    //se pasa el puntero platillo a orden 
    Orden* ordenes = new Orden(puntador_platillo);
    //Constante para el while
    constante = true;
    instrucciones_de_uso();
    while (constante == true){
        menu();
        cout << "Escoge la opcion del menu que deseas usar" << endl;
        cin >> usuario;
        if (usuario == 1){
            cout << "Nombre del restaurante: " << endl;
            cin >> nombre;
            restaurante.setNombre(nombre);
            cout << "Numero de empleados: " << endl;
            cin >> num_empleados;
            empleado.setNumero_empleados(num_empleados);
            cout << "Direccion: " << endl;
            cin >> direccion;
            restaurante.setDireccion(direccion);
            cout << "Rating del usuario: " << endl;
            cin >> rating;
            restaurante.setRating(rating);
        }
        else if (usuario == 2){
            cout << restaurante.RestauranteData() << endl;
        }
        else if (usuario == 3){
            cout << "Funcion para registrar empleado: " << endl;
            cout << "Nombre del empleado: " << endl;
            cin >> nombre;
            empleado.setNombre(nombre);
            cout << "Ingresar id de empleado: " << endl;
            cin >> id;
            empleado.setId(id);
            cout << "Cual es el rol que hace el empleado(escribir en minusculas): " << endl;
            cin >> rol;
            if (rol == "cocinero"){
                cout << "Cuantos platillos ha hecho" << endl;
                cin >> num_platillos;
                empleado_data = new Cocinero(nombre, id, rol, num_platillos);
                empleado_data -> EmpleadoData();
            }
            if (rol == "mesero"){
                cout << "Atiendes una mesa"<< endl;
                cin >> atender;
                mesero.atender_cliente(atender);
                empleado_data = new Mesero(nombre, id, rol, atender);
                empleado_data -> EmpleadoData(); 
            }
        }
        else if (usuario == 4){
            ordenes -> nuevoPlatillo();
        }
        else if (usuario == 5){
            cout << "Ver platillo: " << endl;
            ordenes -> mostrarOrden();
        }
        else if (usuario == 6){
            cout << "Nueva calificacion dado por el cliente: " << endl;
            cin >> rating;
            restaurante.setRating(rating);
            cout << restaurante.getRating() << endl;;
        }
        else if (usuario == 7){
            cout << "Saliendo del programa..." << endl;
            constante = false;
        }
    }
}
