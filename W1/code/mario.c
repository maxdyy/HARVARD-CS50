#include <cs50.h>
#include <stdio.h>

void generatePyramidRow(int rowWidth, int pyramidHeight)
{
    int emptySlots = pyramidHeight - rowWidth;

    for (int i = 0; i < emptySlots; i++)
    {
        printf(" ");
    }

    for (int i = 0; i < rowWidth; i++)
    {
        printf("#");
    }

    printf("  ");

    for (int i = 0; i < rowWidth; i++)
    {
        printf("#");
    }

    printf("\n");

}

void generatePyramid(int pyramidHeight)
{
    for (int i = 1; i <= pyramidHeight; i++)
    {
        int rowWidth = i;
        generatePyramidRow(rowWidth, pyramidHeight);
    }
}

int main(void)
{
    string question = "Choose how heigh the piramid should be (min 1 max 8):\n";
    int pyramidHeight = get_int("%s", question);

    while (pyramidHeight < 1 || pyramidHeight > 8)
    {
        pyramidHeight = get_int("%s", question);
    }
    generatePyramid(pyramidHeight);
}
