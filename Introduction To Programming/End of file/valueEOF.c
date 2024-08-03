/*
This program should print the value on the end of file 
*/


/*
This code block will compare if (getchar() != EOF)
this will return a 1 or 6 for the variable c
since booleans (true or false) are returning 1 or 0
will print the code miltiple times until the 0 is reach
or EOF (EOF = 0).
*/

/*
#include <stdio.h>

int main() {
    int c;
    while (c = getchar() != EOF){
        printf("The value of c is: %d \n", c);
        putchar(c);
        printf("The value of c is: %d \n", c);

    }
    printf("Exit");

    return 0;
}
*/

/*snipet to print the value of EOF*/

/*
EOF evaluates to -1 because all characters are positive numbers
it was needed to have adistinctive break point (escape character)
for the function EOF to work properly
*/

#include <stdio.h>

int main() {
        printf("The value of EOF is: %d\n", EOF); //printing the value of EOF
        printf("\nThe value of !=EOF is: %d\n", getchar()!=EOF); //printing the value of getchar if its not = to eof
        // printf("\nThe value of Getchar is: %d\n", getchar());

    return 0;
}