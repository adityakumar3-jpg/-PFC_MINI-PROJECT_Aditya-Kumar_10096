#include <stdio.h>
//Display a menu for bitwise operations. Take two integers.
//  Use switch-case to apply &, |, ^, << or >> operators and print result.
//NAME:- Aditya Kumar
//ERP-10096
int main() { 
    int a, b, choice;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("\n--- Bitwise Utility Tool ---\n");
    printf("1. Bitwise AND (&)\n");
    printf("2. Bitwise OR (|)\n");
    printf("3. Bitwise XOR (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result: %d\n", a & b);
            break;

        case 2:
            printf("Result: %d\n", a | b);
            break;

        case 3:
            printf("Result: %d\n", a ^ b);
            break;

        case 4:
            printf("Result: %d\n", a << b);
            break;

        case 5:
            printf("Result: %d\n", a >> b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
//OUTPUT :-
//