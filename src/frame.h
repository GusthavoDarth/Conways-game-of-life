#include <stdio.h>
#include <time.h>
#include <windows.h>
int size, i, j, k;



void frame(char** matrix, int size){
	for(i=0;i<size;++i){
		matrix[i][(size*2)-1] = '\0';
		puts(matrix[i]);
	}	
}
	
void copy(char **matrixA, char **matrixB, int size){
	for(i=0;i<size;++i){
		for(j=0;j<size;++j){
			matrixA[i][j+j] = matrixB[i][j+j];
		}
	}
	//matrixA[size][size+size] = '\0';
	//matrixB[size][size+size] = '\0';
}

void video(char **matrixA, char **matrixB, int size, int gens){
	for(k=0;k<=gens;++k){
		system("cls");
		frame(matrixA, size);
		nextState(matrixA, matrixB, size);
		copy(matrixA, matrixB, size);
		Sleep(33);
	}
}
