using namespace std;
#include <iostream>
#include <string>
#include "Restaurante.cpp"
#include "Empleado.cpp"
#include "Cocinero.cpp"
#include "Mesero.cpp"
#include "Cliente.cpp"
#include "Orden.cpp"
#include "Platillo.cpp"
void menu(){
    cout << "Menu" << endl;
    cout << "1. Colocar información restaurante" << endl;
    cout << "2. Obtener información restaurante" << endl;
    cout << "3. Atender cliente" << endl;
    cout << "4. Obtener información de la orden" << endl;
    cout << "5. Registrar platillo" << endl;
    cout << "6. Ver calificaciones del restaurante" << endl;
    cout << "7. Salir" << endl;
}
int main(){
    cout << "Bienvenido al sistema de un restaurante." << endl;
    int usuario;
    bool constante;
    string direccion;
    string nombre;
    int num_empleados;
    int rating;

    Empleado empleado;
    Restaurante restaurante;
    constante = true;
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
            
        }
        else if (usuario == 7){
            cout << "Saliendo del programa..." << endl;
            constante = false;
        }
    }
}
