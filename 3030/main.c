#include <stdio.h>

int main()
{
        int num,r,e,c,i;
        scanf("%d",&num);
        for(i=1;i<=num;i++){
            scanf("%d %d %d",&r,&e,&c);
            if(e-r==c)
                printf("does not matter\n");
            else if(e-r<c)
                printf("do not advertise\n");
            else
                printf("advertise\n");
        }
        return 0;
}
