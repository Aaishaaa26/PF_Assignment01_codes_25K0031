#include <stdio.h>
int main(){
	int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,digit;
	printf("enter a digit (0-9)\n");
	scanf("%d",&digit);
	while (digit>=0 && digit<=9){
		switch(digit){
			case 0: ++count0;break;
			case 1: ++count1;break;
			case 2: ++count2;break;
			case 3: ++count3;break;
			case 4: ++count4;break;
			case 5: ++count5;break;
			case 6: ++count6;break;
			case 7: ++count7;break;
			case 8: ++count8;break;
			case 9: ++count9;break;
		}
	    printf("enter a digit (0-9)\n");
	    scanf("%d",&digit);
    }
	printf("numbers\tNumber of occurences\n");
    printf("0\t%d\n",count0);
    printf("1\t%d\n",count1);
    printf("2\t%d\n",count2);
    printf("3\t%d\n",count3);
    printf("4\t%d\n",count4);
    printf("5\t%d\n",count5);
    printf("6\t%d\n",count6);
    printf("7\t%d\n",count7);
    printf("8\t%d\n",count8);
    printf("9\t%d\n",count9);
return 0;
}

