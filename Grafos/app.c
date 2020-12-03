/** 
 * @file app.c
 * @version 5.11.4.9.2
 * @date 28/11/2020
 * @author Jocelyn Hernandez Javier
 * @brief Introducen los datos 
 */
#include "Grafo.h"

int main(){
	/**
	 * @ Declaramos los datos
	 */
	int g[filas][filas];
		int inicio;  //@param Utilizamos enteros como inicio y final
		int final;
		printf("\nNodo inicio:  ");
		scanf("%d",&inicio);	fflush(stdin);
		inicio=inicio-1;
		printf("\nNodo final:  ");
		scanf("%d",&final);		fflush(stdin);
		final=final-1;
		
		inicializar(g);
		if(menuDos(g,inicio,final)== 1){
		}else{ //@param else si no existe un camino
			printf("\nNO EXISTE UN CAMINO ");
		}

}
