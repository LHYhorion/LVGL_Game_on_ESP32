/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */

#include "bsp/esp-bsp.h"

#include "events_init.h"
#include "gui_guider.h"
#include "custom.h"

lv_ui guider_ui;

void app_main(void)
{
    /* Initialize I2C (for touch and audio) */
    bsp_i2c_init();
    /* Initialize display and LVGL */
    bsp_display_start();

    /* Set display brightness to 100% */
    bsp_display_backlight_on();

    bsp_display_lock(0);

    setup_ui(&guider_ui);
    events_init(&guider_ui);
    custom_init(&guider_ui);

    bsp_display_unlock();
}
