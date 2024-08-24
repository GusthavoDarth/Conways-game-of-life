
#include <stdlib.h>

int size, i, j;

char** matrixInit(int size){
	size += 2;
	char** matrix = malloc(sizeof(char*)*size);	
	for(i=0;i<size;++i){
		matrix[i] = malloc(sizeof(char)*size);
	}
	for(i=0;i<size;++i){
		for(j=0;j<size;++j){
			matrix[i][j] = '.';
		}
	}
	return matrix;
} 
