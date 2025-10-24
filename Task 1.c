#include <stdio.h>
int main(){
	
	int i,j,n;

	
	printf("Enter a Number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d: ",i);
		for(j=1;j<=n;j++){
			printf(" %4d ",i*j);
		}
		printf("\n");
	}
	
	
	return 0;
}


