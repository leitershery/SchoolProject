#include <stdio.h>

int main() {
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &i);
    
    if (i <= 0) {
        printf("Number must be greater than 0.\n");
        return 1;
    }
    
    for (i = 0; i < i; i++) {
        printf("*");
    }
    
    printf("\n");
    
    return 0;
}
