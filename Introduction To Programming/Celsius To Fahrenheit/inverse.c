
/*
Temperature conversion program
will be static and print the temperatures from C - F 
where C = Celsius 
and F = Fahrenheit

***** NOTE *****
for this short program I will name the variables
f = Fahrenheit
in larger scale programs variables must!
be implicit and easy to read

we implement a for loop to avoid all variables from 
celsius and fahrenheit files

***** NOTE *****

in our last example
for (f = 300; f >= 0; f = f -20){
        printf("%5.0lf\t\t%6.1lf\n", f, (5.0/9.0)*(f-32));
    }

we have something called magic numbers.
This is bad practice since are numbers not defined and hard to understand
when reading later.
Good practice is to have variable definitions and proper names
in this case we will define those as follow:

*/

#define LOWER 0 //lower limit for our table
#define UPPER 300 //max limit for our table
#define STEP 20 //counter for the steps taken

#include <stdio.h>

int main(){


    float f;

    printf("Temperature chart\n\nFahrenheit\tCelsius\n");
  
    for (f = UPPER; f >= LOWER; f = f - STEP){
        printf("%5.0lf\t\t%6.1lf\n", f, (5.0/9.0)*(f-32));
    }
    return 0;
}