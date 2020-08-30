#include <stdio.h>
#include <string.h>
void concatString()
{
    int i = 0;
    char input[20];
    char _exit[] = "exit";
    char result[1000];
    do
    {
        printf("Result is : %s \n", result);
        scanf("%s", input);
        printf("Input is : %s \n", input);
        if (strcmp(input, _exit) == 0)
        {
            i = 1;
        }
        else
        {
            strcat(result, input);
            strcat(result, " ");
        }

    } while (i != 1);
}
void main()
{
    printf("Welcome to string input program\n");
    concatString();
}
