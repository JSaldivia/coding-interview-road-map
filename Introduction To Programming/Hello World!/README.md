# Here we will be working on the classic "Hello World!!!" print statement.\ Describing common errors when the statement is not correct by making mistakes
## Goal: 

***Learn how to read the comand line or terminal messages and feel comfortable with those errors***

## Program description: 
    Print "Hello World!!!" message in terminal using C programming language.

## Program:
    ```
    #include <stdio.h> //Standar input output library

    int main (){
        //print instead of printf
        print("Hello World!!!\n");

    return 0;
    }
    ```

### To run this program I will be typing on the terminal the following command:
```gcc -Wall -o hello hello.c```

> [!NOTE]Makefile:
> for future programs I will be using a makefile that will contain all the nessesary flags
> This will keep the program more organized and readable.