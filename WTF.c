#include <stdio.h>
void main() {
    int i;
    int arr[5] = {1,2,3,4,5};

    i = 1234;
    arr[5] = 5678;
    printf("i = %d\n", i);

    printf("arr[1] = %d\n", arr[1]);
    printf("1[arr] = %d\n", 1[arr]);
    printf("*(arr+1) = %d\n", *(arr+1));
}