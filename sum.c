#include<stdio.h>
void main()
{
int i, N ;
oddsum=0;                                  
evensum=0;
printf(" Enter the value of N\n");
scanf("%d" , &N);
for( i=1 ; i<=N ; i++ )
{
if(i%2 ==0)
{
evensum=evensum+ i;
}
else
{
oddsum=oddsum+i;
}
}
printf(" Sum of Odd Numbers = %d" , oddsum);
printf(" Sum of Even Numbers = %d" , evensum);
}

