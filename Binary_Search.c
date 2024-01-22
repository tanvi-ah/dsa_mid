// Binary_Search in C

#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,15,25,35,55,60,70,75,100};
    int Binary_Search = 15, left,right,middle;

    left = 0;
    right = 16;
    

    while (left <= right)
    {
        middle = (left+right)/2;
        if (a[middle] == Binary_Search)
    {
        printf("Item found at index: %d", middle);
        return 0;
    }
    else if (a[middle]<Binary_Search)
    {
        left = middle + 1;
    }
    else{
        right = middle - 1;
    }
    }
    printf("Item not found");
    
}



