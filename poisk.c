// binary_search.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include <string.h>
int main() {
	char str[50];
	char k;
	scanf_s("%s", str, 50);
	getchar();
	scanf_s("%c", &k);	
	int i, n, low, high, mid;
	n = strlen(str);
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (str[mid] == k) {
			printf("pos : %d \n", mid);
			return 0;
		}
		if (str[mid] < k) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return 0;
}
