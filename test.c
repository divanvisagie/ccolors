#include <stdio.h>
#include <stdlib.h>
#include "colors/colors.h"



int main( int argc, char** argv ){

	char* a = "yo ";

	char* b = malloc( sizeof(char)*64 );


	printf("%s\n", ccolor( a ) );

	return 0;
}