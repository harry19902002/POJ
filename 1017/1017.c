#include <stdio.h>

void main()
{
    int input[6],residue[2],stop=0,packages,i;
    while(1)
    {
        stop=0;
        packages=0;
        for(i=0;i<2;i++)
            residue[i]=0;

        for(i=0;i<6;i++)
        {
            scanf("%d",&input[i]);
            if(input[i]!=0)
                stop=1;
        }
        if(stop==0) break;

        packages+=input[5];
        packages+=input[4];
        packages+=input[3];
        residue[1]+=input[3]*5;

        packages+=(input[2]+3)/4;
        switch(input[2]%4)
        {
        case 1: residue[1]+=5; break;
        case 2: residue[1]+=3; break;
        case 3: residue[1]+=1; break;
        default: break;
        }

        if(residue[1]<input[1])
        {
            packages+=(input[1]-residue[1]+8)/9;
        }
        residue[0]=36*packages-36*input[5]-25*input[4]-16*input[3]-9*input[2]-4*input[1];
        if(residue[0]<input[0])
        {
            packages+=(input[0]-residue[0]+35)/36;
        }
        printf("%d\n",packages);
    }
}
