#include <stdio.h>
#include <stdlib.h>

/*
 * \brief				Nos devuelve mediante un puntero el número máximo de un array
 *
 * \param array			El array que va a ser leído
 * \param limite		El número de elementos que tiene el array
 * \param resultado		El puntero por donde se va a devolver el número máximo
 *
 * \return				Retorno 0 si salió todo bien, o -1 si hubo un error al llamar los argumentos de la función
 * */
int arr_calcularMaximoInt(int* array,int limite, int* resultado)
{
	int retorno = -1;
	*resultado = array[0];

	if(array != NULL && limite > 0 && resultado != NULL)
	{
		for(int i = 0; i < limite; i++)
		{
			if(array[i] > *resultado)
			{
				*resultado = array[i];
			}
		}
		retorno = 0;
	}

	return retorno;
}

/*
 * \brief				Nos devuelve mediante un puntero el número mínimo de un array
 *
 * \param array			El array que va a ser leído
 * \param limite		El número de elementos que tiene el array
 * \param resultado		El puntero por donde se va a devolver el número mínimo
 *
 * \return				Retorno 0 si salió todo bien, o -1 si hubo un error al llamar los argumentos de la función
 * */
int arr_calcularMinimoInt(int* array,int limite, int* resultado)
{
	int retorno = -1;
	*resultado = array[0];

	if(array != NULL && limite > 0 && resultado != NULL)
	{
		for(int i = 0; i < limite; i++)
		{
			if(array[i] < *resultado)
			{
				*resultado = array[i];
			}
		}
		retorno = 0;
	}

	return retorno;
}

/*
 * \brief				Nos devuelve mediante un puntero el promedio de la suma de un array
 *
 * \param array			El array que va a ser leído
 * \param limite		El número de elementos que tiene el array
 * \param resultado		El puntero por donde se va a devolver el promedio
 *
 * \return				Retorno 0 si salió todo bien, o -1 si hubo un error al llamar los argumentos de la función
 * */
int arr_calcularPromedioInt(int* array,int limite, float* resultado)
{
	int retorno = -1;
	int acumulador = 0;

	if(array != NULL && limite > 0 && resultado != NULL)
	{
		for(int i = 0; i < limite; i++)
		{
			acumulador += array[i];
		}
		*resultado = (float)acumulador / limite;
		retorno = 0;
	}

	return retorno;
}

/*
 * \brief				Nos devuelve mediante un puntero la suma de todos los elementos de un array
 *
 * \param array			El array que va a ser leído
 * \param limite		El número de elementos que tiene el array
 * \param resultado		El puntero por donde se va a devolver la suma de todos los elementos del array
 *
 * \return				Retorno 0 si salió todo bien, o -1 si hubo un error al llamar los argumentos de la función
 * */
int arr_calcularSumaInt(int* array,int limite, float* resultado)
{
	int retorno = -1;
	int acumulador = 0;

	if(array != NULL && limite > 0 && resultado != NULL)
	{
		for(int i = 0; i < limite; i++)
		{
			acumulador += array[i];
		}
		*resultado = acumulador;
		retorno = 0;
	}

	return retorno;
}
