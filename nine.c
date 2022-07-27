#include<stdio.h>
int check(int n);
int main(){
int n,ch;
printf("Enter\n");
scanf("%d",&n);
ch=check(n);
if(ch==1)
printf("digit\n");
else
printf("not a digit\n");
return 0;
}
int check(int n){
    if(n>=0&&n<=9)
    return 1;
    return 0;
}