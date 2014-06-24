#include <stdio.h>
#include <math.h>
int main()
{
    int num,i;
    float x,y;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        scanf("%f %f",&x,&y);
        printf("Property %d: This property will begin eroding in year %d.\n",i,(int)ceil((x*x+y*y)*3.14/100));
    }
    printf("END OF OUTPUT.");
    return 0;
}
