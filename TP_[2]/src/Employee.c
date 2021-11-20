#include "input.h"
#include "Employee.h"
/// @fn int initEmployees(eEmployee[], int)
/// @brief Inicia el array de estructuras con todas las posiciones en 0
/// @param list array de estructuras que recibe
/// @param len largo del array
/// @return retorna 1 si se logro y 0 sino se completo la inicializacion
int initEmployees(eEmployee list[], int len){
	int rtn;
	int i;
	rtn=0;
	for(i=0;i<len;i++){
		list[i].isEmpty=TRUE;
		if(i==(len-1)){
			rtn=1;
		}
	}
return rtn;
}
/// @fn int checkEmptyList(eEmployee[], int)
/// @brief Chequea que el array no este vacio
/// @param list array de estructuras que recibe
/// @param len largo del array
/// @return retorna 1 si el array esta cargado y 0 si esta vacio
int checkEmptyList(eEmployee list[], int len){
	int i;
	int check;
	check=0;
	for(i=0;i<len;i++){
		if(list[i].isEmpty==LOAD){
			check=1;
		}
	}

	if(check==0){
		printf("\nLa lista está vacía, ingrese un empleado primero.\n");
	}
	return check;
}
/// @fn int addEmployee(eEmployee[], int, int*)
/// @brief Pide el ingreso de todos las variables de la estructura para cargar una posicion del array
/// @param list array de estructuras que recibe
/// @param len largo del array
/// @param idAutomatico parametro para generar un id y que se conserve si se agrega mas empleados
/// @return retorna 1 si se logro y 0 sino se logró
int addEmployee(eEmployee list[], int len, int* idAutomatico)
{
	int rtn;
	int aux;
	int auxID;
	int numero;
	float fnumero;
	rtn=0;
	auxID=*idAutomatico;

	for (int i=0;i<len;i++){
		EmprolijarNombreApellido(list[i].name);
		if(list[i].isEmpty==TRUE){
			list[i].iD=auxID;
			aux=PedirNombreApellidoReintentos ("Ingrese nombre:", list[i].name);
			if(aux==1){
							break;
			}
			aux=PedirNombreApellidoReintentos ("Ingrese apellido:", list[i].lastName);
			if(aux==1){
										break;
						}
			aux=PedirFloatValidacionReintentos ("Ingrese salario: ", &fnumero);
			if(aux==1){
							break;
						}
			list[i].salary=fnumero;
			aux=PedirEnteroValidacionReintentos ("Ingrese sector: ", &numero);
			if(aux==1){
				break;
			}
			list[i].sector=numero;
			list[i].isEmpty=LOAD;
	 	auxID+=1;
	 	*idAutomatico=auxID;
	 	rtn=1;
	 	break;
		}

		}
 return rtn;
}
/// @fn int findEmployeeById(eEmployee[], int, int)
/// @brief Busca un id en el array de estructuras
/// @param list array de estructuras que recibe
/// @param len tamaño del array
/// @param id que va a buscar en el array
/// @return retorna 1 si se logro, 0 si hubo error
int findEmployeeById(eEmployee list[], int len,int id){
	int i;
	int rtn;
	for(i=0;i<len;i++){
		if(id==list[i].iD&&list[i].isEmpty==LOAD){
			rtn=i;
			break;
		}
		else{
			rtn=0;
		}
	}


	return rtn;
}
/// @fn int editEmployee(eEmployee[], int)
/// @brief Se pide un id y se usa una funcion para buscarlo, luego se le pide que ingrese que parametro desea modificar. Se modifica y termina la funcion
/// @param list array de estructuras que recibe
/// @param len tamaño del array
/// @return retorna 0 si hubo error y 1 si se logro editar el array
int editEmployee(eEmployee list[], int len){
	int rtn;
	int id;
	int indice;
	int opcion;
	int aux;
	float fnumero;
	int numero;
	rtn=0;
	aux=PedirEnteroValidacionReintentos ("\nIngrese el ID del empleado que desea modificar:", &id);
				if(aux==1){
					rtn=0;
					return rtn;
				}
	indice=findEmployeeById(list,len,id);
	if(indice!=0){
	printf("\tMENÚ DE MODIFICACIÓN\n"
			"1) Modificar nombre.\n"
			"2) Modificar apellido.\n"
			"3) Modificar salario.\n"
			"4) Modificar sector.\n"
			"5) Salir.\n");
	aux=PedirEnteroRangoValidacionReintentos ("\nIngrese opcion: ", 1, 5, &opcion);
		if(aux==1){
			rtn=0;
			return rtn;
		}
	switch(opcion){
	case 1:
		aux=PedirNombreApellidoReintentos ("\nIngrese el nuevo nombre: ", list[indice].name);
			if(aux==1){
				rtn=0;
				return rtn;
			}
		rtn=1;
		break;
	case 2:
		aux=PedirNombreApellidoReintentos ("\nIngrese el nuevo apellido: ", list[indice].lastName);
			if(aux==1){
				rtn=0;
				return rtn;
			}
		rtn=1;
		break;
	case 3:
		aux=PedirFloatValidacionReintentos ("\nIngrese nuevo salario: ", &fnumero);
					if(aux==1){
						rtn=0;
						return rtn;
					}
		list[indice].salary=fnumero;
		rtn=1;
		break;
	case 4:
		aux=PedirEnteroValidacionReintentos ("\nIngrese nuevo sector: ", &numero);
						if(aux==1){
							rtn=0;
							return rtn;
						}
		list[indice].salary=numero;
		rtn=1;
		break;
	case 5:
		rtn=1;
	}
	}
	else{
		printf("No se ha encontrado el empleado.");
		rtn=0;
	}

	return rtn;
}

/// @fn int removeEmployee(eEmployee[], int)
/// @brief Se ingresa un ID y se da de baja si se encuentra el empleado en al array
/// @param list array de estructuras que recibe
/// @param len tamaño del array
/// @return retorna 0 si hubo error, y 1 si se logro dar de baja
int removeEmployee(eEmployee list[], int len)
{	int auxID;
	int pos;
	int rtn;
	int aux;
	aux=PedirEnteroValidacionReintentos ("\nIngrese el ID del empleado a dar de baja:", &auxID);
		if(aux==1){
			rtn=0;
			return rtn;
		}
	pos=findEmployeeById(list, len,auxID);
	if(pos!=0){
	list[pos].isEmpty=TRUE;
	rtn=1;
	}
	else{
		printf("No se ha encontrado el empleado.");
		rtn=0;
	}
 return rtn;
}
/// @fn int sortEmployees(eEmployee[], int, int)
/// @brief Funcion que ordena un array de estructuras de menor a mayor o de mayor a menor segun el apellido y el sector
/// @param list array de estructuras que recibe
/// @param len tamaño del array
/// @param order entero que indica el orden que se va a llevar a cabo
/// @return retorna 0 si no se pudo ordenar y 1 si se ordenó
int sortEmployees(eEmployee list[], int len, int order)
{
	int flag;
	int rtn;
	rtn=0;
	eEmployee aux;
	int i;
	int j;
	for(i=0;i<len-1;i++){
		for(j=i+ 1;j<len;j++){
			flag=0;
			if((strcmp(list[i].lastName, list[j].lastName)>0)){
				flag=1;

			}
			else if(strcmp(list[i].lastName, list[j].lastName)==0 && list[i].sector>list[j].sector){
				flag=1;

			}
			if(flag==order){

				aux=list[j];
				list[j]=list[i];
				list[i]=aux;

			}


		}
	}
	if(i==len-1&&j==len){
	rtn=1;
	}
 return rtn;
}

/// @fn int printEmployees(eEmployee[], int)
/// @brief Imprime todos los empleados que esten dados de alta
/// @param list array de estructuras que recibe
/// @param len tamaño del array
/// @return retorna 0 si no se pudieron imprimir los empleados y 1 si se logró
int printEmployees(eEmployee list[], int len){
	int rtn;
	rtn=0;
	int i;

		printf("\n ID\tSECTOR\tAPELLIDO\tNOMBRE\t\t     SALARIO");
	for(i=0;i<len;i++){
		if(list[i].isEmpty==LOAD){
		printf("\n %d\t %d\t%-15s %-20s $%-8.2f", list[i].iD ,list[i].sector, list[i].lastName,list[i].name,list[i].salary);

		rtn=1;
		}
	}


	return rtn;
}
/// @fn int printStats(eEmployee[], int)
/// @brief Imprime las estadisticas como promedio de salario, cuantos estan por arriba del promedio y la suma total de los salarios
/// @param list array de estructuras que recibe
/// @param len tamaño del array
/// @return retorna 1 si se pudo hacer y 0 sino se logró
int printStats(eEmployee list[], int len){
	float suma;
	int cantidadEmpleados;
	int contMayorSalario;
	int rtn;
	int i;
	float promedio;
	rtn=0;
	contMayorSalario=0;
	suma=0;
	cantidadEmpleados=0;
	for(i=0;i<len;i++){
		if(list[i].isEmpty==LOAD){
		suma=suma+list[i].salary;
		cantidadEmpleados++;
		}
	}
	promedio=suma/cantidadEmpleados;
	for(i=0;i<len;i++){
			if(list[i].isEmpty==LOAD){
				if(list[i].salary>promedio){
					contMayorSalario++;
				}
			}
		}
	if(cantidadEmpleados!=0){
		rtn=1;
	}
	printf("\nEl total de la suma de todos los salarios es: $ %f",suma);
	printf("\nEl promedio de los salarios es de: $%f", promedio);
	printf("\nLa cantidad de empleados que superan el promedio salarial es de: %d", contMayorSalario);

	return rtn;
}




