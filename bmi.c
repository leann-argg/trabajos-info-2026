#include <stdio.h>

int main(){
	
	float imc, peso, altura;
	
	printf("Ingrese su peso en Kg:" );
	scanf("%f", &peso);
	
	printf("Ingrese su altura en metros:" );
	scanf("%f", &altura);
	
	imc=peso/(altura*altura);
	
	printf("Su imc es: %.2f\n", imc);{
		if(imc<18.5){
			printf("Condicion: Bajo peso");
		}else if(imc<24.9){
			printf("Condicion: Normal");
		}else if(imc<29.9){
			printf("Condicion: Sobrepeso");
		}else if(imc>=29.9){
			printf("Condicion: Obesidad");
		}
	}
	
	return 0;
}
