#include <stdio.h>

int sum1ToN(int n){
	return n * (n + 1) / 2;
}

int main(int argc, char* argv){
	printf("Hello, World\n");
	for (int i = 1; i < 11; i++) {
		printf("Sum of 1 to %d is: %d\n", i, sum1ToN(i));
	}
	return 0;
}