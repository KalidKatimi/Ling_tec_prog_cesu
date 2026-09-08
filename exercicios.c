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







#include <stdio.h>


int main(){
	
	int opcao;
	float cel, fah;
	
	
	printf("Se quer em celsius digite 1\n");
	printf("Se quer em Fahrenheit digite 2\n");
	scanf("%d", &opcao);
	
	
	switch(opcao){
		case 1:
			printf("Entre com o valor de Fahrenheit\n");
			scanf("%f", &fah);
			cel = (fah - 32) * 5/9;
			printf("O valor em celsius eh de %.2f\n", cel);
			break;
			
		case 2:
			printf("Entre com o valor de Celsius\n");
			scanf("%f", &cel);
			fah = (cel * 9/5) + 32;
			printf("O valor em Fahrenheit eh de %.2f\n", fah);
			break;
	}
	
	
	
	return 0;
}



















