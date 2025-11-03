#include <stdio.h>

int main() {
    char name[20];
    float time;

    printf("Enter your name:");
    scanf("%s", name);

    printf("Enter your time:");
    scanf("%f", &time);

    if (time >= 4 && time < 12) {
        printf("Good morning %s\n", name);
    } else if (time >= 12 && time < 16) {
        printf("Good Afternoon %s\n", name);
    } else {
        printf("Good Evening %s\n", name);
    }
    return 0;
}
