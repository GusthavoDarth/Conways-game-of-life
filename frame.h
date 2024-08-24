#include <stdio.h>
int size, i, j;

void frame(char** matrix, int size){
	for(i=0;i<size;++i){
		
		//char teste[3];
		//teste[0] = i;
		//teste[1] = i;
		//teste[2] = i;
		//teste[3] = '\0';
		puts(matrix[i]);

		//for(j=0;j<size;++j){
		//	printf("%c ", matrix[i][j]);
		//}
		//printf("\n");
	}	
}
	
void copy(char **matrixA, char **matrixB, int size){
	for(i=0;i<size;++i){
		for(j=0;j<size;++j){
			matrixA[i][j] = matrixB[i][j];
		}
	}
	matrixA[size][size] = '\0';
	matrixB[size][size] = '\0';
}
