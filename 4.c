#include <stdio.h>
int main(){
	
	int seats[3][3];
	int available=0;
	int i,j;
	
	printf("Enter the status of seats:(1=Booked and 0=available)\n");
	
	for(i=0;i<3;i++){
		printf("\nRow %d Section:\n",i+1);
		for(j=0;j<3;j++){
			printf("Seat %d:",j+1);
			scanf("%d",&seats[i][j]);
		}
	}
	printf("\nAvailable Seats:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(seats[i][j]==0){
				available++;
				printf("Row %d Seat %d\n",i+1,j+1);
			}
		}
	}
	printf("Total Available Seats:%d",available);
	
	return 0;
}
