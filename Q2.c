#include <stdio.h>
int main(){
	int x, y;
	printf("enter x coordinate\n");
	scanf("%d",&x);
	fflush(stdin);
	printf("enter y coordinate\n");
	scanf("%d",&y);
	if (x>=0 && y>0){
		printf("Quadrant 1");
	}
	else{ if (x<0 && y>=0){
		printf("Quadrant 2");
	}
	else { if (x<=0 && y<0){
		printf("Quadrant 3");
	}
	else { if (x>0 && y<= 0){
		printf("Quadrant 4");
		
	}
	else{
		printf("No Quadrant");
	}
	}
	}
	}
	return 0;
}