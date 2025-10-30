#include <stdio.h>
int main(){
	
	int marks[4][4];
	float avg[4];
	int sum[4]={0,0,0,0};
	int i,j;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Enter marks of class %d Student %d:",i+1,j+1);
			scanf("%d",&marks[i][j]);
			sum[i]=sum[i]+marks[i][j];
		}
		printf("\n");
	}
	
	for(i=0;i<4;i++){
		printf("Class %d Marks:",i+1);
		for(j=0;j<4;j++){
		printf(" %d ",marks[i][j]);
	}
		avg[i]=(float)sum[i]/4;
		printf("\nAverage Marks of Class %d is %.2f\n",i+1,avg[i]);
}
	
	return 0;
}
