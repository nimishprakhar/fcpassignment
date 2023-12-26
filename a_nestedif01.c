#include <stdio.h>

 void main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0) {
        printf("%d is divisible by 3.\n", n);
    } else if (n % 7 == 0)
     {
        printf("%d is divisible by 7.\n", n);
    } 
    else if (n % 5 == 0) 
    {
        printf("%d is divisible by 5.\n", n);
    } else if (n % 8 == 0)
     {
        printf("%d is divisible by 8.\n", n);
    } else if (n % 6 == 0)
     {
        printf("%d is divisible by 6.\n", n);
    } else
     {
        printf("%d is not divisible by 3, 7, 5, 8, or 6.\n", n);
    }

   
    int remainder = n % 4;  

    switch (remainder) {
        case 0:
            printf("The remainder when dividing %d by 4 is 0.\n", n);
            break;
        case 1:
            printf("The remainder when dividing %d by 4 is 1.\n", n);
            break;
        case 2:
            printf("The remainder when dividing %d by 4 is 2.\n", n);
            break;
        case 3:
            printf("The remainder when dividing %d by 4 is 3.\n", n);
            break;
        default:
            printf("Invalid remainder.\n");
    }

    
}
