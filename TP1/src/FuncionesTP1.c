/*
 * FuncionesTP1.c
 *
 *  Created on: 10 abr. 2021
 *      Author: gasto
 */

#include <stdio.h>
#include <stdlib.h>
#include "FuncionesTP1.h"

//FUNCION QUE PIDE NUMERO
int PedirNumero()
{
	int numero;

	printf("Ingrese numero: ");
	scanf("%d", &numero);

	return numero;

}

//FUNCION SUMA
int Sumar(int A, int B)
{
	int resultado;

	resultado=A+B;

	return resultado;
}

//FUNCION RESTA
int Restar (int A, int B)
{
	int resultado;

	resultado=A-B;

	return resultado;
}

//FUNCION DIVISION
float Dividir (int A, int B)
{
	float resultado;

	if (B==0){
		printf("No se puede dividir por 0 \n");
	}else{
		resultado = A/B;
		return resultado;
	}
	return 0;
}

int Multiplicar(int A, int B)
{
	int resultado;

	resultado = A * B;

	return resultado;
}

unsigned long int Factorial(int A)
{
	int i;
	unsigned long int resultado;
	resultado=1;

	for(i=A;i>0;i--)
	{
		resultado=resultado*i;
	}
	return resultado;
}

/*void ImprimirResultados(int multiplicacion, int suma, int resta,  int division, long factorial, int numeroA, int numeroB){
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
	printf("FACTORIAL DE NUMERO A: %l",factorial);
	printf("\n \n");
}*/
