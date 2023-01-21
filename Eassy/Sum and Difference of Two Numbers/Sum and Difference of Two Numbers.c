#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b,c,d;
    float x, y, s, t;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);
    c = a + b;
    d = a - b;
    s = x + y; 
    t = x - y;
    printf("%d %d\n", c, d);
    printf("%0.1f %0.1f", s, t);
    return 0;
}
