#include "../Headers/m_string.h"


int check_equal(int a[], int size_a, int b[], int size_b)
{
    if(size_a != size_b) return 0;
    else
    for(int i = 0; i < size_a; i++)
    {
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

void insert_string(int from[], int from_size, int to[], int to_size, int loc)
{
    int new_size = from_size + to_size;
    int new_string[new_size];
    if(loc >= to_size) loc = to_size;

    if(loc == 0)
    {
        for(int i = 0; i < from_size; i++)
        {
            new_string[i] = from[i];
        }
        for(int i = from_size; i < new_size; i++)
        {
            new_string[i] = to[i - from_size];
        }
    }
    else if(loc == to_size)
    {
        for(int i = 0; i < to_size; i++)
        {
            new_string[i] = to[i];
        }
        for(int i = to_size; i < new_size; i++)
        {
            new_string[i] = from[i - to_size];
        }
    }
    else
    {
        for(int i = 0; i < loc; i++)
        {
            new_string[i] = to[i];
        }
        for(int i = loc; i < loc + from_size; i++)
        {
            new_string[i] = from[i - loc];
        }
        for(int i = loc + from_size; i < new_size; i++)
        {
            new_string[i] = to[i - from_size];
        }
    }
    printf("\n");
    for(int i = 0; i < new_size; i++)
    printf("%d ", new_string[i]);
}