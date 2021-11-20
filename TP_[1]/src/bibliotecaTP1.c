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

int ValidarFactorial(float numero){
	int rtn=0;
	int numeroEntero;
	if(numero>=0&&numero<=12){
		numeroEntero=numero;
		if(numero-numeroEntero==0){
		rtn=1;
		}
	}
	return rtn;
}

unsigned long Factorial(int numero){
	int i;
	int fact=1;
	int resultado;
	   for(i=1;i<=numero;i++){
	     fact=fact*i;
	 }
	 resultado=fact;
	return resultado;
	}


