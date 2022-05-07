#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "../Headers/calc.h"
#include "../Headers/convert.h"
#include "../Headers/m_string.h"

int extern string_calc[];
int main()
{
    int a;
    // printf("Tong chuoi: %d", sum_string(string_calc));
    // printf("\nMax chuoi: %d", max_string(string_calc));
    // printf("\nMin chuoi: %d", min_string(string_calc));
    // printf("\nTim chuoi -> ");
    // search_(string_calc);

    dec_to_bin(30);
    dec_to_bin(112);
    return 0;
}
