#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv) {
    int student;
    int i, input;
    int *score;
    int sum = 0;

    printf("Number of Stduent : ");
    scanf("%d", &student);

    score = (int *)malloc(student * sizeof(int));

    for (i = 0; i < student; i++) {
        printf("The score of student is : %d", i);
        scanf("%d", &input);

        score[i] = input;
    }

    for (i = 0; i < student; i++) {
        sum += score[i];
    }

    printf("Overall average student score is : %d\n", sum / student);
    free(score);
    return 0;
}