#include "neighbours.h"


char stateCheck(int cell, int neighbours){
	if(cell == '#' && (neighbours == 2 || neighbours == 3 )){
		return '#';
	}else if(cell == '.' && neighbours == 3){
		return '#';
	}else{
		return '.';
	}
		
}
	
void nextState(char **matrixA, char **matrixB, int size){		
	for(i=1;i<size-1;++i){
		for(j=1;j<size-1;++j){
			matrixB[i][j] = stateCheck(matrixA[i][j], neighbours(matrixA,i,j));
		}
	}
}

