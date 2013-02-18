/*	
	ccolors.h
	Created By: Divan Visagie
	License: BSD
*/


#ifndef C_color_H
#define C_COLORS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>

#define C_CONSOLE_COLOR_DEFAULT "\e[0m"

typedef enum{

	BLACK,
	RED,
	GREEN,
	BROWN,
	BLUE,
	MAGENTA,
	CYAN,
	GRAY, // halfway point 7
	DARK_GRAY,
	LIGHT_RED,
	Light_GREEN,
	YELLOW,
	LIGHT_BLUE,
	LIGHT_MAGENTA,
	LIGHT_CYAN,
	WHITE = 15

} CC;

char* cc_color_from_int( int col, bool fore ){

	char* buffer = malloc( sizeof(char)*32 );

	if( col > 7 ){ /* light color */

		sprintf( buffer, "\e[01;%d%dm", fore ? 3 : 4, col-8  );

	}else{ /* dark color */

		sprintf( buffer, "\e[22;%d%dm", fore ? 3 : 4, col  );
	}


	return buffer;
}

char* ccolor( char* str, int fore, int back  ){

	if (back == NULL)
		back = -1;

	char* buffer = malloc( sizeof(str)+sizeof(char)*16 );

	sprintf( buffer, "%s%s%s%s", cc_color_from_int( fore, true ),
			 back != -1 ? cc_color_from_int( back, false ) : "",
			  str, C_CONSOLE_COLOR_DEFAULT );

	return buffer;
}

#endif