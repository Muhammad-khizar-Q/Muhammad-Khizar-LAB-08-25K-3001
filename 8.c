#include <stdio.h>
int main(){
	
	int i,j;
	int filled=0,empty=0,Total=0;
	
	printf("Classroom Seating Chart:");
	printf("\n=======================");
	printf("\nX = Student , O = Empty\n\n");	
	
	for(i=0;i<5;i++){
		printf("Row %d: ",i+1);
		for(j=0;j<5;j++){
        if((i + j) % 2 == 0){
            printf("X ");
            filled++;
        }else{
            printf("O ");
            empty++;
		}
		Total++;
    }
    printf("\n");
}
	
	printf("\n=======================\n");
	printf("\nSummary:\n");
	printf("Students Seated:%d\n",filled);
	printf("Empty Desks:%d\n",empty);
	printf("Total Desks:%d",Total);
	
	return 0;
}
