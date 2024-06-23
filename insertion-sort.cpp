#include <stdio.h>

int main(){
	printf("enter the number of elements you wish to store in this unsorted array: ");
	int nums;
	scanf("%d", &nums);
	
	int count=1,temp, k, j, i;
	int number[nums]={};
	
	for( i=0;i<nums;i++){
		printf("Enter number for array-%d: ", count);
		scanf("%d", &number[i]);
		count++;
		}
	
	for( j=1;j<nums;j++){
		temp = number[j];
		int currentvalue = j ;
		
		while(currentvalue > 0 && number[currentvalue - 1] > temp) {
            number[currentvalue] = number[currentvalue - 1];
            currentvalue = currentvalue - 1;
		}
			number[currentvalue] = temp;
	}
	for( k=0;k<nums;k++){
		printf("\n%d ", number[k]);
	}
	
	return 0;	
}
