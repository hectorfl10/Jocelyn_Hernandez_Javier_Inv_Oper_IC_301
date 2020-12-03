/**
 * @file Grafo.c
 * @version 5.11
 * @date 28/11/2020
 * @author Jocelyn Hernandez Javier
 * @brief Se inicaliza cada una de las funciones
 */
#include "Grafo.h"

//@para Utilizamos un void
void inicializar(int g[][filas]){
	for(int i=0; i<filas;i++){ //@param Al igual que for 
		for(int j=0; j<filas;j++){
			g[i][j]=0;
		}
	}

	g[1][2]=1;
	g[1][5]=1;
	g[2][3]=1;
	g[3][4]=1;
	g[5][3]=1;
	g[6][5]=1;

}

int BuscarNodoFinal(int g[][filas], int final,int I){
	for( int i=I; i<filas;i++){
		if(g[i][final]==1){
			return i;
			}
	}
	return 0;
}

int Principal(int g[][filas],int inicio,int final,int NSucesor){
	for(int i=0;i<filas;i++){
		if((g[i][NSucesor])==1){
			g[i][final]=1;	
			if((CompararconnodoInicio(g,i,inicio,NSucesor))==1){
				return 1;
				break;
			}
		}
	}
	return 0;
	
}
int menuDos(int g[][filas],int inicio,int final){
	int n=0,Sucesor=0;
	int i=0;
		while(n !=1){
			Sucesor= BuscarNodoFinal(g,final,Sucesor);
			if(CompararconnodoInicio(g,i,inicio,Sucesor)==1){
			break;}
			if(Sucesor==0){break;}	
			n=Principal(g, inicio,final,Sucesor);
		 i++;
			Sucesor=Sucesor+1;
		}
}

int CompararconnodoInicio(int g[][filas],int i,int inicio,int NSucesor){
	
	for (int j=0; j<filas; j++){
				if(inicio == NSucesor){
					printf("SI EXISTE UN CAMINO \n");
					return 1;
					break;
			}
	}
	
	return 222;
}

