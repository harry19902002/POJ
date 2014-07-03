#include <stdio.h>
#include <string.h>

main()
{
    int number,i=0,j=0,k=0,n=0,a=0,cont=0;
    unsigned char tem;
    scanf ("%d\n",&number);
    unsigned char telephone[number][9];
    unsigned char tmp[8];
        while(i<number)
        {
            scanf("%c",&tem);
            if(tem=='-')  continue;
            else if(tem>='A'&&tem<='C') tem='2';
            else if(tem>='D'&&tem<='F') tem='3';
            else if(tem>='G'&&tem<='I') tem='4';
            else if(tem>='J'&&tem<='L') tem='5';
            else if(tem>='M'&&tem<='O') tem='6';
            else if(tem>='P'&&tem<='S') tem='7';
            else if(tem>='T'&&tem<='V') tem='8';
            else if(tem>='W'&&tem<='Y') tem='9';

            if(tem>='0'&&tem<='9')
            {
                telephone[i][j]=tem;
                j++;
            }
            if(j>=7)
            {
                telephone[i][7]='1';
                telephone[i][8]='\0';
                j=0;
                i++;
            }
        }
        for(i=0;i<number;i++)
            printf("%s\n",telephone[i]);

//Delete repetition and songle number
    for(i=0;i<number;i++)
    {
        for(k=i+1;k<number;k++)
            printf("%s",telephone[i]);
            printf("  strcmp  ");
            printf("%s",telephone[j]);
            printf(" = ");
            printf("%d\n",strcmp(telephone[i],telephone[k]));
        {
            if(strcmp(telephone[i],telephone[k])==0 && telephone[k][0]!=0)
            {
                strcpy(telephone[n],telephone[i])
                telephone[n][7]++;
                n++;
                telephone[k][0]=0;
            }
        }
    }
    printf("n=%d\n",n);

/*
//Ranking  (strcmp)
    for(j=n;j>0;j--)
    {
        for(i=0;i<j;i++)
        {
            if(strcmp(telephone[i],telephone[i+1])>0)
                for(a=0;a<8;a++)
            {
                tmp[a]=telephone[i][a];
                telephone[i][a]=telephone[i+1][a];
                telephone[i+1][a]=tmp[a];
            }
        }
    }
    */

//print telephone
    i=0;
    j=0;
    while(i<n)
    {
        printf("%c",telephone[i][j]);
        j++;
        if(j==3)
            printf("-");
        if(j>=7)
        {
            j=0;
            i++;
            printf(" %c",telephone[i][7]);
            printf("\n");
        }
    }
}
