
#include <stdio.h>

int main() {
    int contador = 0;
    char caracter;

    scanf("%c", &caracter);
    while( caracter != '#' ) {
        if (caracter == ',')
            scanf("%c", &caracter);
                if (caracter == 'L'){
                    scanf("%c", &caracter);
                        if (caracter == 'l'){
                            scanf("%c", &caracter);
                            if (caracter == 'e'){
                                scanf("%c", &caracter);
                                if (caracter == 'i'){
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
        scanf("%c", &caracter);
   }
}
