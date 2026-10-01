#include <stdio.h>
int main()
{
    char str[100];
    int i, start, len;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter starting position: ");
    scanf("%d", &start);
    printf("Enter length: ");
    scanf("%d", &len);
    printf("Substring: ");
    for(i = start; i < start + len; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char str[100];
    int i, len = 0;
    printf("Enter string: ");
    scanf("%s", str);
    while(str[len] != '\0')
    {
        len++;
    }
    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-1-i])
        {
            printf("Not Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}
