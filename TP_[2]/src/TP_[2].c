/*
 ============================================================================
 Name        : TP_[2].c
 Author      : Fausto Forcherio
 ============================================================================
 */
#include "Employee.h"
#include "input.h"


int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int idAutomatico = 1;
	int resultado;
	int orden;
	int check;
	eEmployee listaEmpleados[TAM];
	initEmployees(listaEmpleados,TAM);

	do{
		printf("\tMENÚ\n"
		"1) Dar de alta empleado.\n"
		"2) Modificar datos de empleado.\n"
		"3) Baja de empleado.\n"
		"4) Informar.\n"
		"5) Salir.\n");
		opcion=PedirEnteroRangoValidacion ("\nIngrese opción: ", 1, 5);
		switch(opcion){
		case 1:
			resultado=addEmployee(listaEmpleados, TAM, &idAutomatico);
			MensajeAlerta(resultado, "\nError al dar de alta.", "\nEl empleado ha sido dado de alta.");
			break;
		case 2:
			check=checkEmptyList(listaEmpleados, TAM);
				if(check==0){
					break;
				}
			resultado=editEmployee(listaEmpleados, TAM);
			MensajeAlerta(resultado, "\nError al modificar empleado.", "\n");
			break;
		case 3:
			check=checkEmptyList(listaEmpleados, TAM);
					if(check==0){
						break;
					}

			resultado=removeEmployee(listaEmpleados, TAM);
			MensajeAlerta(resultado, "\nError al dar de baja.", "\nEl empleado ha sido dado de baja.");
			break;
		case 4:
			check=checkEmptyList(listaEmpleados, TAM);
					if(check==0){
						break;
					}
			check=PedirEnteroRangoValidacionReintentos ("\nIngrese orden (0 para descendente/1 para ascendente): ", 0, 1, &orden);
			if(check==1){
				printf("\nError al ingresar el orden.\n");
				break;
			}
			resultado=sortEmployees(listaEmpleados, TAM, orden);
			MensajeAlerta(resultado, "\nError al ordenar empleados.", "\n");
			resultado=printEmployees(listaEmpleados,TAM);
			MensajeAlerta(resultado, "\nError al imprimir lista de empleados.", "\n");
			resultado=printStats(listaEmpleados, TAM);
			MensajeAlerta(resultado, "\nError al imprimir lista de empleados.", "\n");
			break;
		}

	}while(opcion!=5);

	printf("\nFIN\n");
	return 0;
}
/*Documentar funciones
 */
