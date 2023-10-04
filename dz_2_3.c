#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int x, y, null;
    
    scanf("%d %d", &x, &y);
    if (x>1 && y>1) printf("First quarter");
    else if (x<1 && y>1) printf("Second quarter");
    else if (x<1 && y<1) printf("Third quarter");
    else if (x>1 && y<1) printf("Fourth quarter");

    scanf("\n%d",&null);
    return 0;
}