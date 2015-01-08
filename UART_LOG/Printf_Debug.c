
#include "Printf_Debug.h"

struct __FILE { int handle; /* Add whatever you need here */ };
FILE __stdout;
FILE __stdin;

/*Add UART init API here*/
void PRINTF_Init()
{
	simple_uart_config(8, 9, 10, 11, false);
}

/*Add UART put API here*/
int fputc(int ch, FILE * p_file)
{
    simple_uart_put((uint8_t)ch);
    return ch;
}











