##HARVARD CS50 - Data Types, Operators, Conditional, Loops

In this part of Harvard CS50 course we will be having a deep dive into a new programming language called C.

C is a very traditional, old and text based language that can do a lot. 
We will have a look at functions, conditions, loops and other features of this language in order to understand how the building blocks of every software work.

Let's dive deep with this piece of "Hello World" code in C:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello World \n");
}
```

In this snippet of C code, the part that catches or eyes right away is the printf("Hello World");
This is the actual part that prints the "Hello World" string.

Now C, unlike JavaScript, is a **compiled language**. 
This means, that this piece of code needs to be transformed into binary code.
We have learned about binary code in [Week 0 of this course](https://maxdyy.com/post/cjz88luj8i897091025rqbbvv).

To do the compiling of our code, we need a **compiler program** that will take the input (our source code), and produce the input (the binary version of our code).

So to do that, first we need to save our code inside of a C file "hello.c", and using the terminal ([Stop Fearing the Terminal](https://maxdyy.com/post/cjq55ogviox5d0a840tv4xuc3)). 
We can use "clang" command (C language) and tell it to take our hello.c file as the input and produce a compiled binary hello file:

```shell script
clang -o hello hello.c
```

Now to run our code we can type this in the same terminal:

```shell script
./hello
```

and the result should be

```text
Hello World
```

**Congrats! This is how you write, compile and run code in C!**






