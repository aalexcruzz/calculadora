#include<stdio.h>
int opc,d1=0,d2=0,r1=0,c1=0;
float r2=0,d3=0,d4=0;

void Sumar();
void Restar();
void Multi();
void Divid();
int main ()
{

		do
		{
			printf("Calculadora\n" ) ;
			printf("Que operacion desea realizar: \n \n");
			printf("1.Suma \n");
			printf("2.Resta \n");
			printf("3.Multiplicacion \n");
			printf("4.Salir \n");

		scanf("%d",&opc ) ;
		switch (opc)
		{
		case 1: 
			Sumar( ) ;
			break;
		case 2: 
			Restar( ) ;
			break;
		case 3: 
			Multi( ) ;
			break;
		case 4:
			return 0 ;
			break;
		default:printf("--ERROR-- -opcion invalida-" ) ;
}
} while (opc!=4 ) ;
return 0;
			}
				void Sumar()
			{
			do
			{
				printf("Primer dato:");
				scanf("%d",&d1);
				printf("Segundo dato:") ;
				scanf("%d",&d2 ) ;
				r1=d1+d2;
				printf("%d + %d = %d \n",d1,d2,r1 ) ;
				printf("Desea continuar sumando? \n"); 
				printf("1-Si \n2-No \n") ;
								
				
			scanf("%d",&c1 );
			} while (c1==1 );
			}
				void Restar()
			{
			do
			{

			} while (c1==1 ) ;
			}
				void Multi()
			{
			do
			{
				printf("Primer dato:");
				scanf("%d",&d1);
				printf("Segundo dato:") ;
				scanf("%d",&d2 ) ;
				r1=d1*d2;
				printf("%d x %d = %d \n",d1,d2,r1 ) ;
				printf("Desea continuar multiplicando? \n"); 
				printf("1-Si \n2-No \n") ;
				
			scanf("%d",&c1 ) ;
			} while (c1==1 ) ;

			} 








	 

