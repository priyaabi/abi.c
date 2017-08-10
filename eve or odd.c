#include <stdio.h>
int main()
{
    int num;

    printf("Enter an int: ");
    scanf("%d", &num);

    // True if the number is perfectly divide by 2
    if(num % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);

    return 0;
}
