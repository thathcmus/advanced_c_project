#include "../Headers/convert.h"


// #define BYTE_TO_BINARY(byte)  \
//         (byte & 0x80 ? '1' : '0'), \
//         (byte & 0x40 ? '1' : '0'), \
//         (byte & 0x20 ? '1' : '0'), \
//         (byte & 0x10 ? '1' : '0'), \
//         (byte & 0x08 ? '1' : '0'), \
//         (byte & 0x04 ? '1' : '0'), \
//         (byte & 0x02 ? '1' : '0'), \
//         (byte & 0x01 ? '1' : '0') 

void dec_to_bin(int dec)
{
    int count = 0;
    int bin[8];
    while(dec != 0)
    {      
        bin[count] = dec % 2;
        count++;
        dec = dec / 2;
    }
    for(int print_count = count - 1; print_count >= 0; print_count --)
        printf("%d", bin[print_count]);
}

void dec_to_hex(int dec)
{
    int count = 0;
    char hex[2];
    while(dec != 0)
    {
        int temp = 0;
        temp = dec % 16;
        if(temp < 10) hex[count] =  temp + 48;
        else hex[count] =  temp + 55;
        count++;
        dec = dec / 16;
    }
    for(int print_count = count - 1; print_count >= 0; print_count --)
        printf("%c", hex[print_count]);
}