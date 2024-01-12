#include<stdio.h>
int main()
{
    char ch;
    // Prompt user for input
    printf("Enter a character: ");
    scanf("%c", &ch);
    // Check if the entered character is an alphabet
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an alphabet.\n", ch);
    }
    // Check if the entered character is a digit
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit.\n", ch);
    }
    // If neither an alphabet nor a digit
    else
    {
        printf("%c is neither an alphabet nor a digit.\n", ch);
    }
    return 0;
}
