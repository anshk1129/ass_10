#include<stdio.h>
void calc(int i);
int main(){
    int n;
printf("Enter the number\n");
scanf("%d",&n);
calc(n);
return 0;
}
void calc(int i){
    int j=2;
    if(i==1){
        printf("%d ",i);
    return;
    }
    while(i!=1){
        if(i%j==0){
            i=i/j;
            printf("%d ",j);
        }
        else
        j++;
        
    }
}