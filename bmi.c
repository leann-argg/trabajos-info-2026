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
			printf("Condicion: Bajo peso\n");
		}else if(imc<24.9){
			printf("Condicion: Normal :)\n");
		}else if(imc<29.9){
			printf("Condicion: Sobrepeso :|\n");
		}else if(imc>=29.9){
			printf("Condicion: Obesidad :(\n");
		}
	}
	printf("/////////////////////////////\n");
	printf("//    INDICE   | CONDICION //\n");
	printf("//    <18.5    | Bajo peso //\n");
	printf("// 18.5 a 24.9 | Normal    //\n");
	printf("//   25 a 29.9 | Sobrepeso //\n");
	printf("//        >=30 | Obesidad  //\n");
	printf("/////////////////////////////");
	
	

	return 0;
}
