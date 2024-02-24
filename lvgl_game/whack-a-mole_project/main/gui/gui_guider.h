/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_img_8;
	lv_obj_t *screen_img_7;
	lv_obj_t *screen_img_6;
	lv_obj_t *screen_img_5;
	lv_obj_t *screen_img_4;
	lv_obj_t *screen_img_1;
	lv_obj_t *screen_img_3;
	lv_obj_t *screen_img_2;
	lv_obj_t *screen_btn_1;
	lv_obj_t *screen_btn_1_label;
	lv_obj_t *screen_btn_2;
	lv_obj_t *screen_btn_2_label;
	lv_obj_t *screen_label_time;
	lv_obj_t *screen_label_2;
	lv_obj_t *screen_label_3;
	lv_obj_t *screen_label_4;
	lv_obj_t *screen_tabview_1;
	lv_obj_t *screen_tabview_1_Speed;
	lv_obj_t *screen_slider_1;
	lv_obj_t *screen_label_5;
	lv_obj_t *screen_tabview_1_Time;
	lv_obj_t *screen_label_6;
	lv_obj_t *screen_slider_2;
  lv_obj_t *screen_tileview_1;
  lv_obj_t *screen_tileview_1_tile_1;
  lv_obj_t *screen_btn_3;
  lv_obj_t *screen_btn_3_label;
  lv_obj_t *screen_label_7;
  lv_obj_t *screen_btn_4;
  lv_obj_t *screen_btn_4_label;
}lv_ui;

void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen(lv_ui *ui);
LV_IMG_DECLARE(_dishu_45x40);
LV_IMG_DECLARE(_beijing_480x320);
LV_IMG_DECLARE(_dishu_hit_45x40);

#ifdef __cplusplus
}
#endif
#endif
