#include <stdio.h>

// static allocation for binary tree
int main(void) {
    int a[100];
    int *p = a; // p points to the first element of the array
    *p = 10; // assign 10 to the first element of the array
    p++; // move the pointer to the next element
    *p = 20; // assign 20 to the second element of the array
    p--; // move the pointer to the previous element
    
    printf("%d\n", a[1]); // print the value of the second element (20)
    printf("%d\n", a[0]); // print the value of the first element (10)

    return 0;
}

