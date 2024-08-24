#include "neighbours.h"

char stateCheck(int cell, int neighbours){
	if(cell == ' '){
		return ' ';
	}else if(cell == '#' && (neighbours == 2 || neighbours == 3 )){
		return '#';
	}else if(cell == '.' && neighbours == 3){
		return '#';
	}else{
		return '.';
	}
		
}
	
void nextState(char **matrixA, char **matrixB, int size){		
	for(i=0;i<size;++i){
		for(j=0;j<100;++j){
			if(j % 2 == 0){
				matrixB[i][j] = stateCheck(matrixA[i][j], neighbours(matrixA,i,j));
				printf("%c", matrixB[i][j]);
			}
		}
	}
}

