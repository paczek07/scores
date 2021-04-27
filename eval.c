#define MAX 20
#include <stdio.h>
#include "score.h"

void evaluation(int scores[], int marks[]) {
    int i;
    for (i = 0; i < MAX && scores[i] != -1; i++) {
        if (scores[i] >= 0 && scores[i] <= 30)  marks[i] = 0;
        else if (scores[i] < 45) marks[i] = 1;
        else if (scores[i] < 60) marks[i] = 2;
        else if (scores[i] < 75) marks[i] = 3;
        else if (scores[i] < 90) marks[i] = 4;
        else if (scores[i] < 101) marks[i] = 5;
        else printf("invalid score\n");
    }
    printf("%d scores evaluated\n", i);
    marks[i] = -1;

}