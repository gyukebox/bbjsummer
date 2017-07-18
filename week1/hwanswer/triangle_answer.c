#include <stdio.h>

int main()
{
    double x1, x2, x3, y1, y2, y3;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);

    if(x1 == x2 && x2 == x3)
    {
        printf("NO\n");
    }
    else if((y2 - y1) / (x2 - x1) == (y3 - y2) / (x3 - x2))
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}
