#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int x, y, null;
    
    scanf("%d %d", &x, &y);
    if (x>0 && y>0) printf("First quarter");
    else if (x<0 && y>0) printf("Second quarter");
    else if (x<0 && y<0) printf("Third quarter");
    else if (x>0 && y<0) printf("Fourth quarter");
    else if (x==0 && y==0) printf("Origin of coordinates");
    else if (x==0) printf("Y axis");
    else if (y==0) printf("X axis");
    scanf("\n%d",&null);
    return 0;
}