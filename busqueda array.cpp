// busqueda array.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>//biblioteca estandar de salida y entrade de archivos en c++

using namespace std;//permite utilizar elememtos del espacio de nombre estandar std sin necesidad de escribir std:: en cada llamado

int main(){//funcion principal, punto de inicion del programa 
	int arreglo[] = { 1,5,8,2,3,9,4 };//declara e inicializa un arreglo de numeros enteros con los valores preferidos
	int clave;//declara una variable para almacenar el numero que ell usuario desea buscar
	bool encontrado = false;//inicializa un avariable de tipo booleana que indica si el numero fue encontrado o no 

	//solicita al usuarion que ingrese un numero para que sea almacenada el valor ingresado en la variable clave 
	cout << "Ingresa un numero a buscar: ";
	cin >> clave;

	int tamano = sizeof(arreglo) / sizeof(arreglo[0]);//calcular el tamaño del arreglo
		for (int i = 0; i < tamano; i++) {//rrecore el arreglo y busca el numero
			if (arreglo[i] == clave) {//verifica si el elemeto del arreglo es igual al numero ingresado
				cout<<"Numero encontrado en la posicion: "<<i <<endl;//Si la condición es verdadera, muestra la posicion del numero encontrado en el arreglo.
				encontrado = true;//indica que el elemento buscado fua encontrado
				break;//detiene el blucle para evitar repeticiones innecesarias
				} 
		}
		//verifica y muestra el resultado
		if (!encontrado) {
			cout<<"Numero no encontrado en la array"<<endl;//
		}
		return 0;//finaliza el programa 
}
