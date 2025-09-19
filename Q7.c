#include <stdio.h>
int main(){
	int value;
	printf("Please enter a value in the range 1-7\n");
	scanf("%d",&value);
    //each unique value represents the day of week
    switch(value){
    	case 1: printf("Monday"); break;
    	case 2: printf("Tuesday"); break;
    	case 3: printf("Wednesday"); break;
    	case 4: printf("Thursday"); break;
    	case 5: printf("Friday"); break;
    	case 6: printf("Saturday"); break;
    	case 7: printf("Sunday"); break;
    	default: printf("invalid value entered");
	}
	return 0;
}