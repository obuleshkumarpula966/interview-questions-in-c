#include <stdio.h>

int main() {
    char grade = 'B';
    
    switch(grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Fair result\n");
            break;
        case 'F':
            printf("Try again\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    
    return 0;
}