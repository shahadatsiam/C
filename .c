#include <stdio.h>

int main() {
    int marks;
    printf("enter mark (0-100): ");
    scanf("%d", &marks);

    if (marks < 30) {
        printf("C\n");
    } 
    else if (marks < 70) {  // Covers 30 to 69
        printf("B\n"); 
    } 
    else if (marks < 90) {  // Covers 70 to 89
        printf("A\n");
    } 
    else {                  // Covers 90 to 100
        printf("A+\n");
    }

    return 0;
}