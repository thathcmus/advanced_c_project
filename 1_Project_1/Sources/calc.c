#include "../Headers/calc.h"

int string_calc[] = {50, 51, 52, 53, 54, 55, 60, 57, 58, 59, 60, 60, 62, 63, 64, 65, 66, 67, 68, 69};

int get_size(int string[])
{
    return sizeof(string_calc)/sizeof(string[0]);
}

int sum_string(int string[])
{
    int sum = 0;
    for (int i = 0; i < get_size(string); i++)
    {
        sum += string[i];
    }
    return sum;
}

int max_string(int string[])
{
    int max = string[0];
    for (int i = 1; i < get_size(string); i++)
        if((string[i]) > max)
            max = string[i];
    return max;
}

int min_string(int string[])
{
    int min = string[0];
    for (int i = 1; i < get_size(string); i++)
        if((string[i]) < min)
            min = string[i];
    return min;
}

void search_(int string[])
{
    int s;
    int count = 0;
    printf("Nhap so can tim: ");
    scanf("%d", &s);
    for (int i = 1; i < get_size(string); i++)
    {
        if(string[i] == s)
        {
            printf("%d ", i);
            count++;
        }
            
    }
    if(count == 0) return 0;
}