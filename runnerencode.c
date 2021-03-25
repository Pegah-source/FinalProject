#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <jansson.h>
#include <stdbool.h>

#include "encode.c"
#include "encode.h"


int main(int argc, char * argv[]){
	size_t size = 2000;
	char words[size][40];
	next pointersToNext[size];
	
	
	size = readfromjson(size,words,pointersToNext);
	
	int* temp = (int*) malloc(sizeof(int)*4);
	for(int i = 0;i < 4;i++){
		*(temp+i) = i;
	}
	writencode(size,words,pointersToNext,1,1,4,temp);

	//printf("%s \n and this is the size : %d  and size of char : %d",recu,strlen(recu), sizeof('1'));
	
	return 0;
}
