#include <stdio.h>
int main(){
	
	char nome[10];
	float n1, n2, n3, media;
	
	printf("Qual o seu nome?\n");
	scanf("%s", nome);
		
	printf("Coloque suas 3 notas\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	if(media >= 7 && media <= 10){
		printf("\033[34mAPROVADO\033[0m\n");
	}
	
	else if(media >= 4 && media < 7){
		printf("\033[32mEXAME\033[0m\n");
	}
	
	else{
		printf("\033[31mREPROVADO\033[0m\n");
	}
	
	return 0;
}
