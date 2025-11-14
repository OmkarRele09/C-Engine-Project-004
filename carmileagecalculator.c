#include <stdio.h>
int main(){
float distance , liters , mileage;
printf("Enter Distance travelled\n");
scanf("%f" ,&distance);
printf("Enter liters of fuel used\n");
scanf("%f" ,&liters);
mileage = distance / liters;
printf("The mileage of the vehicle is %f\n" , mileage);
    return 0;
}