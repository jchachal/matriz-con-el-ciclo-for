// busqueda binari.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>//biblioteca estandar de entrada y salida de datos en c++
#include <algorithm>//para usar sort

using namespace std;//permite usar elementos del espacio de nombre estandar std sin necesidad de escribir std:: en un llamado 

int main() {//define la funcion principal es el punto de inicio del programa 
    int arreglo[] = { 1, 5, 8, 2, 3, 9, 4 };//declara e inicializa un arreglo de enteros con los valores preferidos 
    int clave;//declara una variable para almacenar el numero que el usuario desea buscar
    bool encontrado = false;//inicializa una variable booleana que indica si el numero fue enncontrado o no
    int indice = -1;//declara e inicializa una variable para almacenar el indice del numero buscado
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]); //calcula el tamoaño del arreglo dividie´ndo el tamaño total del arreglo

    sort(arreglo, arreglo + tamano);//esta linea de codigo sirve para ordenar el arreglo en ordenn ascendente

    cout << "Array ordenado: ";//muestra el arreglo oedenado en la consola 
    for (int n : arreglo) cout << n << " ";//itera todos los elementos del arreglo y mostrarlos en la condola 
    cout << endl;//salto de linea en la salida de la consola 
    //solicita al usuario que introduzca un numero para almacenr en la valor ingresado en la variable clave
    cout << "Ingresa un numero a buscar: ";
    cin >> clave;

    //inicializan las variables de los limites izquierdo y derecha para la busqueda binaria
    int izquierda = 0;
    int derecha = tamano - 1;

    // inicia un ciclo que se ejecuta mientras los limitesa izquierdo y derecho no se crucen 
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        //si el numero en el indice medio es igual al numero buscado marca encontrado como verdadero gurda el indice y termina el ciclo
        if (arreglo[medio] == clave) {
            encontrado = true;
            indice = medio;
            break;
        } //Si el valor en medio es menor que la clave, actualiza el límite izquierdo (izquierda = medio + 1).
        else if (arreglo[medio] < clave) {
            izquierda = medio + 1;
        }
        else {
            derecha = medio - 1;//Si el valor en medio es mayor, actualiza el límite derecho
        }
    }
    //Muestra la posición del número en el arreglo.
    if (encontrado) {
        cout << "Numero encontrado en la posicion (arreglo ordenado): " << indice << endl;
    }
    //Muestra un mensaje indicando que el número no está en el arreglo.
    else {
        cout << "Numero no encontrado." << endl;
    }

    return 0;// finaliza el programa correctamente

}
