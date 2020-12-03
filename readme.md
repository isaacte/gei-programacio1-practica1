# Pràctica 1 - Programació 1 - Grau en enginyeria informàtica (UdL)

En aquest repositori es troben els fitxers entregats per la Pràctica 1 de Programació 1.
Pràctica realitzada de manera individual. Alumne: Isaac Torres Espuña

# La pràctica

La pràctica aquí entregada consta de dos programes:

 1. Un programa que donat un fitxer CSV doni només les dades de la vostra població. La població serà on esteu vivint. Si sou de fora de Catalunya, podeu posar Lleida. Per facilitar el programa, podeu comparar les 3 primeres lletres només. No cal que imprimiu tota la fila, només les dades a partir del nom de la població.
 2. Un programa que donat un fitxer CSV, calculi la mitjana de valors per franges de x + 1 dies, on x és el grup de la boratori en el que esteu.

## Programa 1

Llibreries utilitzades: `stdio.h` 
Població: `Lleida `
### Funcionament
S'analitzen tots els caràcters del fitxer diferents a `#` quan es troba el caràcter d'escapement el programa s'atura.
Si el programa després d'una `, ` troba els caràcters `L`  `l` `e` `i` considera que aquella línea conté les dades que cerquem i mostra per pantalla el contingud de la línea a partir de la següent coma fins al canví de línia `\n`.
Explicació gràfica:
![Explicació gràfica del funcionament del Programa 1](https://i.ibb.co/TgXGJQ5/Practica-Imatge1.png)
El programa continua cercant la resta de línies fins trobar el caràcter d'escapament.
## Programa 2
Llibreries utilitzades: `stdio.h`
Grup de laboratori: `3` → `x=4`

### Consideracions
Com que l'explicació de l'activitat no específica algunes qüestions, he considerat:

 - El fitxer `CSV` d'entrada és la sortida del `Programa 1`.
 - Si el nombre de dades en el fitxer d'entrada no és múltiple de `x` no es mostrarà ni es calcularà la mitjana de les últimes dades sobrants.

### Funcionament
Per a cada una de les línies del fitxer d'entrada s'ometen els valors anteriors a la 3ª `,`.
Quan el problema ha escanejat 3 `,` en la línia (s'acumulen en la variable `comes` i es reinicia a 0 cada cop que en troba 3),  s'escanegen els següents caràcters com a `float`.  Aquest nombre es suma a la varaible `suma` declarada com a real (per a evitar una divisió d'enters) que per defecte s'inicialitza a `0` i cada cop que es tracta una línia incrementem la variable contador en 1. 
Quan la variable contador arriba a `x`, es calcula la mitjana de la suma mitjançant la següent operació `suma/x` i la mostrem pantalla, posteriorment es posen a 0 el contador i la suma per analitzar el següent interval.
Explicació gràfica:
![Explicació gràfica del funcionament del Programa 2](https://i.ibb.co/pJ47NFx/Practica-Imatge2.png)


