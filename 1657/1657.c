#include <stdio.h>
#include <math.h>

int King(char,char,char,char);
int Queen(char,char,char,char);
int Car(char,char,char,char);
int Elephant(char,char,char,char);

int main()
{
    int num,i;
    scanf("%d",&num);
    char start[num][2],end[num][2];
    int KingStep[num],QueenStep[num],CarStep[num],ElephantStep[num];
    for(i=0;i<num;i++)
        scanf("%s %s",&start[i],end[i]);
    for(i=0;i<num;i++)
    {
        KingStep[i]=King(start[i][0],start[i][1],end[i][0],end[i][1]);
        QueenStep[i]=Queen(start[i][0],start[i][1],end[i][0],end[i][1]);
        CarStep[i]=Car(start[i][0],start[i][1],end[i][0],end[i][1]);
        ElephantStep[i]=Elephant(start[i][0],start[i][1],end[i][0],end[i][1]);
        printf("%d ",KingStep[i]);
        printf("%d ",QueenStep[i]);
        printf("%d ",CarStep[i]);
        if(ElephantStep[i]>=0)
            printf("%d\n",ElephantStep[i]);
        else printf("Inf\n");
    }

    return 0;
}

int King(char x1,char y1,char x2,char y2)
{
    int x,y;
    x=abs(x1-x2);
    y=abs(y1-y2);
    y=abs(y-x);
    return y+x;
}

int Queen(char x1,char y1,char x2,char y2)
{
    int x,y;
    x=abs(x1-x2);
    y=abs(y1-y2);
    if(x1==x2 && y1==y2)
        return 0;
    else if(x1==x2||y1==y2)
        return 1;
    else if(x==y)
        return 1;
    else return 2;
}

int Car(char x1,char y1,char x2,char y2)
{
    if(x1==x2 && y1==y2)
        return 0;
    else if((x1==x2)||(y1==y2))
        return 1;
    else return 2;
}

int Elephant(char x1,char y1,char x2,char y2)
{
    int x,y;
    x=abs(x1-x2);
    y=abs(y1-y2);
    if(x1==x2 && y1==y2)
        return 0;
    else if(x==y)
        return 1;
    else if((x+y)%2==0)
        return 2;
    else return -1;
}
