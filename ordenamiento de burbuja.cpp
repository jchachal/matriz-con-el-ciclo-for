// ordenamiento de burbuja.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>//biblioteca estandar de entrada y salida de archivos en c++

using namespace std;//permite utilizar elementos del espacio de nombre estandar std sin necesidad de escribir std:: en cada llamado

void bubbleSort(int arr[], int n) {//funcion de ordenamiento
	for (int i = 0; i < n - 1; i++) {//Controla el número de pasadas necesarias para ordenar el arreglo.
		for (int j = 0; j < n - i - 1;j++) {//Recorre el arreglo hasta la posición no ordenada y compara elementos adyacentes
			//Si el elemento actual (arr[j]) es mayor que el siguiente (arr[j + 1]), los intercambia utilizando swap
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);

			}
		}
	}
}
void printArray(int arr[], int n) {//Declara la función printArray que imprime los elementos del arreglo. Recibe el arreglo y su tamaño.
	for (int i = 0; i < n; i++) cout << arr[i] << " ";//Recorre cada elemento del arreglo y lo imprime, seguido de un espacio.
	cout << endl;//Agrega un salto de línea al final de la impresión del arreglo.
}
int main() {//Punto de inicio del programa.
	int arr[] = { 5, 2, 9, 1, 5, 6 };//Declara e inicializa un arreglo con números desordenados.
	int n = sizeof(arr) / sizeof(arr[0]);//Calcula el número de elementos en el arreglo dividiendo el tamaño total del arreglo en bytes

	bubbleSort(arr, n);//Llama a la función bubbleSort para ordenar el arreglo.
	printArray(arr, n);//Llama a la función printArray para imprimir el arreglo ordenado.

	return 0;//Finaliza el programa correctamente.
}

