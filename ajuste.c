#include <stdio.h>
FILE* leitura;
int main()
{  
   int i;
   double x[10], y1[10];
   
   
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
   
   	
