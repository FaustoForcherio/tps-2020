/*
 * bibliotecaTP1.c
 *
 *  Created on: 18 sep. 2021
 *      Author: faust
 */

#include <stdio.h>
#include <stdlib.h>

float PedirFloat(char mensaje[]){
	float numero;
	printf(mensaje);
	scanf("%f", &numero);
	return numero;
}


float Sumar(float unNumero, float otroNumero){
	float resultado;
	resultado=unNumero+otroNumero;
		return resultado;
}
float Restar(float unNumero, float otroNumero){
	float resultado;
	resultado=unNumero-otroNumero;
		return resultado;
}
float Dividir(float unNumero, float otroNumero){
	float resultado;
	resultado=unNumero/otroNumero;
		return resultado;
}
float Multiplicar(float unNumero, float otroNumero){
	float resultado;
	resultado=unNumero*otroNumero;
	return resultado;
}



int Factorial(int numero){
	int resultado;

		if(numero==1){
			return 1;
		}

		resultado=numero*Factorial(numero-1);


		return resultado;
}

