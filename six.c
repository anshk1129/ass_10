#include<stdio.h>
int fact(int n);
int main(){
int n;
printf("enter the number\n");
scanf("%d",&n);
printf("factorial is %d",fact(n));
return 0;
}
int fact(int n)
{int i=1,n1=1;
    while(i<=n)
    {
        n1=n1*i;
        i++;
    }
    return n1;
}