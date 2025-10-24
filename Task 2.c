#include <stdio.h>
int main(){
	
	int matrix[3][4]={{10,22,35,41},{50,65,73,80},{91,10,11,12}};
	int i,j;
	int x,y;
	
	printf("\n---->Your 3x4 Matrix<----\n");
	
		for(i=0;i<3;i++){
		printf("     |");
		for(j=0;j<4;j++){
			printf(" %2d ",matrix[i][j]);
		}
		printf("|");
		printf("\n");
	}
	
	int Max= matrix[0][0];
	
		for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(matrix[i][j]>Max){
				Max=matrix[i][j];
				x=i+1,y=j+1;
			}
		}
	}
	
	printf("The Maximum Value is at [%d][%d]: %d",x,y,Max);
	
	return 0;
}
