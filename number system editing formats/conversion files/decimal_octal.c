#include <stdio.h>
int main(){
    int num;
    char newnum[32],finalarray[32];
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
        finalarray[m]=newnum[m];
    }

    return finalarray[32];
    
}