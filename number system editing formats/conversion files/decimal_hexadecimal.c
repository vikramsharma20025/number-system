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
        
        if (newnum[i]==10)
        {
            newnum[i]="A";
        }else if (newnum[i]==11)
        {
            newnum[i]="B";
        }else if (newnum[i]==12)
        {
            newnum[i]="C";
        }else if (newnum[i]==13)
        {
            newnum[i]="D";
        }else if (newnum[i]==14)
        {
            newnum[i]="E";
        }else if (newnum[i]==15)
        {
            newnum[i]="F";
        }
        i++;
    }
    for (int m = i-1; m >= 0; m--)
    {
        finalarray[m]=newnum[m];
    }

    return finalarray[32];
    
}