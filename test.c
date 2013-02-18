#include <stdio.h>
#include <stdlib.h>
#include "colors/colors.h"

int main( int argc, char** argv ){

	char* a = "Hello colorful world";

	printf( "%s\n", ccolor( a, GRAY , BLUE ) );
	printf("%s\n", ccolor( "single test", CYAN, NULL ) );

	return 0;
}