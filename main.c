#include <stdio.h>
#include "mylib.h"
#include "arraylib.h" 

int main() {
    int choice, num;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Armstrong Number\n");
        printf("2. Check Adams Number\n");
        printf("3. Check Prime Palindrome Number\n");
        printf("4. Array Demo\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 5) break;

        if (choice >= 1 && choice <= 3) {
            printf("Enter number: ");
            scanf("%d", &num);
        }

        switch (choice) {
            case 1:
                printf(isArmstrong(num) ? "Armstrong\n" : "Not Armstrong\n");
                break;
            case 2:
                printf(isAdams(num) ? "Adams\n" : "Not Adams\n");
                break;
            case 3:
                printf(isPrimePalindrome(num) ? "Prime Palindrome\n" : "Not Prime Palindrome\n");
                break;
            case 4: {
                int arr[] = {3, 1, 4, 1, 5};
                int n = 5;
                displayArray(arr, n);
                printf("Average: %.2f\n", findAverage(arr, n));
                reverseArray(arr, n);
                displayArray(arr, n);
                break;
            }
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);
    return 0;
}
