#include <stdio.h>

int main()
{
        float a[12],sum; int i;
        sum=0;
        for(i=0;i<=11;i++){
            scanf("%f",&a[i]);
            sum+=a[i];
        }
        printf("$%.2f\n",sum/12);
        return 0;
}
