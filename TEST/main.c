#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
void get_string(int n)
{
    int string[n];

    for (int i = 0; i < n; i++)
    {
        string[i] = rand();
        printf("%d ", string[i]);
    }
}
int main()
{
    get_string(10);
    return 0;
}