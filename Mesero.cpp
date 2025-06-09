/*
* Proyecto Restaurante
* Andrea Iliana Cantu Mayorga
* A01753419
* 21 de mayo del 2025
*/

/*
* Clase Mesero (archivo cpp)
* Es una clase donde recopilamos la informacion
* acerca del mesero, donde podemos las mesas atendidas
* numero de mesa que atiende, y la decision de 
* ayudar al empleado.
*/
//Mandamos a llamar las librerías
using namespace std;
#include <iostream>
#include <string>
#include "Mesero.h"
Mesero::Mesero(){

}
Mesero :: Mesero (string _nombre, string _id, string _rol, int _numero_mesa, Cliente _cliente, string _atender) : Empleado(_nombre, _id, _rol){
    numero_mesa = _numero_mesa;
    cliente = _cliente;
    atender = _atender;
}
Mesero::Mesero(string _nombre, string _id, string _rol, string _atender) : Empleado(_nombre, _id, _rol){
    atender = _atender;
}

void Mesero :: setNumero_mesa(int _numero_mesa){
    numero_mesa = _numero_mesa;
}
void Mesero :: setAtender(string _atender){
    atender = _atender;
}
int Mesero :: getNumero_mesa(){
    return numero_mesa;
}

string Mesero :: getAtender(){
    return atender;
}

void Mesero :: atender_cliente(string _atender){
    if (_atender == "S"){
        string forma_pago;
        int num_personas;
        string nombre_cliente;
        int _numero_mesa;
        cout << "Que mesa atiendes? " << endl;
        cin >> _numero_mesa;
        cout << "atiendes numero mesa: " << _numero_mesa;
        numero_mesa = _numero_mesa;
        cout << "Nombre del cliente: " << endl;
        cin >> nombre_cliente;
        cout << "¿Cual es la forma de pago? (efectivo/tarjeta)" << endl;
        cin >> forma_pago;
        cliente.setForma_pago(forma_pago);
        cout << "¿Cuantas personas hay en la mesa?" << endl;
        cin >> num_personas;
        cliente.setNum_personas(num_personas);
        cliente.ClienteData();
    }else{
        numero_mesa = 0;
        cout << numero_mesa << endl;
    }
}

void Mesero::EmpleadoData(){
    Empleado::EmpleadoData();
    cout << "El mesero esta atendiendo mesa: " << numero_mesa << endl;
}