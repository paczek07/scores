#include "score.h"

void output_results(int marks[], int statistics[], int scores[]) {
	printf("Here it starts\n");
	for (int i = 0; scores[i]; i++){
		if (scores[i] == -1) break;
		printf("Score %d; %d \n",i+1, scores[i]);
	}
	printf("-----------------\n");
	for (int i = 0; marks[i]; i++){	
		if (marks[i] == -1) break;
		printf("marks %d: %d\n",i+1, marks[i]);
	}
	printf("-----------------\n");
	for (int i = 0; statistics[i]; i++){
		printf("statistics %d: %d\n", i + 1, statistics[i]);
	}
	printf("-----------------\n");

}