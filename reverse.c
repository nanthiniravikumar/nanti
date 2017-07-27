#include <stdio.h>
#include <string.h>
 
int main()
{
    char string[100], reverse[100];
    int len, i, index, wordStart, wordEnd;
 
    printf("Enter any string: ");
    gets(string);
 
    len   = strlen(string);
    index = 0;
      wordStart = len - 1;
    wordEnd  = len - 1;
 
    while(wordStart > 0)
    {
        if(string[wordStart] == ' ')
        {
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = string[i];
 
                i++;
              index++;
            }
            reverse[index++] = ' ';
            wordEnd = wordStart - 1;
        }
        wordStart--;
    }
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = string[i];
        index++;
    }
    reverse[index] = '\0'; 
    printf("Original string \n%s\n\n", string);
    printf("Reverse ordered words \n%s", reverse);
    return 0;
}
