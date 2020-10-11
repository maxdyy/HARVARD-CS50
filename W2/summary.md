##HARVARD CS50 - Arrays, Functions, Variables and Scope

In this part of Harvard CS50 we will focus on the process of writing well-designed software by making more intelligent decisions.  
This will allow us to not just get the problem solved, but get it **solved well**.  

Considering this in the context of programming, we can use features of our programming languages to solve problems better.  
And we will do this first by using something that is called an **Array**.  

An **Array** is something that allows us to solve different problems.     
Let's say I have to keep track of some scores in my program and I want to print the average.  
In that case I would need to do something similar to this:

```c
#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int score1 = 10;
    int score2 = 30;
    int score3 = 50;

    printf("Average is: %i \n", (score1 + score2 + score3) / 3);
}
```

This way, by creating three different variables, we're allocating in the memory (RAM) of our computer 3 bytes, one for each int, that will contain the information about our score and that are also labeled with the name of the corresponding variable.  
But this is not the **best design**, it is very limited in terms of how many scores I can have, and in this case they always must be 3.  

And here Arrays are going to save us. So when we want to deal with values, that are kind of related, and in this specific case, we can definitely use Arrays.  

**An Array is a list of values that can be all of the same type stored in just one variable.**  

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int scores[3];
    scores[0] = 10;
    scores[1] = 30;
    scores[2] = 50;

    printf("Average is: %i \n", (scores[0] + scores[1] + scores[2]) / 3);
}
```

Declaring an Array this way ```scores[3]``` is like having three variables.  
When we assign a value like so ```scores[0] = 10;```, we're also telling where in the Array this value should be stored in. In this case is on **index 0**.  

Now that we have at least saved some copy & paste parts of out design, what might still be improved? Yes, it works, but we can make it better.  

We could improve it by making some changes:  

-  Make the user decide how many scores there will be
-  We could cycle through the scores number and make the user insert the score
-  Let the user know which score he/she is entering
-  Print the average based on the dynamic values

```c
#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    int n = get_int("Number of scores: ");
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    printf("Average is: %.1f \n", average(n, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / (float) length;
}
```  

So basically this is how Arrays can improve our design of the solution for the given problem.  

Curious enough, **Strings are Arrays**, they basically are Arrays of chars.  
Knowing this we can do the following:  
```c
string names[1];
names[0] = "EMMA";

printf("%s \n", names[0][0]);
```  

Telling our program to print the first character of the first item of our Array will result in just **E** char being printed.  
 

