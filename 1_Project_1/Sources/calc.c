#include "../Headers/calc.h"


// unsigned long long get_size(int string[])
// {
//     return sizeof(string) / sizeof(string[0]);
// }

int sum_string(int string[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += string[i];
    }
    return sum;
}

int max_string(int string[], int n)
{
    int max = string[0];
    for (int i = 1; i < n; i++)
        if((string[i]) > max)
            max = string[i];
    return max;
}

int min_string(int string[], int n)
{
    int min = string[0];
    for (int i = 1; i < n; i++)
        if((string[i]) < min)
            min = string[i];
    return min;
}

void search_(int string[], int n)
{
    int s;
    int count = 0;
    printf("Nhap so can tim: ");
    scanf("%d", &s);
    for (int i = 1; i < n; i++)
    {
        if(string[i] == s)
        {
            printf("%d ", i);
            count++;
        }
            
    }
    if(count == 0) return 0;
}