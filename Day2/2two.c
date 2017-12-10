#include <stdio.h>
#define width 16

int max(int matrix[], int size) {
	int max = matrix[0];
	for(int i = 0; i < size; i++) {
		if(max < matrix[i]) {
			max = matrix[i];
		}
	}
	return max;
}

int min(int matrix[], int size) {
	int min = matrix[0];
	for(int i = 0; i < size; i++) {
		if(min > matrix[i]) {
			min = matrix[i];
		}
	}
	return min;
}

int evendiv(int matrix[], int size) {
    int one, two;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(matrix[i]%matrix[j] == 0 && i != j) {
                printf("%d %% %d\n", matrix[i], matrix[j]);
                return (matrix[i]/matrix[j]);
            }
        }
    }
    return -1;
}

int main() {
	int matrix[17][17];

	matrix[0][0] = 1;
	matrix[15][15] = 2;

	for(int i = 0; i < width; i++) {
		int j = 0;
		while(j < width) {
			scanf("%d", &matrix[i][j]);
			printf("%d ", matrix[i][j]);
			j++;
		}
		puts("");
	}

	int sum = 0;
	for(int i = 0; i < width; i++) {
		// int maxValue = max(matrix[i], width);
		// int minValue = min(matrix[i], width);

        sum += evendiv(matrix[i], width);

		// sum += maxValue - minValue;
        printf("sum: %d\n", sum);
	}

	printf("final: %d\n", sum);

	return 0;
}