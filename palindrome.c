//program to check if a word is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    int len, flag = 0;

    printf("Enter your string\n");
    scanf("%s", str);

    len = strlen(str);

    // Checking if the string is a palindrome
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("The word is a palindrome\n");
    else
        printf("The word is not a palindrome\n");

    return 0;
}
