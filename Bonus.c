#include <stdio.h>
#include <stdlib.h>
void print_reverse(char string[], int n)
{
    if (n == 1)
        printf("%c", string[n - 1]);
    else
    {
        printf("%c", string[n - 1]);
        print_reverse(string, n - 1);
    }
}
int main()
{
    char *string = "hello";
    int n = 5;
    print_reverse(string, n);
}