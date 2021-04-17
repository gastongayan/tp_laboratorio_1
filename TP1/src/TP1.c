/*
 ============================================================================
 Name        : TP1.c
 Author      : Gaston A. Gayan
 Version     :
 Copyright   : 1 F
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "FuncionesTP1.h"

int main(void) {

	//DECLARACION DE VARIABLES

	int numeroA;
	int numeroB;
	int opcion;
	int suma;
	int resta;
	int multiplicacion;
	float division;
	unsigned long int factorial;

	setbuf(stdout, NULL);

	do{

		//MENU
		printf("1. Ingresar numero A \n");
		printf("2. Ingresar numero B \n");
		printf("3. Calcular operaciones \n");
		printf("4. Resultados \n");
		printf("5. Salir \n");
		printf("Ingrese una opcion:\n");
		scanf("%d", &opcion);
		printf("\n");

		switch(opcion)
		{

			case 1: //SOLICITO AL USUARIO QUE INGRESE NUMERO A
				numeroA = PedirNumero();
				printf("\n");
			break;

			case 2: //SOLICITO AL USUARIO QUE INGRESE NUMERO B
				numeroB = PedirNumero();
				printf("\n");

			break;

			case 3: //CALCULO DE OPERACIONES

				printf("CALCULO DE OPERACIONES\n");
				multiplicacion = Multiplicar(numeroA, numeroB);
				suma = Sumar(numeroA, numeroB);
				resta = Restar(numeroA, numeroB);
				division = Dividir(numeroA, numeroB);
				factorial = Factorial(numeroA);
				printf("\n \n");

			break;

			case 4: //IMPRESION DE RESULTADOS

				printf("            RESULTADOS \n");
				printf("NUMERO A: %d           NUMERO B: %d \n",numeroA, numeroB);
				printf("\n \n");
				printf("SUMA: %d \n",suma);
				printf("RESTA: %d \n",resta);
				printf("MULTIPLICACION: %d \n",multiplicacion);
				if(numeroB!=0){
					printf("DIVISION: %.2f \n",division);
				}else{
					printf("DIVISION: NO SE PUEDE DIVIDIR POR 0 \n");
				}
				printf("FACTORIAL DE NUMERO A: %ld",factorial);
				printf("\n \n");

			break;

			case 5: // OPCION DE SALIR

				printf("\n \n");
				printf("...PROGRAMA TERMINADO....");

			break;
		}

	}while(opcion!=5);

}
