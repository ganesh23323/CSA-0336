#include <stdio.h>
 #include <stdlib.h>

  void main() {
    int arr[30], size, i, num, flag=0;

    printf("Enter size of array. \n");
    scanf("%d",&size);

    printf("Enter %d array elements one by one. \n",size);
    for (i=0; i<size; i++) {
        scanf("%d \n",&arr[i]);
    }

    printf("Enter the number you wish to look for. \n");
    scanf("%d",&num);

    for(i=0;i<size;i++) {
        if (num == arr[i]) {
            flag++;
        }
    }

    if (flag>0) {
        printf("The number %d is present in the array.",num);
    } else {
        printf("The number %d is not present in the array.",num);
    }
 }
