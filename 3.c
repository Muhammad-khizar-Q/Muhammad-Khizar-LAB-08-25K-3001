#include <stdio.h>
int main(){
	
	int image[4][4]={{1, 0, 1, 0},
					 {0, 1, 0, 1},
					 {1, 1, 0, 0},
					 {0, 0, 1, 1}};
	int inverted[4][4];
	int count=0;
	int i,j,k;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			inverted[i][j]=1-image[i][j];
			if(image[i][j]==1){
				count++;
			}
		}
	}
	printf("\n>>>Original-------Inverted<<<\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf(" %d ",image[i][j]);
		}
		
		printf("  |  ");
		
		for(j=0;j<4;j++){
			printf(" %d ",inverted[i][k]);
		}
		
		printf("\n");
	}
	
	printf("\nWhite Pixels in original image are %d.",count);
	
	return 0;
}
