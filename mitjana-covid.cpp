#include <stdio.h>
#define N 4 // Definim x+1 = 3+1 = 4

int main() {
    //Inicialitzem les variables
    int num, comes = 0, contador = 0, divisio;
    float suma = 0;
    char caracter;
    scanf("%c", &caracter); // Llegim el primer caràcter
    while(caracter != '#'){
        while(comes < 3){ // Recorrem la línea fins que hem passat 3 comes
           scanf("%c", &caracter);
           if (caracter == ','){
               comes ++;
           }
        }
        comes = 0; // Reiniciem el nombre de comes per a la següent comprovació
        scanf("%i", &num); // Llegim el últim nombre de la línia com a enter
        suma += num; // Sumem el nombre llegit al total
        contador ++; // Augmentem el contador que controla el nombre de comprovacions fetes
        if (contador == N){ // Si el nombre de comprovacions fetes és x+1 (4)
            printf("%.2f\n",suma/N); // Mostrem per pantalla la mitjana dels x+1 valors analitzats
            contador = 0; // Reiniciem el contador per a la següent comprovació
            suma = 0; // Reiniciem la coma per a la següent comprovació
        }
        scanf("%c", &caracter); //Llegim el salt de línea
        scanf("%c", &caracter); //Llegim el primer caràcter de la següent línea
    }
    if (contador != 0){ //Si al arribar a la última línia encara queden elements que no hem fet la mitjana, la fem sense coniderar l'interval
       printf("%.2f\n",suma/contador);
    }
}
