# Reflections

### Some common errors are forgetting the closing tags, semicolons at the end, wrong parenthesis, missplaced commas, and so on. 

Here I will describe what error I did, what the terminal wrote and what I learned.


# Error List: 
- [x] print("Hello World!!!\n"); with an error: 
The statement is missing formating (printf = print with format).\
- [x] printf(Hello World!!!\n);

    
### print("Hello World!!!\n");
**Error message:**
```    
    hello.c:11:5: error: call to undeclared function 'print'; ISO C99 and later do not support implicit function declarations \[-Wimplicit-function-declaration\]
    print("Hello World!!!\n");
```
>[!NOTE]hello.c:11:5 is telling us where the error is
- [x] First: Which file contains the error (in this case is in hello.c).
- [x] Second: The cursor location and line of the error (location 11 on line 5).
- [x] third: A description on the error followed by the actual line

**Second part**
    the second part will tell us a possible solution (not always).
    ```hello.c:11:5: note: did you mean 'printf'?
        /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h:167:6: note: 'printf' declared here
int      
        printf(const char * __restrict, ...) __printflike(1, 2);
         ^
1 error generated.```

We will notice a link to the standard library with the specifications on the function "printf" and what parameters takes, this is important to know for future references. 


### printf(Hello World!!!\n);
**Error message:**
```
hello.c:11:12: error: use of undeclared identifier 'Hello'; did you mean 'ftello'?
    printf(Hello World!!!\n);
           ^~~~~
           ftello
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h:331:8: note: 'ftello' declared here
off_t    ftello(FILE * __stream);
         ^
1 error generated.
```
>[!NOTE]hello.c:11:12 is telling us where the error is
When missing both quotation marks on a string will get the message:
**error:**
```
error: use of undeclared identifier 'Hello'; did you mean 'ftello'?
    printf(Hello World!!!\n);
           ^~~~~
           ftello
```
Followed by a the library documentation. 
The error stated has nothing to do with the quotation marks but its making reference to another type of errors. 

### print(Hello World!!!"\n);
**Error message:**
```
hello.c:12:6: error: call to undeclared function 'print'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
     print(Hello World!!!"\n);
     ^
hello.c:12:6: note: did you mean 'printf'?
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h:167:6: note: 'printf' declared here
int      printf(const char * __restrict, ...) __printflike(1, 2);
         ^
hello.c:12:12: error: use of undeclared identifier 'Hello'; did you mean 'ftello'?
     print(Hello World!!!"\n);
           ^~~~~
           ftello
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h:331:8: note: 'ftello' declared here
off_t    ftello(FILE * __stream);
         ^
hello.c:12:26: warning: missing terminating '"' character [-Winvalid-pp-token]
     print(Hello World!!!"\n);
                         ^
1 warning and 2 errors generated.
```
**ERROR**
Using print instead printf
```hello.c:12:6: note: did you mean 'printf'?
```
**ERROR**
having only one quotation mark in the string instead of the correct way

```hello.c:12:12: error: use of undeclared identifier 'Hello'; did you mean 'ftello'?
     print(Hello World!!!"\n);
           ^~~~~
           ftello
           
```
### printf("Hello World!!!\n")
*Missing ending semicoilon*
**ERROR MESSAGE**
```hello.c:13:31: error: expected ';' after expression
    printf("Hello World!!!\n")
                              ^
                              ;
1 error generated.
```
This error is more common than I can remember and still happen to me very often, it is nice to get familiar with the errors and how to read them in our terminal. 

### printf("Hello" World!!!\n);
*Wrapping "Hello" in quotation marks and leaving the rest of the string out*
**ERROR MESSAGE**
```hello.c:14:20: error: expected ')'
    printf("Hello" World!!!\n);
                   ^
hello.c:14:11: note: to match this '('
    printf("Hello" World!!!\n);
          ^
1 error generated.
```
> [!NOTE] > The opening parenthesys should match the clossing one and also the quotatin in a string!

### printf("Hello World!!!\n";
```hello.c:15:30: error: expected ')'
    printf("Hello World!!!\n";
                             ^
hello.c:15:11: note: to match this '('
    printf("Hello World!!!\n";
          ^
1 error generated.
```
> [!NOTE] > If we miss an open/clossing parentesis will have the error telling us what's expected
> Same for the following errors:
**ERROR**
```Hello World! $ gcc -Wall -o hello hello.c
hello.c:15:30: error: expected ')'
    printf("Hello World!!!\n";
                             ^
hello.c:15:11: note: to match this '('
    printf("Hello World!!!\n";
          ^
1 error generated.
Hello World! $ gcc -Wall -o hello hello.c
hello.c:15:30: error: expected ')'
    printf("Hello World!!!\n";
                             ^
hello.c:15:11: note: to match this '('
    printf("Hello World!!!\n";

```
### print()"Hello World!!!\n");
**Error Messages:**
```hello.c:16:5: error: call to undeclared function 'print'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
    print()"Hello World!!!\n");
    ^
hello.c:16:5: note: did you mean 'printf'?
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h:167:6: note: 'printf' declared here
int      printf(const char * __restrict, ...) __printflike(1, 2);
         ^
hello.c:16:12: error: expected ';' after expression
    print()"Hello World!!!\n");
           ^
           ;
hello.c:16:30: error: extraneous ')' before ';'
    print()"Hello World!!!\n");
                             ^
hello.c:16:12: warning: expression result unused [-Wunused-value]
    print()"Hello World!!!\n");
           ^~~~~~~~~~~~~~~~~~
1 warning and 3 errors generated.

```
> [!NOTE]
> This errors are telling us where the error/warnings are the important part is to read them carrefully starting from "where the error is located" (Which line) followed by the type of error and then we can figure a plan on how to solve it
>There are more tests that can be done in order to know more on a simple string "Hello World!!!" errors, but I feel the point has been made. 
