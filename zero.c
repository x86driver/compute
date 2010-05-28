#include <stdio.h>

int main()
{
	double sum = 1.0;
	unsigned long total;
	int i;
	for (total = 0; total < 50000000; ++total) {
		for (i = 0; i < 10; ++i) {
			sum *= 1.73 + i - 0.609;
		}
		for (i = 0; i < 15; ++i) {
			sum /= 1.73 - i + 0.609;
		}
	}
	printf("ret = %f\n", sum);
	return 0;

}

