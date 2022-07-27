#include<stdio.h>
int check(int n);
int main(){
int n,ch;
printf("Enter a number\n");
scanf("%d",&n);
ch=check(n);
if(ch==0)
printf("Odd\n");
else
printf("Even\n");
return 0;
}
int check(int n){
    if(n%2==0)
    return 1;
    return 0;
}