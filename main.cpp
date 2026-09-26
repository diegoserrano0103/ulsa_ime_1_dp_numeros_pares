// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: cantidad de números a leer
    const int CANTIDAD = 5;

    // 2. Arreglo y contador (siempre inicializados)
    //    TODO: declara el arreglo pares. ¿De qué tamaño en el peor caso?
    //    TODO: declara totalPares. ¿Con qué valor empieza?
    int pares[CANTIDAD];
    int totalPares = 0; 
    int contador = 0;

    std::cout << "Guardar los numeros pares de " << CANTIDAD << " numeros\n";

    // 3. Ciclo: leer CANTIDAD números
    //    TODO: lee cada número con leerEntero("Escribe un numero: ")
    //    TODO: si el número es par, guárdalo en la siguiente posición libre
    //    ¿Qué variable te dice cuál es la siguiente posición libre?
    while (contador < CANTIDAD) {
        int numero = leerEntero("Escribe un numero: ");

        // Si el número es par, lo guardamos en la siguiente posición libre
        if (numero % 2 == 0) {
            pares[totalPares] = numero;
            totalPares = totalPares + 1;
        }

        contador = contador + 1;
    }


    // 4. Salida
    //    TODO: muestra cuántos pares se guardaron
    //    TODO: recorre el arreglo e imprime cada par
    //    ¿Hasta qué posición debes llegar?
    std::cout << "\nPares encontrados: " << totalPares << "\n";

    if (totalPares == 0) {
        std::cout << "No se encontraron pares.\n";
    } else {
        std::cout << "Los numeros pares son: ";
        
        int i = 0;
        while (i < totalPares) {
            std::cout << pares[i];
            
            // Imprime coma solo entre números (sin coma al final)
            if (i < totalPares - 1) {
                std::cout << ", ";
            }
            
            i = i + 1;
        }
        std::cout << "\n";
    }




    // ¿Qué significa return 0;?
    return 0;
}