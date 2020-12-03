/**
 
 * @version 5.11.4.9.2
 * @date 27/11/2020
 * @author Jocelyn_Hernandez_Javier
 * @brief Optimizacion del metodo simplex 
 */

#ifndef __ic_0301_05_10_2020_Jocelyn_Hernandez_Javier_simplex_H
#define __ic_0301_05_10_2020_Jocelyn_Hernandez_Javier_simplex_H

/**
 *@brief Librerias
 */
#include <stdio.h>
#include <stdlib.h>
/**
 *@brief Definimos la cantidad maxima en este caso es 10
 */
#define MAX 10
/**
 *@brief Definimo la cantidad de restriccione que es 3
 */
#define RESTRICCION 3

/**
 * @brief Indica las funciones maximas 
 * @param MAX Cantidad de funciones maximas 
 * @return Un valor double 
 */
double funcion[MAX];

/**
 * @brief Indicamos las restricciones maximas 
 * @param MAX Cantidad de funciones maximas 
 * @param (RESTRICCION) Hace referencia a las restricciones que se tendran
 * @return Como arriba utilizamos un valor double 
 */
double restricciones[MAX+1][MAX+RESTRICCION];

/**
 * @brief Indicamos las restricciones independientes 
 * @param (RESTRICCION) La definimos como la cantidad de restricciones independientes 
 * @return Igualmente se hace uso de un valor double 
 */
double independiente[RESTRICCION];


#endif

