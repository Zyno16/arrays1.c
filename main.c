#include <stdio.h>
#include <stdlib.h>

int main()
{int i,min;
    int t[10];
    for(i=0;i<10;i++){
    printf("enter t[%d]",i+1);
    scanf("%d",&t[i]);
    }
    min=t[0];
    for(i=1;i<10;i++){
        if(min>t[i])
            min=t[i];
    }
    printf("min=%d",min);

    return 0;
}
