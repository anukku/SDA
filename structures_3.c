#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct code
{
    int x;
    char c;
    struct code *ptr;
};

int main()
{
    struct code var1;
    struct code var2;
    var1.x = 1;
    var2.x = 2;
    var1.c = 'a';
    var2.c = 'b';
    var1.ptr = NULL;
    var2.ptr = NULL;
    var1.ptr = &var2;
    printf("%d %c",var1.ptr -> x, var1.ptr -> c);
    return 0;
}