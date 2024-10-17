#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    int n = rand() % (RAND_MAX + 1) - (RAND_MAX / 2);

    printf("The number is: %d\n", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

