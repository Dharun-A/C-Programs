#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, length, height, radius;
    printf("\tMEASUREMENTS OF DIFFERENT SHAPES\n");
    printf("\nEnter the parameters : ");
    printf("[ side, breadth/base, length, height, radius ]\n\n");
    scanf("%d%d%d%d%d",&a,&b,&length,&height,&radius);

    int a_square    =   a * a;
    int a_rectangle =   length * b;
    int a_triangle  =   (b * height) / 2;
    int a_circle    =   3.14 * radius * radius;

    int c_square    =   4 * a;
    int c_rectangle =   (2 * length) + (2 * b);
    int c_triangle  =   3 * a;
    int c_circle    =   2 * 3.14 * radius;

    int v_cube          =   a * a * a;
    int v_cuboid        =   length * b * height;
    float v_cone        =   (3.14 * radius * radius * height) / 3;
    float v_sphere      =   (4 * 3.14 * radius * radius * radius) / 3;
    float v_cylinder    =   3.14 * radius * radius * height;

    printf("\n");
    printf("\t ---------------------------------------\n");
    printf("\t| SHAPES\t| AREA\t| PERIMETER\t|\n");
    printf("\t ---------------------------------------\n");
    printf("\t| Square\t| %d\t| %d\t\t|\n", a_square, c_square);
    printf("\t ---------------------------------------\n");
    printf("\t| Rectangle\t| %d\t| %d\t\t|\n", a_rectangle, c_rectangle);
    printf("\t ---------------------------------------\n");
    printf("\t| Triangle\t| %d\t| %d\t\t|\n", a_triangle, c_triangle);
    printf("\t ---------------------------------------\n");
    printf("\t| Circle\t| %d\t| %d\t\t|\n", a_circle, c_circle);
    printf("\t ---------------------------------------\n");

    printf("\n\t -------------------------------\n");
    printf("\t| SHAPES\t| VOLUME\t|\n");
    printf("\t -------------------------------\n");
    printf("\t| Cube     \t| %d\t\t|\n", v_cube);
    printf("\t -------------------------------\n");
    printf("\t| Cuboid   \t| %d\t\t|\n", v_cuboid);
    printf("\t -------------------------------\n");
    printf("\t| Cone     \t| %f\t|\n", v_cone);
    printf("\t -------------------------------\n");
    printf("\t| Sphere   \t| %f\t|\n", v_sphere);
    printf("\t -------------------------------\n");
    printf("\t| Cylinder \t| %f\t|\n", v_cylinder);
    printf("\t -------------------------------\n");

    return 0;
}
