
#include <stdlib.h>

int size, i, j;

char** matrixInit(int size){
	char** matrix = malloc(sizeof(char*)*size);	
	for(i=0;i<size;++i){
		matrix[i] = malloc(sizeof(char)*size+size);
	}
	for(i=0;i<size;++i){
		for(j=0;j<size+size;++j){
			if(j%2 == 0 ){
				matrix[i][j] = '.';
			}
			else {
				matrix[i][j] = ' ';

			}
	//		printf("%c",matrix[i][j]);
		}
	//	printf("\n");
	}
	return matrix;
} 
