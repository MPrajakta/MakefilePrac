#include"assign1.h"
#include<stdio.h>
int main(void)
{
        printFunc();
	printf("Hello\n");
        unsigned int arg = 0x01;
        unsigned int arg2 = 0x02;
        int compare = arg < arg2;
        printf("Compare=%d\n",compare);
        unsigned int arg3 = 0x0201;
        int length =0;
        unsigned int extract=0;
    
        for(length = 0; length < 2; length++)
        {
            extract = ((arg3 >> (8*length)) & 0xFF);
            printf("%d\n",extract);
        }
        return 0;
}
