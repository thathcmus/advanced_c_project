#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int mang[6][5] = {\
                {1,2,3,4,5},\
                {6,7,8,9,10},\
                {11,12,13,14,15},\
                {16,17,18,19,20},\
                {21,22,23,24,25},\
                {26,27,28,29,30},\
                };

// int mang[2][3] = {\
//                 {1,2,3},\
//                 {4,5,6}\
//                 };

void MaTran(int hang, int cot, int arr[hang][cot])
{
    int h, c;
    for(h = 0; h < hang; h++)
    {
        for(c = 0; c < cot; c++)
            printf("%d ",arr[h][c]);
        printf("\n");
    }
}

void printArr(int hang, int cot)
{
    int h, c;
    for(h = 0; h < hang; h++) // h = 0 h = 1
    {
        for(c = 0; c < cot; c++) // c = 0 c = 1 c = 2 c = 3
            printf("%d ",mang[h][c]);
        printf("\n");
        
    } 
}

int main()
{
    int a = 3;
    int b = 4;
    MaTran(a, b, mang);
    printf("==============\n");
    printArr(a, b);
    
    return 0;
}