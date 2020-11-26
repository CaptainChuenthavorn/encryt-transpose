#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A, n, m, transpose;
	int** p;
	int** t;
	printf("n :");
	scanf("%d", &n);
	printf("m :");
	scanf("%d", &m);
	p = (int**)malloc(n * sizeof(p));

	
	//reserve for m
	for (int i = 0; i < n;i++)
	{
		p[i] = (int*)malloc(m * sizeof(p));
	}



	//input number in matrix
	for (int i = 0; i < n;i++) {
		for (int j = 0;j < m;j++) {
			scanf("%d", &p[i][j]);
		}
	}

	t = (int**)malloc(m * sizeof(t));
	//reserve n for transpose
	for (int i = 0; i < m;i++)
	{
		t[i] = (int*)malloc(n * sizeof(int));
	}

	for (int j = 0;j < m;j++) {
		for (int i = 0; i < n;i++) {
			t[j][i] = p[i][j];
		}
	}

	printf("\n");

	for (int i = 0; i < n;i++) {
		for (int j = 0;j < m;j++) {
			printf("\t%d", p[i][j]);
		}
		printf("\n");
	}
	printf("\n\n tranpose\n\n");
	for (int j = 0;j < m;j++) {
		for (int i = 0; i < n;i++) {
			printf("\t%d", t[j][i]);
		}
		printf("\n");
	}

	return 0;
}

