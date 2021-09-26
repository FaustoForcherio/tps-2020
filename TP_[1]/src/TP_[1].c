/*
 ============================================================================
 Name        : TP_1.c
 Author      : Fausto Forcherio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "bibliotecaTP1.h"


int main(void) {
	setbuf(stdout, NULL);
float unNumero=0;
int unNumeroEntero;
float otroNumero=0;
int otroNumeroEntero;
int opcion;

float	resultadoSuma=0;
float	resultadoResta=0;
float	resultadoDivision=0;
float	resultadoMultiplicacion=0;
int		resultadoFactorialUno=0;
int		resultadoFactorialDos=0;
int flagX=0;
int flagY=0;

do{

printf("\n\t CALCULADORA \n");
printf("\t    Menú \n");



if(flagX==1){
printf("\n 1) Ingresar 1er operando. (A=%f)", unNumero);
}
else{
printf("\n 1) Ingresar 1er operando. (A=X)");
}


if(flagY==1){
printf("\n 2) Ingresar 2do operando. (B=%f)", otroNumero);
}
else{
printf("\n 2) Ingresar 2do operando. (B=Y)");
}



printf("\n 3) Calcular todas las operaciones.");
printf("\n 4) Informar resultados.");
printf("\n 5) Salir.");
printf("\n \nIngrese opcion: ");
scanf("%d", &opcion);
while(opcion<1||opcion>5){
	printf("\nERROR. Ingrese opcion: ");
	scanf("%d", &opcion);
}

unNumeroEntero=unNumero;
otroNumeroEntero=otroNumero;

switch(opcion){
case 1:
 unNumero=PedirFloat("\nIngrese el 1er operando:");
 flagX=1;
	break;
case 2:
 otroNumero=PedirFloat("\nIngrese el 2do operando:");
 flagY=1;
	break;
case 3:
	if(flagX==0||flagY==0){
	printf("Calculos hechos");
	resultadoSuma=Sumar(unNumero, otroNumero);
	resultadoResta=Restar(unNumero, otroNumero);
	if(otroNumero!=0){
	resultadoDivision=Dividir(unNumero, otroNumero);
	}
	else{printf("No es posible dividir por 0.");}

	resultadoMultiplicacion=Multiplicar(unNumero, otroNumero);
	if(unNumeroEntero-unNumero==0||otroNumeroEntero<=0||otroNumeroEntero>12){
	resultadoFactorialUno=Factorial(unNumeroEntero);

	}
	else{printf("Error. No es posible hacer el factorial del 1er operando.");}
	if(otroNumeroEntero-otroNumero==0||otroNumeroEntero<=0||otroNumeroEntero>12){
	resultadoFactorialDos=Factorial(otroNumeroEntero);
	}
	else{printf("Error. No es posible hacer el factorial del 2do operando.");}
	}
	else{printf("Se requiere ingresar ambos numeros para realizar los calculos.")}
	break;

case 4:
	printf("\nEl resultado de la suma es: %f \n", resultadoSuma);
	printf("El resultado de la resta es: %f \n", resultadoResta);
	if(otroNumero!=0){
	printf("El resultado de la división es: %f \n", resultadoDivision);
	}
	printf("El resultado de la multiplicación es: %f \n", resultadoMultiplicacion);
	if(unNumeroEntero-unNumero==0){
	printf("El resultado del primer factorial es: %d \n", resultadoFactorialUno);
	}
	if(otroNumeroEntero-otroNumero==0){
	printf("El resultado del segundo factorial es: %d \n", resultadoFactorialDos);
	}
	break;
}

}while(opcion!=5);
printf("\n Off");
return 0;
}

