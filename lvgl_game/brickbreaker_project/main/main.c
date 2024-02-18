/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */

#include "bsp/esp-bsp.h"

#include "ballgame.h"

void app_main(void)
{
    /* Initialize I2C (for touch and audio) */
    bsp_i2c_init();
    /* Initialize display and LVGL */
    bsp_display_start();

    /* Set display brightness to 100% */
    bsp_display_backlight_on();

    bsp_display_lock(0);

    ballgame_start();

    bsp_display_unlock();
}
