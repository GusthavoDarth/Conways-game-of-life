#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "matrixInit.h"
#include "state.h"
#include "frame.h"	


void main(){
	int frames, size;

	// iniciador das matrizes
	size = 200;
	char **matrix1 = matrixInit(size);
	char **matrix2 = matrixInit(size);

//	pentomino
//	200x200 grid
	matrix1[98][98] = '#';
	matrix1[99][98] = '#';
	matrix1[100][98] = '#';
	matrix1[99][96] = '#';
	matrix1[100][100] = '#';
//	matrix1[size][size+size-1] = '\0';
//


//	blinker
//	size = 5	
//	matrix1[2][1] = '#';
//	matrix1[2][2] = '#';
//	matrix1[2][3] = '#';
	

	// 0 0 0 0 0
	// 0 0 0 0 0
	// 0 1 1 1 0
	// 0 0 0 0 0
	// 0 0 0 0 0
	
//	toad
//	size = 6
//	matrix1[2][2] = '#';
//	matrix1[2][3] = '#';
//	matrix1[2][4] = '#';
//	matrix1[3][1] = '#';
//	matrix1[3][2] = '#';
//	matrix1[3][3] = '#';


	// 0 0 0 0 0 0 
	// 0 0 0 0 0 0 
	// 0 0 1 1 1 0 
	// 0 1 1 1 0 0 
	// 0 0 0 0 0 0 
	// 0 0 0 0 0 0 
	
//	pulsar
//	size = 17
//	matrix1[2][4] = '#';
//	matrix1[2][5] = '#';
//	matrix1[2][6] = '#';
//	matrix1[2][10] = '#';
//	matrix1[2][11] = '#';
//	matrix1[2][12] = '#';
//	matrix1[7][4] = '#';
//	matrix1[7][5] = '#';
//	matrix1[7][6] = '#';
//	matrix1[7][10] = '#';
//	matrix1[7][11] = '#';
//	matrix1[7][12] = '#';
//	matrix1[9][4] = '#';
//	matrix1[9][5] = '#';
//	matrix1[9][6] = '#';
//	matrix1[9][10] = '#';
//	matrix1[9][11] = '#';
//	matrix1[9][12] = '#';
//	matrix1[14][4] = '#';
//	matrix1[14][5] = '#';
//	matrix1[14][6] = '#';
//	matrix1[14][10] = '#';
//	matrix1[14][11] = '#';
//	matrix1[14][12] = '#';
//	matrix1[4][2] = '#';
//	matrix1[5][2] = '#';
//	matrix1[6][2] = '#';
//	matrix1[10][2] = '#';
//	matrix1[11][2] = '#';
//	matrix1[12][2] = '#';
//	matrix1[4][7] = '#';
//	matrix1[5][7] = '#';
//	matrix1[6][7] = '#';
//	matrix1[10][7] = '#';
//	matrix1[11][7] = '#';
//	matrix1[12][7] = '#';
//	matrix1[4][9] = '#';
//	matrix1[5][9] = '#';
//	matrix1[6][9] = '#';
//	matrix1[10][9] = '#';
//	matrix1[11][9] = '#';
//	matrix1[12][9] = '#';
//	matrix1[4][14] = '#';
//	matrix1[5][14] = '#';
//	matrix1[6][14] = '#';
//	matrix1[10][14] = '#';
//	matrix1[11][14] = '#';
//	matrix1[12][14] = '#';


	// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	// 0 0 0 0 1 1 1 0 0 0 1 1 1 0 0 0 0
	// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	// 0 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 0
	// 0 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 0
	// 0 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 0
	// 0 0 0 0 1 1 1 0 0 0 1 1 1 0 0 0 0
	// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	// 0 0 0 0 1 1 1 0 0 0 1 1 1 0 0 0 0
	// 0 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 0
	// 0 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 0
	// 0 0 1 0 0 0 0 1 0 1 0 0 0 0 1 0 0
	// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	// 0 0 0 0 1 1 1 0 0 0 1 1 1 0 0 0 0
	// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0


	video(matrix1, matrix2, size, 1000);

}
