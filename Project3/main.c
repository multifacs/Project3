#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#pragma warning(disable : 4996)

int main(int argc, char* argv[])
{
	int n = 0, i = 0;
	long int maxa = 0, mina = 0;
	long int* arr;
	FILE* f;
	int sw;

	char line[10];

	srand(time(NULL));

	if (argc < 5)
	{
		printf("Error\n");
		return 1;
	}
	n = atoi(argv[1]);
	mina = atoi(argv[2]);
	maxa = atoi(argv[3]);
	CreateArr(n, &arr);
	Gen(n, arr, maxa, mina);
	f = fopen(argv[4], "w");

	PrintFile(f, n, arr);
	fclose(f);
	f = fopen(argv[4], "a+");
	
	sw = 1;

	while (sw) {
		printf("Enter bubble, insertion, quick or exit: ");
		//fgets(line, sizeof(line), stdin);
		scanf("%s", line);

		switch (line[0]) {
		case 'b':
			bubblesort(arr, n);
			free(arr);
			ScanFile(f, &n, &arr);
			break;
		case 'i':
			insertionsort(arr, n);
			free(arr);
			ScanFile(f, &n, &arr);
			break;
		case 'q':
			quicksort(arr, 0, n - 1);
			free(arr);
			ScanFile(f, &n, &arr);
			break;
		case 'e':
			printf("Quit");
			sw = 0;
			break;
		default :
			printf("Sosi\n");
		}
	}

	fclose(f);
	free(arr);
}