#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{


    int r1,r2,x1,x2,y1,y2; float d=0;
    scanf ("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &r1, &r2);
    d = sqrt ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    if (r1<0 || r2<0)
        printf("Invalid input\n");
    else
    {


        if (d<= (r1+r2) && d>= abs(r1-r2))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;

}
