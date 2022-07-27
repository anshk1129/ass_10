#include<stdio.h>
void printing(int n);
int main(){
int n;
printf("enter the number\n");
scanf("%d",&n);
printing(n);
return 0;
}
void printing(int n)
{int i=1;
    while(i<=n)
    {
        printf("%d ",2*i-1);
        i++;
    }
}