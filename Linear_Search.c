// Linear_Search in C

#include<stdio.h>

int main()
{
    int a[] = {10,20,30,50,90,80,1,2,3,4,5,6,7,8,9,11,25,35};
    int search;
    printf("Enter search number: ");
    scanf("%d", &search);

    for(int i = 0; i<18; i++)
    {
        if (a[i] == search)
        {
            printf("%d is Present in this array. \n",search);
            return 0;
        }
    }
    printf("%d isn't Present in this array. \n",search);
    return 0;
}
