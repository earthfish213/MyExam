#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i=1, N;
	scanf("%d", &N);
	if (N >= 1 && N <= 9) {

		while (i<=9) {
			printf("%d * %d = %d\n",N, i, N * i);
			i++;
		}
	}

	return 0;
}
