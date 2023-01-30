#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

int main()
{

    int arr[MAX];
    int i, n;
    int even = 0;
    int odd = 0;
    int numOfOdd = 0;
    int numOfEven = 0;

    printf("Insert the number of elements in the array:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += arr[i];
            numOfEven++;
        }
        else
        {
            odd += arr[i];
            numOfOdd++;
        }
    }

    float ratio = numOfEven / numOfOdd;

    printf("Sum of even elements: %d\nSum of odd elements: %d\nratio:%f", even, odd, ratio);

    return 0;
}
