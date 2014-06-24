#include <stdio.h>

int main()
{
    int k,m,a[500000];
    char b[3012501]={0};
    k=0;

            a[0]=0;
            b[0]=-1;
        for(m=1;m<=500000;m++){
            a[m]=a[m-1]-m;
            if(a[m]<0||b[a[m]]==-1)
                a[m]=a[m-1]+m;
            b[a[m]]=-1;
        }
        while(k!=-1){
                scanf("%d",&k);
                if(k!=-1) printf("%d\n",a[k]);
        }
    return 0;
}
