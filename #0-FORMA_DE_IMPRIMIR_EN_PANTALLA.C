
/*
	@DEQ2000 - CompuHiperMegaRed(YouTube)
	PROGRAMA EN C SOBRE UNA MANERA DE ESCRIBIR EN PANTALLA
*/



// #include "DEQ_PRINT.H"
#ifndef __DEQ_PRINT_H__
#define __DEQ_PRINT_H__
#include <stdio.h>
#include <string.h>
#ifdef __cplusplus
	extern "C" {
#endif


/*
	@DEQ2000 - CompuHiperMegaRed(YouTube)
	PROGRAMA EN C SOBRE UNA MANERA DE ESCRIBIR EN PANTALLA
*/



void PRINT( const char x[] );
void PRINT( const char x[] ){ fwrite( x, 1, strlen(x), stdout ); return; }



#ifdef __cplusplus
	}
#endif
#endif

int main( void ){

	printf( "HOLA\nMUNDO" );
	printf("\n");
	const char MSG[] = "Hola Mundo Programacion - por DEQ2000:\nPrograma es en: C";
	PRINT( MSG );

	return 0;
}