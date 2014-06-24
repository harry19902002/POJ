#include <stdio.h>
#include <stdlib.h>

//µİ¹éµ÷ÓÃ

int count(int x,int y){
    if(y==1||x==0)return 1;
    if(x<y)return count(x,x);
    return count(x,y-1)+count(x-y,y);

}

int main()
{
    int t,i,m,n;
    scanf ("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&m,&n);
        printf("%d\n",count(m,n));
    }
    return 0;
}
