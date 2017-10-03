#include <stdio.h>
#include <math.h>
FILE* leitura;

void coeficientes(double x1[10], double y1[10])
{	 double a0, a1;
    int i;
    float soma1=0, soma2=0;
    
    for(i=0;i<10;i++)
    {   
       soma1 = soma1 + x[i]*x[i];
       
    
     
    }

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
   
   	
