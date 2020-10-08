#include <stdio.h>
int decbin(){
    int num;
    char newnum[32],*finalarray[32];
    scanf("%d",&num);
    int i = 0;
    while (num>0)
    {
        newnum[i]=num%2;
        num=num/2;
        i++;
    }
    for (int m = i-1; m >= 0; m--)
    {
        finalarray[m]=newnum[m];
    }
    return finalarray[32];
    
}
int main(){
    int a=decbin();
    printf("%d",a);
}