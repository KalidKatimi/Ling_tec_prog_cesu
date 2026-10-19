#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int i, j ,valores[10];
	int aux;

	for ( i = 0; i < 10; i++){
		scanf("%d", &valores[i]);
	}

	for( i = 0;  i < 9; i++){
		for( j = 0; j < 9; j++){
			if(valores[j] < valores[j + 1]){
				aux = valores[j];
				valores[j] = valores[j + 1];
				valores[ j + 1] = aux;
 			}
		} 
	}
	
	for( i = 0; i < 5; i++){
		printf("|%d| ", valores[i]);	
	}

	printf("\n");

	for( i = 9; i >= 5; i--){
		printf("%d ", valores[i]);
	}
	
	return 0;
}
