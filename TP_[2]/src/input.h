
#ifndef INPUT_H_
#define INPUT_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define CleanBuff fflush(stdin)


//NUMEROS
int VerificarNumero(char numero[]);
int PedirEnteroValidacion (char mensaje[]);
int PedirEnteroValidacionReintentos (char mensaje[], int* numero);
int PedirEnteroRangoValidacion (char mensaje[], int minimo, int maximo);
int PedirEnteroRangoValidacionReintentos (char mensaje[], int minimo, int maximo, int* numero);
int VerificarNumeroFlotante(char numero[]);
float PedirFloatValidacion (char mensaje[]);
float PedirFloatRangoValidacion (char mensaje[],int minimo, int maximo);
int PedirFloatValidacionReintentos (char mensaje[],float* numero);
int PedirFloatRangoValidacionReintentos (char mensaje[],int minimo, int maximo, float* numero);
void MostrarIDgenerado(int estado, int* idGenerado);

//STRING
int ValidarSoloLetras(char palabra[]);
void MensajeAlerta(int num, char mensajeA[], char mensajeB[]);
int PedirNombreApellidoReintentos (char mensaje[], char stringIngresado[]);
void EmprolijarNombreApellido(char palabra[]);
#endif /* INPUT_H_ */
