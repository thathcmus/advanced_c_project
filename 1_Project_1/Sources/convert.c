#include "../Headers/convert.h"

#define BYTE_TO_BINARY(byte)  \
        (byte & 0x80 ? '1' : '0'), \
        (byte & 0x40 ? '1' : '0'), \
        (byte & 0x20 ? '1' : '0'), \
        (byte & 0x10 ? '1' : '0'), \
        (byte & 0x08 ? '1' : '0'), \
        (byte & 0x04 ? '1' : '0'), \
        (byte & 0x02 ? '1' : '0'), \
        (byte & 0x01 ? '1' : '0') 

void dec_to_bin(int dec)
{
    int count = 0;
    int result = 0b00000000;;
    while(dec != 0)
    {      
        if((dec % 2)) //du 1
            result |= (1 << count);
        count++;
        dec = dec / 2;
    }
    printf("\n0b%c%c%c%c%c%c%c%c", BYTE_TO_BINARY(result));
}