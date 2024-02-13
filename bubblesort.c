#include<stdio.h>
int main(){
    int Bubble[] = {10,2,3,1,8,6,33,54,46,48};
    int Length = sizeof(Bubble)/sizeof(Bubble[0]);
    int i, j;

    for (i = 0; i < Length - 1; i++){
       for ( j = 0; j < Length - 1 - 1; j++){
        if (Bubble[j] > Bubble[j + 1]){
            int temp = Bubble[j];
            Bubble[j]   = Bubble[j+1];
            Bubble[j+1] = temp;
        }  
       } 
    }
    printf("After sorting: ");
    for ( i = 0; i < Length; i++){
      printf("%d ", Bubble[i]);
    }
    printf(" \n");
    return 0;
}