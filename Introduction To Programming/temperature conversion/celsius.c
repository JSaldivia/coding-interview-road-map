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
c = Celsius
in larger scale programs variables must!
be implicit and easy to read
*/

    float f, c;
    int lower, upper, step;

    lower = 0; //the lower limit of our program
    upper = 300; //upper limit
    step = 20; //step size

    c = lower;
    printf("Temperature chart\n");
    printf("Celsius\t\tFahrenheit\n");
    while (c <= upper){
        f = (c * (9.0/5.0)) + 32;
        printf("%5.0lf\t\t%6.1lf\n", c, f);
        c = c + step;
    }

    return 0;
}