#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int (*f)(int);
typedef f* delegat;
int Square(int);
int MinusOne(int);
int* func(f, int*, int*);
void ShowArray(int*, int*);
int* InitArray(int* n);



