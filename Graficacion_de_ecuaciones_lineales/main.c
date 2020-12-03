#include "gnuplot_i.h"


int main(){
	
    int m=0, b=0,r1=0 , r2=0;
    

    printf("ingrese el valor de m-> ");
    scanf("%d",&m);
    printf("ingrese el valor de b-> ");
    scanf("%d",&b);
    printf("ingrese el rango inicial ");
    scanf("%d",&r1);
    printf("Deme el rango final: ");
    scanf("%d",&r2);
    gnuplotT(m,b,r1,r2);
    impresionPuntos(r1,r2,m,b);
    return 0;
}
