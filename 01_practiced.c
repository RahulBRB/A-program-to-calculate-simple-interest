#include<stdio.h>
int main (){ 

     int principle, rate, years;

     printf("Amount:");
     scanf("%d", &principle);

     printf("Rate:");
     scanf("%d", &rate);

     printf("No. of years:");
     scanf("%d", &years);

     int simpleIntereset = (principle*rate*years)/100;

     printf("Simple interest will be: %d.", simpleIntereset);

 return 0; 
 }