#include<stdio.h>
#include<math.h>
#include<locale.h>

//Prot�tipo
float calcular(float num);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float num, resultado;
	
	resultado = calcular(num);
	
	printf("O quadrado no n�mero �: %.2f", resultado);
	
}

//fun��o
float calcular(float num) {
	
	float resultado;
	printf("Digite um n�mero: ");
	scanf("%f", &num);
	return pow(num,2);
}
