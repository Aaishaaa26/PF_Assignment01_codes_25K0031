#include <stdio.h>
int main() {
    int age;
    char sight_exam, written_exam, driving_exam, fitness_certificate;
    printf("Enter age:\n");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Enter your result for eyesight exam (P/F):\n");
        scanf(" %c", &sight_exam);
        if (sight_exam == 'P') {
            printf("Enter your result for written exam (P/F):\n");
            scanf(" %c", &written_exam);
            if (written_exam == 'P') {
                printf("Enter your result for driving exam (P/F):\n");
                scanf(" %c", &driving_exam);
                if (driving_exam == 'P' && age <= 60) {
                    printf("You are eligible\n");
                }
                else if (driving_exam == 'P' && age > 60) {
                    printf("Is fitness certificate available? (A/N):\n");
                    scanf(" %c", &fitness_certificate);
                    if (fitness_certificate == 'A') {
                        printf("You are eligible\n");
                    } else {
                        printf("Not eligible\n");
                    }
                }
                else {
                    printf("Not eligible\n");
                }
            } else {
                printf("Not eligible\n");
            }
        } else {
            printf("Not eligible\n");
        }
    } else {
        printf("Not eligible\n");
    }

return 0;
}