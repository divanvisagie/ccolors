#ifndef CCOLORS_H
#define CCOLORS_H

#include <stdio.h>


#define CC_CONSOLE_COLOR_DEFAULT "\033[0m"
#define CC_FORECOLOR(C) "\033[" #C "m"
#define CC_BACKCOLOR(C) "\033[" #C "m"
#define CC_ATTR(A) "\033[" #A "m"

typedef struct{

	const char* black;
	const char* white;

} col;

char* ccolor(){



	return sprintf(command, "%c[%d;%d;%dm", 0x1B, CC_ATTR(4), 35/*magenta*/ + 30, 30/*black*/ + 40);
}



#endif CCOLORS_H