# Maison_system
## Diagrama de clases
![Diagrama drawio](https://github.com/amazingly145/Maison_system/blob/main/UML_Maiso_System.jpg?raw=true)
## Contexto
Maison_system es un sistema para los restaurantes, donde pueden observar el sistema que llevan en su restaurante, así como el número de personas que entran y también los platillos que escogen. Se puede ver el sistema de trabajo, como: meseros y cocineros. Para poder analizar el servicio que se les brinda y de esta manera el restaurante podrá ver las áreas de oportunidad en donde necesitan mejorar.
## Funcionalidad 
El programa comienza con un sistema de bienvenida al usuario y se le despliega el siguiente menú:
1. Obtener información general.
2. Atender cliente.
3. Obtener información de la orden.
4. Registrar platillo.
5. Ver calificaciones del restaurante.
6. Salir.
La elección se realizará cuando al usuario se le despliege este mismo, y pueda escoger alguna de las opciones que se muestran en el menú anterior. Cuando se seleccione la opción deseada, el usuario podrá hacer lo que se le pida y si desea Salir deberá escoger la opción de salir de cada función a través de esa opción. Si desea salir del programa por completo deberá de escoger la opción 6.
## Casos que haría que el proyecto deje de funcionar 
1. Si se le pide al usuario una opción del menú y en lugar de escribir un número, escribe una palabra el programa no responderá y volverá a imprimir el menú, por lo que, se le debe de colocar números.
2. Si se escoge alguna de las opciones que no se encuentra en el menú, el programa no sabrá que hacer y se le volverá a pedir al usuario la opción.
## Compilacion
1. Es necesario haber descargado c++ en la computadora para que se pueda compilar, sin tener esta opcion no es posible que compile.
2. Para poder compilar el programa, es necesario descargar todos los archivos (headers y cpp).
3. Se debe usar la terminal de la carpeta. Desde donde se esta compilando, utilizando los comandos necesarios.
4. Utilizar el siguiente comando: g++ main_restaurante.cpp -o main_restaurante
5. Posteriormente escribir main_restaurante y se podra observar el programa compilado.

## Correcciones 
Version 1.0 15 de mayo del 2025. El programa consta de 7 clases: 3 son del tipo Composición, 1 del tipo Agregación y 2 del tipo Herencia. La clase principal **(Restaurante)**, tiene una relación de **Composición** con **Empleado**. **Empleado** tiene **composición** con **Orden** y es clase Padre (**herencia**) de las clases **Cocinero** y **Mesero**. **Mesero** tiene una relación del tipo composición con **Cliente**. Por último **Platillo** y **Orden** tienen una relación del tipo **Agregación**. Para la primer entrega, se identificaron: las clases necesarias para la soluión del problema así como la relación entre ellas, se identificaron los posibles casos, donde el programa dejaría de fucnionar. Se generó el UML, donde se puede observar la relación entre los mismos.

Version 2.0 22 de mayo del 2025. Se comentó que en el entrega anterior no se podría observar el UML, por lo que se asistió a una asesorá para poder obtener retroalimentación. Se agregó el UML en dos formatos (*jpg* y *png*). Por si uno de los formatos no funcionaba, también se agregó el archivo en el *README*. En esta entrega se implementó en el UML la sobrecarga y sobreescritura. Se empezó a desarrollar el código de las mismas. Se implementando todas las clases, en formatos *.h* y *.cpp*. Faltó desarrollar el main, por lo que no se puede correr o compilar todavía. Cada clase tiene su propio archivo header y cpp, mientras que el archivo main contiene todos los archivos *.cpp* de las clases

Version 3.0 29 de mayo del 2025. 
