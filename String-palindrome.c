#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char a[100];

    printf("Enter the String: ");
    fgets(s, 100, stdin);

    // // Remove newline
    s[strcspn(s, "\n")] = '\0';

    // Copy original string to another
    strcpy(a, s);

    // Reverse the copied string
    strrev(a);

    // Compare
    if (strcmp(s, a) == 0)
    {
        printf("The String Is Palindrome: %s\n", s);
    }
    else
    {
        printf("The String Is Not Palindrome: %s\n", s);
    }

    return 0;
}
