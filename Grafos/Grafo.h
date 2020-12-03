/**
 * @file Grafo.h
 * @version 5.11.4.9.2
 * @date 28/11/2020
 * @author Jocelyn Hernandez Javier
 * @brief Declaracion de las funciones
 */
 
#ifndef __GRAFO_H
#define __GRAFO_H

# include <stdio.h>
# include <stdlib.h>

#define TAM 110
#define LIMITE 8
/**
 * @brief Definicion de filas
 */
 
 //@param Utilizamos un entero para filas
int filas;

/**
 * @brief Inicializa los valores
 * @param Para g es el grafo
 * @param filas Son las filas
 * @return Un valor vacio
 */
 
 //@param Hacemos uso de un void
void inicializar(int g[][filas]);

/**
 * @brief Busca el nodo final
 * @param La g es el grafo
 * @param filas Son las filas
 * @param final Es el valor final
 * @return Un valor entero
 */
int BuscarNodoFinal(int g[][filas], int final,int I);

/**
 * @brief Llena la matriz para indicar que se puede llegar al nodo final
 * @param La g es el grafo
 * @param filas Son las filas
 * @param Inicio es el nodo de donde inicia
 * @param final Es el valor final
 * @param Nsucesor Es el nodo sucesor
 * @return Un valor entero
 */
int Principal(int g[][filas],int inicio,int final,int NSucesor);

/**
 * @brief Se comparan los nodos
 * @param g inicia
 * @param filas Son las filas
 * @param i comparacion del nodo
  * @param inicio Es el nodo de inicio  
 * @param Nsucesor Es el nodo sucesor
 * @return Un valor entero
 */
int CompararconnodoInicio(int go[][filas],int i,int inicio,int NSucesor);

/**
 * @brief Evalua si existe un camino
 * @param g grafo 
 * @param filas Son las filas
 * @param inicio Es el nodo de inicio  
 * @param Final es el final del nodo
 * @return Un valor entero
 */
int menuDos(int g[][filas],int inicio,int final);

#endif
