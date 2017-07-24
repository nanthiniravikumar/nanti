#include <stdio.h> 
int main() 
{
    char arr1[100];
    int f, i, l;
    printf("Enter the sentence \n");
    gets(arr1);
    for(l=0; l<arr1[l]!='\0'; l++);
 if(arr1[0] >='a' && arr1[0]<='z')
 {  
        arr1[0] = arr1[0]  - 32;
    }
    for(i=1; i<l; i++) 
    {
        if(arr1[i] == ' ')
        {
            if(arr1[i+1] >='a' && arr1[i+1]<='z')
            {
            int j = i + 1;
            arr1[j] = arr1[j] - 32;
            }
        }
    }
    printf("%s",arr1);
    return 0;
}
