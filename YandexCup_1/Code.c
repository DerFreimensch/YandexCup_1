#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(void) {
	int luckynumbers[10];
	int tickets = 0;
	int *ticketnumbers;
	int counter = 0;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &luckynumbers[10]);
	}
	scanf_s("%d", &tickets);
	ticketnumbers = (int*)malloc(tickets * 6 * sizeof(int));
	for (int i = 0; i < tickets; i++) {
		for (int j = 0; j < 6; j++) {
			scanf_s("%d", (ticketnumbers + i * tickets + j));
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < tickets; j++) {
			printf("ticket %d : %d \n ", i, *(ticketnumbers + i*tickets +j));
		}
	}
	return 0;
}