#include<stdio.h>
#define BITS 64
#define BITS2 64

int opc,d1=0,d2=0,r1=0,c1=1;
int i = 0, recordatorio = 0, suma[64];
int Numbin[64];
int Numbin2[64];
int binario, binario2;
int Numdec, Numdec2;
int contador, contador2;


void Sumar();
//void Restar();
//void Multi();
int main ()
{
	
		do
		{
			printf("Calculadora \n" ) ;
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
			//Restar( ) ;
			break;
		case 3: 
			//Multi( ) ;
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
					Numbin[contador]=binario;
				}
				
				printf("\nSegundo dato: ") ;
				scanf("%d",&Numdec2 ) ;
				for ( contador2 = 0; contador2 <= BITS2; contador2++ ) {
				Numbin2[contador2] = Numdec2 % 2;
				Numdec2 = Numdec2/ 2;
				}
				for ( contador2 = BITS2; contador2 >= 0; contador2-- ) {
				printf("%d", Numbin2[contador2]);
				Numbin2[contador2]=binario2;
				}
				
				while ( binario!= 0 || binario2 != 0)

						{

							suma[i++] = binario % 10 + binario2 % 10 + recordatorio % 2;
							recordatorio =Numbin[contador]  % 10 + binario2 % 10 + recordatorio / 2;
							binario =binario2 / 10;
							binario= binario2 / 10;

						}

						if (recordatorio != 0)
							suma[i++] = recordatorio;
							--i;

						printf("Suma de dos numeros binarios : ");

						while (i >= 0)

					printf("%d", suma[i--]);
					
					//~ printf("%d", Numbin[contador]);
		
	
			printf("\n");
			} while (c1==1 );						
			
			
			void Restar()
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
					Numbin[contador]=binario;
				}
				
				printf("\nSegundo dato: ") ;
				scanf("%d",&Numdec2 ) ;
				for ( contador2 = 0; contador2 <= BITS2; contador2++ ) {
				Numbin2[contador2] = Numdec2 % 2;
				Numdec2 = Numdec2/ 2;
				}
				for ( contador2 = BITS2; contador2 >= 0; contador2-- ) {
				printf("%d", Numbin2[contador2]);
				Numbin2[contador2]=binario2;
				}
				
				while ( binario!= 0 || binario2 != 0)

						{

							suma[i++] = binario % 10 + binario2 % 10 + recordatorio % 2;
							recordatorio =Numbin[contador]  % 10 + binario2 % 10 + recordatorio / 2;
							binario =binario2 / 10;
							binario= binario2 / 10;

						}

						if (recordatorio != 0)
							suma[i++] = recordatorio;
							--i;

						printf("Resta de dos numeros binarios : ");

						while (i >= 0)

					printf("%d", suma[i--]);
					
					//~ printf("%d", Numbin[contador]);
				

			scanf("%d",&c1 );
			printf("\n");
			} while (c1==1 ) ;
			}
			
			
			
			} 








	 

