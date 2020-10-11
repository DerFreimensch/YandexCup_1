#define _CRT_SECURE_NO_WARNINGS
#define N 10
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(void) {
	int luckynumbers[N];
	int tickets;
	int **ticketnumbers;
	int counter = 0;
	int m = 6;
	printf("%s\n", "Lucky numbers");
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &luckynumbers[i]);
	}
	printf("%s\n", "Number of tickets");
	scanf_s("%d", &tickets);
	ticketnumbers = (int**)malloc(tickets * sizeof(int*));
	for (int i = 0; i < tickets; i++) {
		ticketnumbers[i] = (int*)malloc(m * sizeof(int));
		for (int j= 0; j < m; j++) {
			printf("Ticket %d number %d: ", i+1, j+1);
			scanf_s("%d", &ticketnumbers[i][j]);
		}
	}
	for (int i = 0; i < tickets; i++) {
		printf("\n");
		for (int j = 0; j < m; j++) {
			printf("%d ", ticketnumbers[i][j]);
		}
	}
	for (int i = 0; i < tickets; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < N; k++) {
				if (ticketnumbers[i][j] == luckynumbers[k]){
					counter++;
				}
			}
		}
		if (counter >= 3) {
			printf("\n%s", "Lucky");

		}
		else {
			printf("\n%s", "Unlucky");
		}
		counter = 0;
	}
	{

	}
	for (int i = 0; i < tickets; i++) {
		free(ticketnumbers[i]);
	}
	free(ticketnumbers);
	return 0;

	
	
	}
	