
/** 
 * @version 5.11.4.9.2
 * @date 27/11/2020
 * @author Jocelyn_Hernandez_Javier
 * @brief Colocar los valores 
 */#include "ic_0301_04_10_2020_Jocelyn_Hernandez_Javier_simplex.h"

//@param Utilizamos enteros en este caso int
int leeDatos(int *var){
int rest,c,i; //@param Declaramos en enteros rest,c,i

	
	//@param Mandar a imprimir a pantalla con printf	
	printf(" __________---> FUNCION OPTIMIZAR <---__________ \n\n\nIngrese el numero de variables: ");
	scanf("%d",var);
	
	printf("\nTen en cuenta que: c1.X1+c2.X2+...cn.Xn = b \n\n");
	/**
	@param Se debe tomar en cuenta la formula del metodo simplex 
    @param Declaramos un for para que realize la  operacion
	@param Destacamos que c es la funcion 
	@param Para rest el numero de restricciones 
	@param Y para i es el termino independiente 
	@param Estos datos se le piden a el usuario y se guardan en rest,c,i y var que serviran para sacar las matrices
	@return Esto nos retornara un rest
	*/
	
	//@param Se hace uso de un for
	for(c=0;c<*var;c++)
	{
		
		printf(" c%d: ", c+1);
		scanf("%lf",&funcion[c]);
		fflush(stdin);
		
		}
		
	
		printf("\n  Ingresa el numero de Restricciones: ");
		scanf("%d",&rest);
		
		fflush(stdin);
		
		for(i=0;i<rest;i++)
		{
			
			printf("Restriccion %d\n",i+1);
			for(c=0;c<*var;c++)
			{
				
				printf(" c%d: ",c+1);
				scanf("%lf",&restricciones[i][c]);
				fflush(stdin);
			}
			printf("Introduce el Independiente ");
			scanf("%lf", &independiente[i]);
			fflush(stdin);
			}
			
			return rest;
			
	}
