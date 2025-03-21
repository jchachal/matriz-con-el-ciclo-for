// matriz con el cilo for.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream> //biblioteca estándar de entrada y salida en C++
#include <vector>   //biblioteca para usar el contenedor vector

using namespace std; //permite usar elementos del espacio de nombre estándar std sin necesidad de escribir std::

int main() {
    int filas = 3, columnas = 4; //definimos el número de filas y columnas para la matriz

    vector<vector<int>> matriz(filas, vector<int>(columnas)); //crear matriz de tres filas y cuatro columnas

    // Llenamos la matriz con valores multiplicativos
	for (int i = 0; i < filas; i++) {//inicia un bucle para recorrer las filas de la matriz.

		for (int j = 0; j < columnas; j++) {//inicia un bucle interno para recorrer las columnas de cada fila de la matriz.
			matriz[i][j] = (i + 1) * (j + 1);//lena la matriz asignando a cada pasicion i j in valor multiplicativo

		}
	}


    // Imprimimos la matriz
	for (const auto& fila : matriz) {//repite sobre las filas de la matriz usando un bucle
		for (int valor : fila) {//dentro de cada fila itera(repite) sobre cada valor permitiendo acceder a los elemntos individuales
            cout << valor << " \t";     // imprimir el valor con un espacio
        }
        cout << endl; // salto de línea al final de cada fila
    }

    return 0; // indica que el programa finaliza exitosamente
}
