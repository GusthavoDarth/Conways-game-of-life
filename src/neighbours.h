
int count;
int neighbours(char **matrix, int i, int j){
		int count = 0;
		if(matrix[i-1][j-2] == '#'){
			count++;	
		}if(matrix[i-1][j] == '#'){
			count++;
		}if(matrix[i-1][j+2] == '#'){
			count++;	
		}if(matrix[i][j-2] == '#'){
			count++;
		}if(matrix[i][j+2] == '#'){
			count++;
		}if(matrix[i+1][j-2] == '#'){
			count++;
		}if(matrix[i+1][j] == '#'){
			count++;
		}if(matrix[i+1][j+2] == '#'){
			count++;
		}
		return count;
}
