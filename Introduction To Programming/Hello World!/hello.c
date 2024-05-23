//This program is the classic hello world that we make in each programming language

//Goals:
// print hello world with mistake and describe how the compiler describe those warnings/errors

#include <stdio.h> //Standar input output library

int main (){
    //print with format
    // print("Hello World!!!\n");   // print instead of printf
    // printf(Hello World!!!\n);    // no quotations in the string
    //print("Hello World!!!\n);     // missing only one quotation mark  
    // printf("Hello World!!!\n")   // Missing ending semicoilon
    // printf("Hello" World!!!\n);  // Wrapping "Hello" in quotation marks but not the whole string
    // printf ("Hello World!!!\n";
    printf("Hello World!!!\n");

    return 0;
}