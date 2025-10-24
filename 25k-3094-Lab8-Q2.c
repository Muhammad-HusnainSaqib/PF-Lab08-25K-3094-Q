#include <stdio.h>
int main(){
	int i = 0,j = 0;
	int matrix[3][4] = {
	{10,22,35,41},
	{50,65,73,80},
	{9,10,11,12}
	};
	int max = matrix[0][0];
	int positionx = 0;
	int positiony = 0;
	for (i = 0; i< 3; i++){
		for(j = 0; j < 4; j++){
			printf(" %4d", matrix[i][j]);
			if(matrix[i][j] > max){
				max = matrix[i][j];
				positionx = i;
				positiony = j; 
			}
		}
		printf("\n");
	}
	printf("\n Maximum value is %d found at %d,%d", max,positionx,positiony);
	
	
	
	
	
	
	return 0;
}
