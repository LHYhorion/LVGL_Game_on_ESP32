/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */


#ifndef EVENTS_INIT_H_
#define EVENTS_INIT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"

void events_init(lv_ui *ui);
void video_play(lv_ui *ui);
void events_init_screen(lv_ui *ui);
extern void game_play();
extern void reset_all();
extern char moles_hited_flag[6];
extern char game_times_up_flag;

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
