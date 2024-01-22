// Lab Report - 01 ((Largest element among array and quadratic equation solution))

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float a, b, c, d, r1, r2;
    printf("Enter number off Array Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
   
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f",&a, &b, &c);

    d = sqrt(b*b - 4 * a * c);

    r1 = (-b+d)/(2*a);
    r2 = (-b-d)/(2*a);

    printf("The Largest Element is: %d\n", max);
    printf("The roots of the quadratic equation are: %.2f %.2f", r1, r2);
    
    return 0;
}
