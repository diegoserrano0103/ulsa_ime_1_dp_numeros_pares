# Práctica 2: Guardar los números pares
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->El programa selecciona los números pares de una línea de números agregados, esto podría servir para seleccionar solo ciertos elementos de una lista con ciertas especificaciones de manera automatica y para que nos pueda decir cuales y cuantos son.

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. _____ Los números que nosotros damos

**Salidas:**
1. _____Cuales números pares encontro
2. _____Cuantos números pares encontro

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _____que no sea un número con decimal
- _____Que solo sean 5 números

**Tamaño del arreglo y por qué** (piensa en el peor caso):
_____Meter letras, simbolos u otra cosa que no sean números

**¿El 0 y los negativos son pares? ¿Por qué?**
_____si son pares, solo por que se cambia el signo o 

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
_____

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Pares guardados | Posición de cada par |
|---|---|---|---|
| 1 | 3, 8, 5, 2, 7 | 8, 2 | 8 queda en posición 0 y 2 en posición 1 |
| 2 | _____ | _____ | _____ |
| 3 | _____ | _____ | _____ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?**  No
**¿Tuve que corregirla?** _____

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numeros_pares
./numeros_pares
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
_____Guardar los numeros pares de 5 numeros
Escribe un numero: 20
Escribe un numero: 5
Escribe un numero: 22
Escribe un numero: 2
Escribe un numero: 4

Pares encontrados: 4
Los numeros pares son: 20, 22, 2, 4
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué apareció al imprimir las 5 posiciones del arreglo? ¿Por qué?**
_____ los numeros que fueron introducidos

**Experimento B: ¿qué pasó al usar la variable del ciclo como posición del arreglo? ¿Por qué?**
_____

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mezcla | 1, 2, 3, 4, 5 | 2 pares: 2, 4 | _____ | _____ |
| Posiciones distintas | 3, 8, 5, 2, 7 | 2 pares: 8, 2 | _____ | _____ |
| Todos pares | 2, 4, 6, 8, 10 | 5 pares | _____ | _____ |
| Todos impares | 1, 3, 5, 7, 9 | 0 pares | _____ | _____ |
| Con cero y negativos | 0, -3, -4, 7, 1 | 2 pares: 0, -4 | _____ | _____ |
| Entrada inválida | `hola` o `3.5` | vuelve a pedir | _____ | _____ |
| Caso propio 1 | _____ | _____ | _____ | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ | Intente usar for pero me siento mas comodo con while, siento que me acomodo más y puedo visualizar mejor lo que va a pasar y también if
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
_____aprendí que ejercicios sencillos como estos pueden ser de gran utilidad

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____creo que la manera en que se imprimen las cosas, para que se pueda ver un poco mejor

**¿Qué fue lo más difícil y cómo lo resolví?**
_____para mi fue la manera en la que se iban a imprimir 

**¿Qué pregunta me quedó sin responder?**
_____

**¿Por qué no puedo usar la variable del ciclo para guardar en el arreglo?**
_____

## 13. Lista de verificación antes de entregar (Fase 5)

- [si ] Llené todas las secciones (no quedan `_____`)
- [si] Mi programa compila sin advertencias
- [ si] Probé todos los casos de la tabla
- [ si] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ sin modificar] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ si] Hice `git push` y verifiqué mi fork en GitHub
- [ si] Entregué el enlace de mi fork en Classroom