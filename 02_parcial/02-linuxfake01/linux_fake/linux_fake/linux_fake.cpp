#include <iostream>  // biblioteca iostream para entrada y salida 
#include <cstdlib>   // biblioteca cstdlib para funciones del sistema
#include <string>    // biblioteca string para manipulación de cadenas

using namespace std; // Usa el espacio de nombres estandar para simplificar el código (evitar tener que escribir std:: delante de cada identificador)

//comienza el main
int main() {
    string usuario;     // Declara una variable (de tipo string) para almacenar el nombre del usuario
    int opcion;         // Declara una variable (de tipo entero) para almacenar las opciones del menú de usuario
    string directorio;  // ... variable directorio

    cout << "Introduce usuario: ";  // solicita al usuario que introduzca su nombre
    cin >> usuario;                 // lee el nombre del usuario (guarda el valor ingresado)

    directorio = "mkdir -p " + usuario; // concatena "mkdir -p " con el nombre de usuario ingresado
    system(directorio.c_str());         // esta linea sirve para ejecutar "directorio"

    cout << "\nBienvenido " + usuario;      // da la bienvenida al usuario
    cout << "\n¿Qué quieres hacer?";        // muestra el menú...
    cout << "\n1) Crear un archivo.";       // opción para crear un archivo
    cout << "\n2) Ver archivos.";           // opción para ver archivos
    cout << "\n3) Salir.";                  // opción para salir
    cout << "\n>> ";                        //
    cin >> opcion;                          // lee y guarda la opción del menú del usuario en "opcion"

    switch (opcion) {  // inicializa un switch para las opciones del menú, el "case" que va a ejecutarse dependerá del usuario
    case 1: {      // opcion 1: crear un archivo
        string archivo;                        // declara una variable (de tipo string) para almacenar el nombre del archivo
        cout << "\nIntroduce el nombre del archivo: ";  // solicita al usuario que introduzca el nombre del archivo
        cin >> archivo;                        // lee el nombre del archivo y lo guarda
        string comando = "touch " + usuario + "/" + archivo; // crea el archivo concatenando "touch ", el nombre de usuario y el nombre del archivo
        system(comando.c_str());               // ejecuta la accion almacenado en "comando"
        break;                                 // sale de la declaración switch
    }
    case 2: {      // opcion 2: ver los archivos
        string comando = "ls " + usuario;      // concatena la cadena "ls " con el nombre de usuario
        system(comando.c_str());               // ejecuta el comando para enlistar archivos
        break;                                 // sale del menu 
    }
    case 3:        // opcion 3: salir
    default:       // si la opcion ingresada por el usuario no coincide con alguna de las opciones > Salir del programa
        exit(EXIT_SUCCESS);  // sale del programa
    }

    return 0;  // regresa 0 si se ejecuta de forma correcta
}