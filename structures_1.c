#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int age;
    float grade;
};
struct coord
{
    int x;
    int y;
};
void print(char name[], int age, float grade)
{
    printf("%s, %i, %.2f \n", name, age, grade);
}
void print_coord(struct coord c)
{
    printf("%d, %d\n", c.x, c.y);
}
int main()
{
    struct student s1 = {"Matei", 19, 7.50};
    print(s1.name, s1.age, s1.grade);

    struct coord c1 = {5, 10};
    struct coord c2 = {25, 5};
    print_coord(c1);
    print_coord(c2);
}
