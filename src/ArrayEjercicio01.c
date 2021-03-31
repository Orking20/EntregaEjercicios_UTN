/*
 ============================================================================
 Name        : Array.c
 Author      : Mateo Luchetti Capalbo
 Version     :
 Copyright   : Your copyright notice
 Description : Funcion que se va a encargar de: EN EL MAIN pedimos una cantidad de edades
 	 	 	   Luego una funcion que calcule el maximo
 	 	 	   Una que calcule el minimo
 	 	 	   Una que calcule el promedio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define LEN_LISTA 5

int main(void)
{
	int listaEdades[LEN_LISTA];
	int maximo;
	int minimo;
	float promedio;
	float resultadoSuma;

	for(int i = 0; i < LEN_LISTA; i++)
	{
		printf("Ingrese el número %d: ", i + 1);
		scanf("%d", &listaEdades[i]);
	}

	if(arr_calcularMaximoInt(listaEdades, LEN_LISTA, &maximo) == 0)
	{
		printf("El número máximo del array es: %d\n", maximo);
	}
	else
	{
		printf("Hubo algún error en los argumentos de la función\n");
	}

	if(arr_calcularMinimoInt(listaEdades, LEN_LISTA, &minimo) == 0)
	{
		printf("El número mínimo del array es: %d\n", minimo);
	}
	else
	{
		printf("Hubo algún error en los argumentos de la función\n");
	}

	if(arr_calcularPromedioInt(listaEdades, LEN_LISTA, &promedio) == 0)
	{
		printf("El promedio del array es: %0.2f\n", promedio);
	}
	else
	{
		printf("Hubo algún error en los argumentos de la función\n");
	}

	if(arr_calcularSumaInt(listaEdades, LEN_LISTA, &resultadoSuma) == 0)
	{
		printf("La suma de todos los elementos del array es: %0.2f\n", resultadoSuma);
	}
	else
	{
		printf("Hubo algún error en los argumentos de la función\n");
	}

	return EXIT_SUCCESS;
}
