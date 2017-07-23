#include <stdio.h>
int main()
{
    int low, high, h, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);
while (low < high)
    {
        flag = 0;
    for(h= 2; h<= low/2; ++h)
        {
            if(low % h == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }
}
