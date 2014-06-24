#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first[20],second[20],cla;
    int distance,bonus,out=0;
    while(1){
        scanf("%s",first);
        if(first[0]=='#')break;
        if(first[0]=='0'){printf("%d\n",out);out=0;}
        else{
        scanf("%s %d %c",second,&distance,&cla);
            switch(cla){
        case 'F':bonus=distance*2;break;
        case 'B':if(distance%2==0)bonus=distance*1.5;
                    else bonus=distance*1.5+1;
                    break;
        case 'Y':if(distance<=500){
                    bonus=500;break;}
                else {bonus=distance;break;}
        }
        out+=bonus;
        }
    }
    return 0;
}
