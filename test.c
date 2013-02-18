#include <stdio.h>
#include <stdlib.h>
#include "ccolors.h"

int main( int argc, char** argv ){

	char* a = "Hello colorful world";

	printf("%s\n", ccolor( a, CC_GRAY , CC_BLUE ) );
	printf("%s\n", ccolor( "single test", CC_CYAN, CC_DEFAULT ) );
	printf("%s\n", ccolor( "single test", CC_DEFAULT, CC_BLUE ) );


	return 0;
}