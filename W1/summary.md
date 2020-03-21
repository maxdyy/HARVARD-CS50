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


Now let's start experimenting with strings.  
**Strings are a sequence of zero or more characters in double quotes ("hello", "2020", "$%^").**

Now from here we are going to use the [CS50 Library for C](https://cs50.readthedocs.io/library/c/) in order to get some custom functions.  
Or you can use the [CS50 sandbox](https://sandbox.cs50.io/) in your browser.  
I'm going to stick with the sandbox for the convenience.  

Let's improve our program by adding some new features!   
We want our program to ask the name of the user and then say "Hello, username".  


```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name?\n")
    printf("Hello, \n", answer);
}
```

Here, we have imported the **<cs50.h>** library first.  
Then we have defined our function as before.  
We have created a new string named **answer** that contains the result of **get_string** function.  
And as the last thing we are printing the "Hello, " string with the **answer**.  

After compiling our code (we can skip using clang with arguments and use **make** instead) with

```shell script
make hello
```

we can run our updated function with 

```shell script
./hello
```

which should ask us

```text
What's your name?
```

and after we have entered our name (in my case Max) and pressed enter, the result should be

```text
What's your name?
Max
Hello, Max
```

**So yeah, that's it, simple as that!**

So as we can see in our example, **C is a strongly typed language**.  
This means that we need to explicitly tell what type of data we are storing in our variables.  

```c 
string myString = "hello";
int myNumber = 1;
```

Data types are needed when we declare our variables, but when we want to change the value, we can just assign a new one like so

```c
myString = "hello again";
myNumber = myNumber + 1;
```

In C we also have other features common to other languages like conditions

```c
if (myNumber < 5) 
{
    printf("your number is less than 5")
}
else if (myNumber == 5)
{
    printf("your number is 5") 
}
else
{
   printf("your number is more than 5") 
{
```

Here we can see the equality operators being used:
**<** First operand less than second operand  
**>** First operand greater than second operand

And the **else** also equals to **(myNumber == 5)**   
**==** First operand equal to second operand

In C there are also **loops**.
A loop executes a block of code as long as it's boolean expression is true.

```c
int myNumber = 0;
while (myNumber < 5) 
{
    printf("hello, world\n");
    myNumber = myNumber + 1;
}
```

This loop will be executed 5 times, each time it will print **hello, world** and increase myNumber by 1.  
On the fifth run myNumber will be 5 so the **(myNumber < 5)** expression is no longer *true* making the loop stop.

```text
hello, world
hello, world
hello, world
hello, world
hello, world
```

There is also a **for** loop, that is a bit more mechanical to write, but it can do just what we have done before with the **while** loop.  

```c
for (int i = 0; i < 5; i++)
{
    printf("hello, world\n");
}
```

So here the **i = 0** is the same as declaring **int myNumber = 0;**  
The **i < 5;** is the boolean expression that must be *true*, same as **myNumber < 5**  
And the increment of our counter **i++** at the end of each loop, same as **myNumber = myNumber + 1;**  

The result is the same:

```text
hello, world
hello, world
hello, world
hello, world
hello, world
```

In C we have a whole list of data types besides strings and int, and here are some of the most used:  

**bool** Boolean, a value of *true* or *false*  
**char** Character, which is a single character  
**double** Double, a decimal number with double precision  
**float** Float, a decimal number with single precision   
**int** Integer, stores a number  
**long** Long, a data type that has a bigger storage size  
**string** String, a sequence of zero or more characters in double quotes  



