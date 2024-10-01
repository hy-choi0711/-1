#include <stdio.h>
#include <math.h>

int main() {
	int x;
	scanf("%d", &x);
	if (x > 0 || x < 100) {
		int numbers[x]; 
		int a;
		for (a = 0; a < x; a++) {
			scanf("%d", &numbers[a]);
		}
		
		// 평균값 구하기 
		double average = 0;
		int b = 0;
		while (b < x) {
			average += numbers[b];
			b++;
		}
		average /= x;
		
		// 분산값 구하기 
		double dispersion = 0;
		b = 0;
		while (b < x) {
			dispersion += pow(numbers[b] - average, 2);
			b++;
		}
		dispersion /= x;
		
		// 최대값 구하기 
		b = 1;
		int biggest = numbers[0];
		while (b < x) {
			if (numbers[b] > biggest) {
				biggest = numbers[b];
			}
			b++;
		}
		
		// 최소값 구하기 
		b = 1;
		int smallest = numbers[0];
		while (b < x) {
			if (numbers[b] < smallest) {
				smallest = numbers[b];
			}
			b++;
		}
		
		printf("\n%.4lf\n", average);
		printf("%.4lf\n", dispersion);
		printf("%d\n", biggest);
		printf("%d\n", smallest);
		
		return 0;
	}
}
