#ifndef _PROG1_H_
#define _PROG1_H_
#include <stdio.h>

void CreateArr(int size, int** m);
void Gen(int size, int* m, int maxa, int mina);
void Print(int size, int* m);
void PrintFile(FILE* f, int size, int* m);
void ScanFile(int* n, int** mas, FILE* f);
void insertionsort(int arr[], int n);
void quicksort(int* arr, int first, int last);
void qs(int* s_arr, int first, int last);
void bubblesort(int* a, int n);

#endif