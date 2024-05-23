# Reflections

### Some common errors are forgetting the closing tags, semicolons at the end, wrong parenthesis, missplaced commas, and so on. 

Here I will describe what error I did, what the terminal wrote and what I learned.


# Statements: 
- [x] print("Hello World!!!\n");\ with an error: The statement is missing formating (printf = print with format).\

**Error:**
    ```hello.c:11:5: error: call to undeclared function 'print'; ISO C99 and later do not support implicit function declarations \[-Wimplicit-function-declaration\]
    print("Hello World!!!\n");```

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

on the second part we will have a link to the standard library with the specifications on the function "printf" and what parameters it contains