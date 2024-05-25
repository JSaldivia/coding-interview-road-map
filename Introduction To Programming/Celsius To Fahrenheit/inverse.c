
/*
Temperature conversion program
will be static and print the temperatures from C - F 
where C = Celsius 
and F = Fahrenheit
*/

#include <stdio.h>

int main(){

/*
***** NOTE *****
for this short program I will name the variables
f = Fahrenheit
in larger scale programs variables must!
be implicit and easy to read

we implement a for loop to avoid all variables from 
celsius and fahrenheit files
*/

    float f;

    printf("Temperature chart\n\nFahrenheit\tCelsius\n");
  
    for (f = 300; f >= 0; f = f -20){
        printf("%5.0lf\t\t%6.1lf\n", f, (5.0/9.0)*(f-32));
    }
    return 0;
}