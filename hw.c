#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *temp;
    float highest, lowest;

    printf("Enter number of temperature readings: ");
    scanf("%d", &n);

    temp = (float*)malloc(n * sizeof(float));

    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter temperature readings:\n");

    for (i = 0; i < n; i++) {
        scanf("%f", temp + i);
    }

    highest = *temp;
    lowest = *temp;

    for (i = 1; i < n; i++) {
        if (*(temp + i) > highest) {
            highest = *(temp + i);
        }

        if (*(temp + i) < lowest) {
            lowest = *(temp + i);
        }
    }

    printf("Highest temperature = %.2f\n", highest);
    printf("Lowest temperature = %.2f\n", lowest);

    free(temp);

    return 0;
}