/* Copyright (c) 2009 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 *
 * @defgroup blinky_example_main main.c
 * @{
 * @ingroup blinky_example
 * @brief Blinky Example Application main file.
 *
 */

#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "boards.h"
#include "Printf_Debug.h"

/**
 * @brief Function for application main entry.
 */
int main(void)
{
	uint8_t index[] = "haha adf ";
	PRINTF_Init();
    while (true)
    {
		PRINTF_LOG("loop1 \r\n");
		PRINTF_DEBUG("loop2 \r\n");
		PRINTF_DEBUG("The data is %s", index);
		nrf_delay_ms(2000);
    }
}
/** @} */
