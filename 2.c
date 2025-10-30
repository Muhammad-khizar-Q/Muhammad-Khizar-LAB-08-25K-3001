#include <stdio.h>
int main(){
	
	int Timepassed[2][12];
	int i,j;
	
	for(i=0;i<2;i++){
		printf("\n>>>>> Year %d <<<<<\n",i+1);
		for(j=0;j<12;j++){
			printf("Enter the number of photos you clicked in Year-%d,Month-%d:",i+1,j+1);
			scanf("%d",&Timepassed[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++){
		printf("\n>>>>> Year %d <<<<<\n",i+1);
		for(j=0;j<12;j++){
		printf("\nYear %d,Month %d:%d Photos",i+1,j+1,Timepassed[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
