/*LINEAR AND NONLINEAR DATA STRUCTURES & STATIC AND DYNAMIC DATA STRUCTURES*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // int *ptr = NULL;
    // cout << sizeof(ptr) <<endl;
    // to avoid errors + NULL check before dereferencing a pointer(if ptr == NULL...)
    int n, i;
    printf("The numbers of integers is: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }
    ptr = (int *)realloc(ptr, 2*sizeof(int));
    for (i = 0; i < 2*n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    //(void* )malloc(size_t size) -> returns a pointer pointing to the first byte of the allocated memory
    //(void* )calloc(size_t n, size_t size) -> number of blocks, size of each block
    //(void* )realloc(void *ptr, size_t newSize) ->
    // int *ptr = (int* )malloc(4) -> allocates 4 bytes of memory
    free(ptr);
    return 0;
}
