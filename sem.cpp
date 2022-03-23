#include<stdio.h>
#include<math.h>
#include<locale.h>

//Protótipo
float calcular(float num);

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float num, resultado;
	
	resultado = calcular(num);
	
	printf("O quadrado no número é: %.2f", resultado);
	
}

//função
float calcular(float num) {
	
	float resultado;
	printf("Digite um número: ");
	scanf("%f", &num);
	return pow(num,2);
}
