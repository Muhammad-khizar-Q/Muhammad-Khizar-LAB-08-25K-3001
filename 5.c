#include <stdio.h>
int main(){
	
	int i,j;
	int temperature[4][4]={ {12, 15, 10, 9},
        					{11, 8, 12, 13},
        					{14, 13, 9, 7},
        					{16, 11, 10, 8}};
    
	printf("Cold spots found:\n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			int cold=1;
			if(i>0 && temperature[i-1][j]<=temperature[i][j])
			cold=0;
			if(i<3 && temperature[i+1][j]<=temperature[i][j])
			cold=0;
			if(j>0 && temperature[i][j-1]<=temperature[i][j])
			cold=0;
			if(j<3 && temperature[i][j+1]<=temperature[i][j])
			cold=0;
			if(cold==1)
			printf("- At position (%d,%d) with temperature %d degree C\n",i+1,j+1,temperature[i][j]);
		}
	}
	
	
	return 0;
}
