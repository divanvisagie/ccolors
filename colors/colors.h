#ifndef CCOLORS_H
#define CCOLORS_H

#include <stdio.h>
#include <stdlib.h>


#define CC_CONSOLE_COLOR_DEFAULT "\033[0m"
#define CC_FORECOLOR(C) "\033[" #C "m"
#define CC_BACKCOLOR(C) "\033[" #C "m"
#define CC_ATTR(A) "\033[" #A "m"

typedef struct{

	const char* black;
	const char* white;

} col;

char* ccolor( char* str ){

	char* buffer = malloc( sizeof(str)+sizeof(char)*64 );

	sprintf( buffer, "\033[01;34m %s \033[0m", str );

	return buffer;


	// sprintf(string, "%c[%d;%d;%dm", 0x1B, 4, 35/*magenta*/ + 30, 30/*black*/ + 40);
}



#endif CCOLORS_H