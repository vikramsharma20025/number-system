#include <stdio.h>
int main(){
    int num,sum=0;
    int newnum[32],finalarray[32]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    scanf("%d",&num);
    int i = 0;
    while (num>0)
    {
        newnum[i]=num%16;
        num=num/16;
        i++;
    }
    for (int m = i-1; m >= 0; m--)
    {
        int po =2;
        for (int p = 0; p < m; p++)
        {
            po*=po;
        }
        
        finalarray[m]=finalarray[m]+newnum[m]*(po);
    }
    for (int z = 0; z < 32; z++)
    {
        sum=finalarray[z]+sum;
    }
    printf("%d",sum);
    /*for (int k = 0; k <= 32; k++)
    {
        printf("%d\n",finalarray[k]);
    }*/
    
    return finalarray[32];
}