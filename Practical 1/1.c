#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int choice,start,len,i,n;

    printf("1.Substring\n");
    printf("2.Palindrome\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("Enter a string: ");
    scanf("%99s",str);

    n=strlen(str);

    switch(choice)
    {
        case 1:
            printf("Enter starting position: ");
            scanf("%d",&start);
            printf("Enter length: ");
            scanf("%d",&len);

            if(start<0||len<0||start>=n||start+len>n)
            {
                printf("Invalid position or length");
                return 1;
            }

            printf("Substring: ");
            for(i=start;i<start+len;i++)
                printf("%c",str[i]);
            printf("\n");
            break;

        case 2:
            for(i=0;i<n/2;i++)
            {
                if(str[i]!=str[n-1-i])
                {
                    printf("Not Palindrome\n");
                    return 0;
                }
            }
            printf("Palindrome\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
