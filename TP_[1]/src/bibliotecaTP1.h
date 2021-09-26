/*
 * bibliotecaTP1.h
 *
 *  Created on: 18 sep. 2021
 *      Author: faust
 */

#ifndef BIBLIOTECATP1_H_
#define BIBLIOTECATP1_H_

#include <stdio.h>
#include <stdlib.h>



/// @fn float PedirFloat(char[])
/// @brief Recibe una cadena de caracteres para mostar un mensaje, en una funcion donde se piden numeros flotantes.
/// @param mensaje
/// @return retorna un numero flotante
float PedirFloat(char mensaje[]);
/// @fn float Sumar(float, float)
/// @brief suma un numero que se ingrese con el segundo numero que se ingrese
/// @param se ingresa un numero flotante
/// @param se ingresa otro numero flotante
/// @return la suma de 2 numeros flotantes
float Sumar(float, float);
/// @fn float Restar(float, float)
/// @brief resta el primer numero que se ingrese, con el segundo numero que se ingrese
/// @param un numero flotante
/// @param un numero flotante
/// @return retorna el resultado de una resta de numeros flotante.
float Restar(float, float);
/// @fn float Dividir(float, float)
/// @brief divide el primer numero que se ignresa por el segundo numero que se ingresa
/// @param se ingresa el dividendo
/// @param se ingresa el divisor
/// @return retorna el resultado de la division
float Dividir(float, float);
/// @fn float Multiplicar(float, float)
/// @brief Multiplica 2 numeros que se ingresen
/// @param primer numero que multiplica
/// @param segundo numero que multiplica
/// @return retorna el resultado de la multiplicacion de ambos numeros flotantes
float Multiplicar(float, float);
/// @fn float Factorial(int)
/// @brief Se ingresa un numero entero para hacer el factorial del msimo
/// @param Numero del que se hace el factorial
/// @return Retorna un numero entero que es el resultado del factorial
float Factorial(int);


#endif /* BIBLIOTECATP1_H_ */


//resumen de la funcion
//parametros
//lo que retorna
