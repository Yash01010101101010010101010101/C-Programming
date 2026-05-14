#include <stdio.h>

int main()
{
    char c;
    int count = 0;

    printf("Enter a character: ");
    scanf(" %c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {

        count += 1;
        printf("Count = %d\n", count);
    }
    else
    {
        printf("%c is not a vowel.\n", c);
    }

    return 0;
}
