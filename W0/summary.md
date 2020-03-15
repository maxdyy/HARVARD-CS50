#HARVARD CS50 - From binary to letters and colours

**What computer science is?**

Computer science is about problem solving, and very often solving problems as a team and using computers.
Computers are very simple, at the end of the day it’s a tool the rather has o not the electricity.
And electricity is the main resource to drives all the technology.

So by deciding if there is electricity or no, we can define a binary system, and computers speak this exact language of 0s and 1s which is called binary.
This binary language is a direct mapping between no-electricity/0 and electric/1.


**But if computers can only do zeros and ones, how they can do useful things?**

In the same way that we have different numerical patterns.
Like for example 123 for us humans is “one hundred twenty three”,  computers can also recognise patterns but based on place 1, 2, 4, 8, 16, 32 etc.
Therefore computers are using the powers of two, not surprisingly binary.

 Therefor for computer a representation of number 3 is the following:

| Position | 2 | 1 |
|----------|---|---|
| Value    | 1 | 1 | 

The representation of number 4 is the following:


| Position | 4 | 2 | 1 |
|----------|---|---|---|
| Value    | 1 | 0 | 0 |


So theoretically we can represent any number that we want with binary, only if we have enough of bits.


**But what are these bits?**

Bits are slots that can store a binary value, so for example if I have 3 bits I can store a value up to 7 if all of theme are storing a 1.

**All of this is amazing, but how do we store more useful information in binary? How do we get from 0 and 1 to letters?**

We just need to agree that any letter has a constant value, let’s say letter A is 65, B is represented by 66 and C is 67 and so on.
This system is called **ASCII, or American Standard Code** for Information Interchange.
So this is how we can represent HI! In ASCII and binary

| Symbol | H       | I       | !      |
|--------|---------|---------|--------|
| ASCII  | 77      | 73      | 33     |
| Binary | 1001000 | 1001001 | 100001 |



But ASCII cannot represent all the symbols that we use for communication, therefore we started to use something called Unicode, where we can actually use one or two or three or even four bytes. So eight bits or 16 bits, 24 bits, or even 32 bits to represent characters. And now, we have the ability to represent thousands or even millions of characters. Unicode is often a specific version of it called UTF-8.


Now once we solved the problem of communication via binary, **how can we represent colours and therefore images with our binary system?**

Our screen is made by pixels, that are little dots and all images that we see on our screen is actually a sequence of pixels each lighting with a specific color.
So we can use also a system which says to each pixel in which colour should it light up, and this system is called **RGB - red, green, blue**.
This system uses 3 bytes, each byte to specify ho much of a color between Red Green and Blue should a pixel display.
So we can say that each byte can go from a range 0 to 255, where 0 means no color and 255 means most of a color.


Let’s say we want a nice pastel orange colour, now an RGB representation of such a colour would be 255, 178, 71.

| Red   | Green | Blue|
|-------|-----|-------|
| 255 | 178 | 71 |

So in this case, we would say to our pixel, give us maximum of red, being 255, give us 178 of green and 71 of blue, therefore rgb(255, 178, 71).

And we can conclude that **every image, video or user interface in our computers is a collection of data in RGB code system that is then translated into binary**.
