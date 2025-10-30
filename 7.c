#include <stdio.h>
int main(){
	
	int i,j,k;
	
	for(i=1;i<=5;i++){
		for(k=i;k<5;k++){
		printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
		printf("*");
		}
		for(k=i;k<5;k++){
		printf(" ");
		}
		printf(" | ");
		for(k=i;k<5;k++){
		printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
		printf("%d",j);
		}
		for(k=i;k<5;k++){
		printf(" ");
		}
		printf(" | ");
		for(k=i;k<5;k++){
		printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
		printf("%c",'A'+j-1);
		}
		for(k=i;k<5;k++){
		printf(" ");
		}
		printf(" | ");
		
	printf("\n");
	}
	
	return 0;
}
