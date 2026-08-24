#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b,c;
	
	printf("Entre com o valor de a\n");
	printf("Entre com o valor de b\n");
	printf("Entre com o valor de c\n");
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if( a > b && a > c){
		printf("o maior eh A");
	}
	
	 if(b > a && b > c){
		printf("o maior eh B");
	}
	
	 if (c > a && c > b){
		printf("o maior eh C");
	}
	return 0;
}
