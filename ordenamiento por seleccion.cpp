// ordenamiento por seleccion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>//biblioteca estandar para entrada y salida de archivos 

using namespace std;//permite utilizar elementos del espacio de nombre estandar std sin necesidad de escribir std:: en cada vez

void selectionSort(int arr[], int n) {//funcion de ordenamiento por seleccion 
	for (int i = 0; i < n - 1;i++) {//rrecore cada elemento del arrreglo para colorar en su posicion correcta
		int minIdx = i;//Este índice marcará el elemento más pequeño encontrado en el resto del arreglo.
		for (int j = i + 1;j < n; j++) {//Recorre el arreglo desde el siguiente índice (i+1) hasta el final (n) para buscar el elemento más pequeño.
			if (arr[j] < arr[minIdx]) {//Si se encuentra un elemento más pequeño que el actual mínimo (arr[minIdx]), actualiza minIdx con el índice del nuevo elemento más pequeño.
				minIdx = j;

			}
		}
		swap(arr[i], arr[minIdx]);//Después de terminar el ciclo interno, intercambia el elemento actual (arr[i]) con el elemento más pequeño encontrado (arr[minIdx])
	}
}
int main() {//funcion principal, inicio del programa 
	int arr[] = { 64, 25, 12, 22, 11 };//Declara e inicializa un arreglo desordenado con los valores dados.
	int n = sizeof(arr) / sizeof(arr[0]);//Calcula el tamaño del arreglo dividiendo su tamaño total en bytes (sizeof(arr)) entre el tamaño de un elemento
	selectionSort(arr, n);//Llama a la función selectionSort para ordenar el arreglo.
	for (int i = 0; i < n;i++) cout << arr[i] << " ";//Recorre el arreglo ordenado e imprime cada elemento seguido de un espacio.
	return 0;//Finaliza el programa correctamente.

}
