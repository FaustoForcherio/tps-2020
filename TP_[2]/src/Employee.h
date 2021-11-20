#include "input.h"

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#define LOAD 1
#define TRUE 0
#define TAM 1000

struct{
 int iD;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}typedef eEmployee;

int initEmployees(eEmployee list[], int len);
int checkEmptyList(eEmployee list[], int len);
int addEmployee(eEmployee list[], int len,int* idAutomatico);
int findEmployeeById(eEmployee list[], int len,int id);
int editEmployee(eEmployee list[], int len);
int removeEmployee(eEmployee list[], int len);
int sortEmployees(eEmployee list[], int len, int order);
int printEmployees(eEmployee list[], int length);
int printStats(eEmployee list[], int len);

#endif
