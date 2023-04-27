#include "uart.h"
unsigned char string_buffer[100] = "learn-in-depth: Monica" ;

void main(void)
{
	UART_SendString (string_buffer);
}