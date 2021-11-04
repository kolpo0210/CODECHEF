#include <stdio.h>
int main(void)
{
    char word;

    scanf("%c", &word);

    if((word == 'A') || (word == 'E') || (word == 'I') || (word == 'O') || (word == 'U'))
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}
