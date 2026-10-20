#include <stdio.h>
//#include seria uma inclusão de uma biblioteca, #include é uma diretiva de processamento
int main(){
  printf("HelloWorld!\n");  
  return 0;
}










#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, j, aux, v[100];

    srand(time(NULL)); // semente baseada no relógio

    for (i = 0; i < 100; i++){
        v[i] = rand() % 1000; // números de 0 a 999
    }

    printf("Numeros gerados:\n");
    for (i = 0; i < 100; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("\nOrdem inversa:\n");
    for (i = 99; i >= 0; i--){
        printf("%d ", v[i]);
    }
    printf("\n");

    for (i = 0; i < 100; i++){
        for (j = 0; j < 99 - i; j++){
            if (v[j] < v[j + 1]){
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }

    printf("\nOrdenados do maior para o menor:\n");
    for (i = 0; i < 100; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
