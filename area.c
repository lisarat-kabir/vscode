#include<stdio.h>/*prinf,scanf defination*/
#define pi 3.14159;
int main (void){
    double radius;
    double area;
    double circum;
    /*Get circle radius*/
    printf("Enter the radius:");
    scanf("%lf,&radius");

    /*Calculatate the area*/
    area=pi * radius * radius;

     /*Calculatate the circum*/
    area=pi * radius *2;

    /*Display the area and circumference*/
    printf("The area is %.4f\n",area);
     printf("The circumference is %.4f\n",circum);

     return(0);


}
