#include <stdio.h>
#include <string.h>

int main()
{
    char string_one[100];
    char string_two[100];
    int length_one = 0;
    int length_two = 0;

    printf("give me a string");
    scanf("%s", string_one);
    printf("give me another string");
    scanf("%s", string_two);   

    length_one = strlen(string_one);
    length_two = strlen(string_two);

    int difference = 0;
    if (length_one > length_two)
    {   
        printf("the first string is longer than the second string\n");
        difference = length_one - length_two;
    }
    else if (length_one < length_two)
    {   
        printf("the first string is shorter than the second string\n");
        difference = length_two - length_one;
    }
    else
    {
        printf("the first string is equal to the second string\n");
    }
    return difference;
}
