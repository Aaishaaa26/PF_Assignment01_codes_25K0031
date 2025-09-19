#include <stdio.h>
#include <string.h>
int main(){
    float daily_spending;
    char flag='F', detected_country[30];
    int hourly_trans;
    printf("daily spendings\n");
    scanf("%.2f",&daily_spending);
    fflush(stdin);
    printf("country detected\n");
    scanf("%s",&detected_country);
    fflush(stdin);
    printf("hourly transaction\n");
    scanf("%d",&hourly_trans);
    fflush(stdin);
    if (daily_spending<=5000.00 && (strcmp(detected_country, "pakistan")==0) && hourly_trans<=3){
    	flag='T';
    }
    if (flag=='T'){
    	printf("nothing suspicious");
    	}
    else{
    	printf("suspicious activity detected");
	}	
return 0;	
}