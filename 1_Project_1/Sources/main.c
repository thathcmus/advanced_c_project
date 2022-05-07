#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "../Headers/calc.h"
#include "../Headers/convert.h"
#include "../Headers/m_string.h"

int string_calc[] = {50, 51, 52, 53, 54, 55, 60, 57, 58, 59, 60, 60, 62, 63, 64, 65, 66, 67, 68, 69};
int string_add[] = {666, 777, 888}; //use compare and insert to string_calc


int main()
{
    /* Calc.c */
    // printf("Tong chuoi: %d", sum_string(string_calc, sizeof(string_calc)/sizeof(string_calc[0])));
    // printf("\nMax chuoi: %d", max_string(string_calc, sizeof(string_calc)/sizeof(string_calc[0])));
    // printf("\nMin chuoi: %d", min_string(string_calc, sizeof(string_calc)/sizeof(string_calc[0])));
    // printf("\nTim chuoi -> ");
    // search_(string_calc, sizeof(string_calc)/sizeof(string_calc[0]));

    /* Convert.c */
    // dec_to_bin(254);
    // printf("\n");
    // dec_to_hex(254);

    /* m_string.c */
    // printf("- %d -\n", check_equal(string_calc, sizeof(string_calc)/sizeof(string_calc[0]), string_add, sizeof(string_add)/sizeof(string_add[0])));
    // insert_string(string_add, sizeof(string_add)/sizeof(string_add[0]), string_calc, sizeof(string_calc)/sizeof(string_calc[0]), 0);
    // insert_string(string_add, sizeof(string_add)/sizeof(string_add[0]), string_calc, sizeof(string_calc)/sizeof(string_calc[0]), 6);
    // insert_string(string_add, sizeof(string_add)/sizeof(string_add[0]), string_calc, sizeof(string_calc)/sizeof(string_calc[0]), 20);
    return 0;
}
