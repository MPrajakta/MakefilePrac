#include"assign1.h"
#include<stdio.h>
int main(void)
{
        // testing function call in a different file
        printFunc();
	printf("Hello\n");
        // testing comparing bytes
        unsigned int arg = 0x01;
        unsigned int arg2 = 0x02;
        int compare = arg < arg2;
        printf("Compare=%d\n",compare);
        // byte extraction code
        unsigned int arg3 = 0x0201;
        int length =0;
        unsigned int extract=0;
    
        for(length = 0; length < 2; length++)
        {
            extract = ((arg3 >> (8*length)) & 0xFF);
            printf("%d\n",extract);
        }
        // byte extraction and comparison
        int length2 =0;
        unsigned int extract2= 0;
        for(length = 0; length < 1; length++ )
        {
            for (length2 = length+1; length2 < 2;length2++)
            {
                 //printf("length=%d\n",length);
                 extract = ((arg3 >> (8*length)) & 0xFF);
                 printf("extract= %d\n",extract);
                 //printf("length2=%d\n", length2);
                 extract2 =((arg3 >> (8*length2))& 0xFF) ;
                 printf("extract2 =%d\n",extract2);
                 if(extract < extract2)
                     printf("Byte 0 is smaller\n");
                 else
                     printf("Byte 1 is smaller\n");
            }
        }

        return 0;
}
