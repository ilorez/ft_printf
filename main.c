
#include "ft_printf.h"

int main()
{
    char *ptr = "Hello, world!";
    ft_printf("number: %d\npointer:%p\nHexa: %x\nHEXA: %X\nString: %s\n", 33, ptr, 146545, 1654654540,"my string" );
    printf("number: %d\npointer:%p\nHexa: %x\nHEXA: %X\nString: %s\n", 33, ptr, 146545, 1654654540,"my string" );
    //printf("number: %d\npointer:%p\nHexa: %x\nHEXA: %X\nString: %s\n", 33, ptr, 10, 10,"my string" );
    return 0;
}



