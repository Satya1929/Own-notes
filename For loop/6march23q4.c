// 2. Write a C program to compute the sum of the first 10 natural numbers. Go to the editor
// Expected Output :
// The first 10 natural number is :
// 1 2 3 4 5 6 7 8 9 10
// The Sum is : 55

#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }

    printf("\n%d", sum);

    return 0;
}