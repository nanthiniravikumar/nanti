#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
int valid_digit(char *ip_str)
{
    while (*ip_str) {
        if (*ip_str >= '0' && *ip_str <= '9')
            ++ip_str;
        else
            return 0;
    }
    return 1;
}
 int is_valid_ip(char *ip_str)
{
    int i, num, dots = 0;
    char *ptr;
    if (ip_str == NULL)
        return 0;
    ptr = strtok(ip_str, DELIM);
    if (ptr == NULL)
        return 0;
    while (ptr) {
        if (!valid_digit(ptr))
            return 0;
        num = atoi(ptr);
        if (num >= 0 && num <= 255) {
            ptr = strtok(NULL, DELIM);
            if (ptr != NULL)
                ++dots;
        } else
            return 0;
    }
    if (dots != 3)
        return 0;
    return 1;
}
int main()
{
    char ip1[] = "128.0.0.251";
    char ip2[] = "128.16.100.1";
    char ip3[] = "128.512.100.1";
    char ip4[] = "125.512.200.cde";
    is_valid_ip(ip1)? printf("Valid\n"): printf("Not valid\n");
    is_valid_ip(ip2)? printf("Valid\n"): printf("Not valid\n");
    is_valid_ip(ip3)? printf("Valid\n"): printf("Not valid\n");
    is_valid_ip(ip4)? printf("Valid\n"): printf("Not valid\n");
    return 0;
}
