/*
 * Proyecto Maison_system clase Mesero
 * Andrea Iliana Cantu Mayorga
 * A01753419
 * 11 de junio del 2025
 * version 2
 * Herencia con Empleado
 * Clase Hija
 * Composicion con cliente
*/

/*
 * Clase Mesero (archivo cpps)
 * Es una clase donde recopilamos la informacion
 * acerca del mesero, donde podemosv ver
 * numero de mesa que atiende, y los datos del cliente
*/

//Mandamos a llamar las librerías
using namespace std;
#include <iostream>
#include <string>
#include "Mesero.h"
//Construcot por default
Mesero::Mesero(){
    numero_mesa = 0;
}
//Constructores
Mesero :: Mesero (string _nombre, string _id, string _rol, 
    int _numero_mesa, Cliente _cliente, string _atender) : Empleado(_nombre, _id, _rol){
        numero_mesa = _numero_mesa;
        cliente = _cliente;
        atender = _atender;
}
//Sobre carga
Mesero::Mesero(string _nombre, string _id, string _rol, 
    string _atender) : Empleado(_nombre, _id, _rol){
        atender = _atender;
}
//metodos setters
void Mesero :: setNumero_mesa(int _numero_mesa){
    numero_mesa = _numero_mesa;
}
void Mesero :: setAtender(string _atender){
    atender = _atender;
}
//metodos getters
int Mesero :: getNumero_mesa(){
    return numero_mesa;
}

string Mesero :: getAtender(){
    return atender;
}
/**
 * atender_cliente verificar que el mesero esta atendiendo una mesa
 * recibe la accion de mesero de atender
 *
 * No regresa nada.
 * se llaman los metodos del cliente
 * para crear composicion
 * Imprime los datos del cliente si es verdadero o "S".
 * Imprime que no esta atendiendo la mesa si es "N"
 * Asi como, atributos del cocinero
 * verificar el numero de platillos hechos
 */
void Mesero :: atender_cliente(string _atender){
    if (_atender == "S"){
        string forma_pago;
        int num_personas;
        string nombre_cliente;
        cout << "Que mesa atiendes? " << endl;
        cin >> numero_mesa;
        cout << "Atiendes numero mesa: " << numero_mesa << endl;
        cout << "--------------Registro Cliente--------------" << endl;
        cout << "Nombre del cliente: " << endl;
        cin >> nombre_cliente;
        cliente.setCliente(nombre_cliente);
        cout << "¿Cual es la forma de pago? (efectivo/tarjeta)" << endl;
        cin >> forma_pago;
        cliente.setForma_pago(forma_pago);
        cout << "¿Cuantas personas hay en la mesa?" << endl;
        cin >> num_personas;
        cliente.setNum_personas(num_personas);
        cout << "------------Datos del cliente------------" << endl;
        cliente.ClienteData();
        cliente.ClienteData2(nombre_cliente, num_personas, forma_pago);
        cout << "Se encuentran en la mesa: " << numero_mesa << endl;
    }else{
        numero_mesa = 0;
        cout << "No esta atendiendo ninguna mesa" << endl;
    }
}
/**
 * Empleado Data sobrescritura con Empleado
 * imprime los datos del empleado
 *
 * No regresa nada.
 * Imprime todos los valores del empleado.
 * Asi como, atributos del mesero
 * verificar si el mesero esta atendiendo
 */
void Mesero::EmpleadoData(){
    cout << "------------Datos del Empleado------------"<< endl;
    //se manda a llamar el metodo sobrescrito
    Empleado::EmpleadoData();
    cout << "------------Proxima asignacion------------"<<endl;
    cout << "El mesero despues debe atender mesa: " << "4" << endl;
    //verifica si el emesero esta atendiendo
    if (atender == "S"){
        cout << "El empleado los esta atendiendo" << endl;
    }else{
        cout << "El empleado no los atiende" << endl;
    }
}