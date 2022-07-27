#include<stdio.h>
float area(float r);
int main(){
    float r;
printf("Enter the radius of a circle\n");
scanf("%f",&r);
printf("The area is %f",area(r));
return 0;
}
float area(float r){
    return 3.14*r*r;
}