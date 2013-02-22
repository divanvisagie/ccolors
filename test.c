#include <stdio.h>
#include <stdlib.h>
#include "ccolors.h"

int main( int argc, char** argv ){

	char* a = "Hello colorful world";

	printf("%s\n", ccolor( a, CC_GRAY , CC_MAGENTA ) );
	printf("%s\n", ccolor( "single test", CC_CYAN, CC_DEFAULT ) );
	printf("%s\n", ccolor( " single test ", CC_BLACK, CC_BLUE ) );

	char* buffer = malloc( sizeof(char)*1024 );

	/* Test a large chunk of nothingness for background color */
	for ( int i = 0; i < 1e3; i++ ){

		buffer[i] = ' ';
	}
	printf("%s\n", ccolor( buffer, CC_DEFAULT, CC_BLUE ) );

	printf( "this should be normal" );

	return 0;
}