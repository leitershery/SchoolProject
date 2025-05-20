#include <stdio.h>

int main() {
    int i;
    printf("Enter how many numbers you want to add: ");
    scanf("%d", &i);
    
    if (i % 2 == 0) {
        for (i = 1; i <= i * i; i += 2)
            printf("%d ", i);
    } else {
        int sum = 0;
        for (i = 1; i <= i * i - 1; i++)
            if (i % 2 == 0) {
                sum += i;
                printf(" + %d", i);
            }
        
        printf(" = %d", sum);
    }

    return 0;
}
