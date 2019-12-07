#ifndef _PROG1_H_
#define _PROG1_H_
#include <stdio.h>

void CreateArr(int size, long int** m);
void Gen(int size, long int* m, long int maxa, long int mina);
void Print(int size, long int* m);
void PrintFile(FILE* f, int size, long int* m);
void ScanFile(FILE* f, int size, long int** m);
void insertionsort(long int* arr, int n);
void quicksort(long int* arr, int first, int last);
void qs(long int* s_arr, int first, int last);
void bubblesort(long int* a, int n);

#endif