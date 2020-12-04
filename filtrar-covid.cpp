
#include <stdio.h>

int main() {
    // Inicialitzem les variables
    int contador = 0;
    char caracter;

    scanf("%c", &caracter); //Escanegem el primer caràcter
    while( caracter != '#' ) { //Mentre no sigui el caràcter d'escapament
        if (caracter == ',') //Com que em de trobar 'Llei' després d'una coma
            scanf("%c", &caracter);
                if (caracter == 'L'){ //Comprovem si el següent caràcter és una L
                    scanf("%c", &caracter);
                        if (caracter == 'l'){ //Comprovem si el següent caràcter és una l
                            scanf("%c", &caracter);
                            if (caracter == 'e'){ //Comprovem si el següent caràcter és una e
                                scanf("%c", &caracter);
                                if (caracter == 'i'){ //Comprovem si el següent caràcter és una i
                                //Mostrem tots els caràcters fins al final de la línea
                                    do{
                                        scanf("%c", &caracter);
                                    } while (caracter != ',');
                                    while (caracter != '\n'){
                                        scanf("%c", &caracter);
                                        printf("%c",caracter);
                                    }
                                }
                            }
                        }
                }
        scanf("%c", &caracter); //Seguim escanejant
   }
}
