
#ifndef PRINTF_DEBUG_H_
#define PRINT_DEBUG_H_

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdarg.h>

#include "simple_uart.h"
	
/*select to shielding related functions*/
#define DEBUG_ENABLE
#define LOG_ENABLE

/*According to above selection to choice different function*/
#ifdef LOG_ENABLE
#define LOG 					printf
#else
#define LOG(...)
#endif
#ifdef DEBUG_ENABLE
#define	DEBUG					printf
#else
#define DEBUG(...)
#endif

/*user use*/
#define PRINTF_DEBUG			DEBUG
#define PRINTF_LOG				LOG			


void PRINTF_Init(void);
	
#endif
