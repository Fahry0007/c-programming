#include<stdio.h>
int main() {
    char b[5][50];
    int i;

    printf("Enter 5 User Names:\n");
    for(i = 0; i < 5; i++) {
        printf("User %d: ", i+1);
        scanf("%s", b[i]);
    }

    printf("\nUser Names are:\n");
    for(i = 0; i < 5; i++) {
        printf("User %d: %s\n", i+1, b[i]);
    }

    return 0;
}
