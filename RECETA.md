# Receta: Guardar los números pares

1. Mostrar mensaje de bienvenida
2. totalPares ← 0
3. contador ← 0
4. MIENTRAS contador < CANTIDAD HACER
       numero ← leerEntero("Ingresa 5 numeros")
       SI numero %2 == 0 ENTONCES
           pares[Total pares] ← numero
           totalPares ← Total pares + 1
       FIN SI
       contador ← contador + 1
   FIN MIENTRAS
5. Mostrar "Pares encontrados: " + total
6. Mostrar "Valores:"
7. i ← 0
8. MIENTRAS i < totalpares HACER
       Mostrar pares[i]
       i ← + 1
   FIN MIENTRAS