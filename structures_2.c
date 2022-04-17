#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct abc
{
    int a;
    int b;
};
void print_abc(struct abc arr[])
{
    int i;
    for(i = 0; i < 2; i++)
        printf("%d %d\n", arr[i].a, arr[i].b);
}
struct point
{
    int x;
    int y;
};
void print(struct point *ptr)
{
    printf("%d %d\n", ptr->x, ptr->y);
}
int main()
{
    struct abc arr[2] = {{1, 2}, {3, 4}};
    print_abc(arr);
    struct point p1 = {23, 45};
    struct point p2 = {56, 90};
    print(&p1);
    print(&p2);
    return 0;
}