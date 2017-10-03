#include <stdio.h>
#include <math.h>
FILE* leitura;

void coeficientes(double x1[10], double y1[10])
{	 ddouble a0, a1;
    int i, n=10;
    float soma1=0, soma2=0, soma3=0, soma4=0;
    
    for(i=0;i<n;i++)
    {   
       soma1 = soma1 + x[i]*x[i];
       soma2 = soma2 + y1[i];
       soma3 = soma3 + x[i]*y1[i];
       soma4 = soma4 + x[i];
    
    }   
    printf("\nSoma1 =%.2f\n", soma1);
    printf("\nSoma2 = %.2f\n", soma2);
    printf("\nSoma3 = %.2f\n", soma3);
    printf("\nSoma4 = %.2f\n", soma4);
       
    a0 = ( (soma1*soma2) - (soma3*soma4) ) / ( (n*soma1) - (soma4*soma4) );
    a1 = ( (n*soma3) - (soma4*soma2) ) / ( (n*soma1) - (soma4*soma4) );
    
    printf("\nCoeficientes encontrados:\n");
    printf("a0 = %f\n", a0);
    printf("a1 = %f\n", a1);  


}
int main()
{  
   int i;
   double x[10], y1[10], a0, a1;
   
   
   leitura=fopen("dados.dat","r");
   
//Fazendo a leitura dos dados
   
   for(i=0;i<10;i++)
   { 	
   	fscanf(leitura, "%lf\t%lf\t", &x[i], &y1[i]);
   }

//Imprimindo os dados

	for(i=0;i<10;i++)
	{
		printf("%.1lf\t%.1lf\t", x[i],y1[i]);
		printf("\n");
   }   		   
   
   
   fclose(leitura);
   
   
   
   
}   
   
   	
