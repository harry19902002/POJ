/*
Poj: 1316 Self Numbers
*/

#include <stdio.h>

int main()
{
    int num[10001];
    int i, j;
    int d;

    for(i = 0; i < 10001; i++)
        num[i] = 0;

    for(i = 0; i < 10000; i++) {
        j = i;
        d = i;
        while(j) {
            d += j%10;
            j /= 10;
        }
        if(d <= 10000)
            num[d] = 1;
    }

    for(i = 0; i < 10001; i++)
        if(num[i] == 0)
            printf("%d\n", i);

    return 0;
}
