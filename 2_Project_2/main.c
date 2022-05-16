#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
void name_string(int size)
{
    char name[size];
    int count = 0;
    char ch;
    while(count < size || ch != 0x0A)
    {
        ch = getchar();
        name[count] = ch;
        printf("%c", name[count]);
        count++;
    }
}

int main()
{
    name_string(20);   
	return 0;
}