#include "score.h"
#include <stdio.h>
#define MAX 20

void input_scores(int scores[]) {
    int i, input = 0;
    printf("Enter score, -1 to end\n");
    for (i = 0; i < MAX && input != -1; i++) {
        printf("Score %d: ", i + 1);
        scanf_s("%d", &input);
        if (input>100){
            printf("Invalid score. \n");
            i--;
        }
        else {
            scores[i] = input;
        }
    }

}