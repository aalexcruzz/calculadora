#include<stdio.h>
#define BITS 64
#define BITS2 64

int opc,d1=0,d2=0,r1=0,c1=0;

int Numbin[64];
int Numbin2[64];
int Numdec;
int Numdec2;
int contador;
int contador2;

void Sumar();
void Restar();
void Multi();
int main ()
{
	
		do
		{
			printf("Calculadora binaria a hexadecimal \n" ) ;
			printf("Que operacion desea realizar: \n \n");
			printf("1.Suma \n");
			printf("2.Resta \n");
			printf("3.Multiplicacion \n");
			printf("4.Salir \n \n");
		
		printf("Elija un numero: ");
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
				scanf("%d",&Numdec);
				
				for ( contador = 0; contador <= BITS; contador++ ) {
				Numbin[contador] = Numdec % 2;
				Numdec = Numdec / 2;
				}
				for ( contador = BITS; contador >= 0; contador-- ) {
					printf("%d", Numbin[contador]);
				}
				
				printf("Segundo dato: ") ;
				scanf("%d",&Numdec2 ) ;
				for ( contador2 = 0; contador2 <= BITS2; contador2++ ) {
				Numbin2[contador2] = Numdec2 % 2;
				Numdec2 = Numdec2/ 2;
				}
				for ( contador2 = BITS2; contador2 >= 0; contador2-- ) {
				printf("%d", Numbin2[contador2]);
				}
				
				r1=Numdec+Numdec2;
				//printf("%d + %d = %d \n \n",Numdec,Numdec2,r1 ) ;
				printf("\n Desea continuar sumando? \n"); 
				printf("1-Si \n2-No \n \n") ;
				printf("Elija un numero: ");
					
				
			scanf("%d",&c1 );
			printf("\n");
			} while (c1==1 );
			}
				void Restar()
			{
			do
			{
				

			scanf("%d",&c1 );
			printf("\n");
			} while (c1==1 ) ;
			}
				void Multi()
			{
			do
			{
				
			scanf("%d",&c1 ) ;
			printf("\n");
			} while (c1==1 ) ;






			} 








	 

