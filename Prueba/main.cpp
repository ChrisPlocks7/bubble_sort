/************************
 * Autor: Christopher Espinosa
 * Descripcion: Dado un arreglo de enteros, realizar una funcion que
 * intercambie los valores mediante el algoritmo de bubbleSort y obtener
 * un arreglo ordenado en orden ascendente.
*************************/
#include <iostream>

void bubbleSort(int array[], int size) {
    //ciclo que asegura que se compare el arreglo entero
    for(int i = 0; i < size; i++)
    //ciclo que compara elemento por elemento y sustituye el valor
        for(int j = 0; j < size - 1; j++){
            //ciclo con condicion a cumplirse para sustiturir valores
            if(array[j]>array[j+1]){
                //definicion de la variable temporal y no perder el valor del elemento actual
                int temp = array[j];
                //asignaciones de valores
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
}
//funcion que recorre el arreglo y va imprimiendo los valores
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i]<< " ";
    }
    std::cout << std::endl;
}

int main() {
    //definicion del arreglo ejemplo
    int array_prueba[] = {64, 34, 25, 12, 22, 11, 90};
    //obtencion del tamaño del arreglo (numero de elementos en el arreglo)
    int size = sizeof(array_prueba) / sizeof(array_prueba[0]);
    //impresion del arreglo original
    std::cout << "Arreglo original: ";
    printArray(array_prueba, size);
    bubbleSort(array_prueba, size);
    //impresion del arreglo ordenado
    std::cout << "Arreglo ordenado: ";
    printArray(array_prueba, size);

    return 0;
}
