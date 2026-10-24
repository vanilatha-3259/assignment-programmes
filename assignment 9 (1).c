#include <stdio.h>

int main() 
{
    char h;
    
    printf("Enter your character: ");
    
    scanf(" %c", &h); 
    
    if (h == 'a' || h == 'e' || h == 'i' || h == 'o' || h == 'u' ||
        h == 'A' || h == 'E' || h == 'I' || h == 'O' || h == 'U')
    {
        printf("vowel\n");
    }
    else 
    {
        printf("consonant\n");
    }
    
    return 0;
}
