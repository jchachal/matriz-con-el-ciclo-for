// ciclo for each con arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>//biblioteca estandar de salida y entrada en c++
#include<vector>//biblioteca para usar el contenedor vector

using namespace std;//permite usar los elementos del espacio de nombre estandar std sin necesidad de escribir std:: en cada llamado
int main() {
	vector<int>numeros = { 1,2,3,4,5, };//declara un vector de enteros llamado numero e inicializa sus elemtos con los valores es tan asignados
	cout << "Elementos del vector :";//imprime en la consola el mensansaje elementos del vector
		for (const auto& num : numeros) {//repite el vector numeros la palabra clave const evita modificar el valor de num
			cout << num<<" ";//imprime cada numero del vector seguido de un espacio 
		}
		cout << endl;//finaliza la linea actual para que la salida quede ordanado en la consola 
		for (auto& num : numeros) {//repite sobre el vector numeros pero esta vez modificando los elementos
			num += 1;//incrementa cada elemento del vector en 1
		}
		cout << "Elementos modiicados:";//imprime el mensaje elementos modificados 
		for (const auto& num : numeros) {//muestra nuevamente los elementos del vector que ahora estan incrementados
			cout << num << " ";//imprime cada numero modificado seguido con un espacion.
		}
		cout << endl;//finaliza la linea
		return 0;//indica que el programa finazila correctamente

}