/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL);
	lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_main_main_default
	static lv_style_t style_screen_main_main_default;
	if (style_screen_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_main_main_default);
	else
		lv_style_init(&style_screen_main_main_default);
	lv_style_set_bg_color(&style_screen_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_opa(&style_screen_main_main_default, 0);
	lv_obj_add_style(ui->screen, &style_screen_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_img_8
	ui->screen_img_8 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_img_8, 345, 219);
	lv_obj_set_size(ui->screen_img_8, 45, 40);
	lv_obj_set_scrollbar_mode(ui->screen_img_8, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_img_8_main_main_default
	static lv_style_t style_screen_img_8_main_main_default;
	if (style_screen_img_8_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_img_8_main_main_default);
	else
		lv_style_init(&style_screen_img_8_main_main_default);
	lv_style_set_img_recolor(&style_screen_img_8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_img_8_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_img_8_main_main_default, 255);
	lv_obj_add_style(ui->screen_img_8, &style_screen_img_8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_img_8, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_8,&_dishu_45x40);
	lv_img_set_pivot(ui->screen_img_8, 50,50);
	lv_img_set_angle(ui->screen_img_8, 0);

	//Write codes screen_img_7
	ui->screen_img_7 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_img_7, 218, 219);
	lv_obj_set_size(ui->screen_img_7, 45, 40);
	lv_obj_set_scrollbar_mode(ui->screen_img_7, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_img_7_main_main_default
	static lv_style_t style_screen_img_7_main_main_default;
	if (style_screen_img_7_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_img_7_main_main_default);
	else
		lv_style_init(&style_screen_img_7_main_main_default);
	lv_style_set_img_recolor(&style_screen_img_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_img_7_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_img_7_main_main_default, 255);
	lv_obj_add_style(ui->screen_img_7, &style_screen_img_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_img_7, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_7,&_dishu_45x40);
	lv_img_set_pivot(ui->screen_img_7, 50,50);
	lv_img_set_angle(ui->screen_img_7, 0);

	//Write codes screen_img_6
	ui->screen_img_6 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_img_6, 92, 219);
	lv_obj_set_size(ui->screen_img_6, 45, 40);
	lv_obj_set_scrollbar_mode(ui->screen_img_6, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_img_6_main_main_default
	static lv_style_t style_screen_img_6_main_main_default;
	if (style_screen_img_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_img_6_main_main_default);
	else
		lv_style_init(&style_screen_img_6_main_main_default);
	lv_style_set_img_recolor(&style_screen_img_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_img_6_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_img_6_main_main_default, 255);
	lv_obj_add_style(ui->screen_img_6, &style_screen_img_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_img_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_6,&_dishu_45x40);
	lv_img_set_pivot(ui->screen_img_6, 50,50);
	lv_img_set_angle(ui->screen_img_6, 0);

	//Write codes screen_img_5
	ui->screen_img_5 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_img_5, 345, 143);
	lv_obj_set_size(ui->screen_img_5, 45, 40);
	lv_obj_set_scrollbar_mode(ui->screen_img_5, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_img_5_main_main_default
	static lv_style_t style_screen_img_5_main_main_default;
	if (style_screen_img_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_img_5_main_main_default);
	else
		lv_style_init(&style_screen_img_5_main_main_default);
	lv_style_set_img_recolor(&style_screen_img_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_img_5_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_img_5_main_main_default, 255);
	lv_obj_add_style(ui->screen_img_5, &style_screen_img_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_img_5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_5,&_dishu_45x40);
	lv_img_set_pivot(ui->screen_img_5, 50,50);
	lv_img_set_angle(ui->screen_img_5, 0);

	//Write codes screen_img_4
	ui->screen_img_4 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_img_4, 218, 143);
	lv_obj_set_size(ui->screen_img_4, 45, 40);
	lv_obj_set_scrollbar_mode(ui->screen_img_4, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_img_4_main_main_default
	static lv_style_t style_screen_img_4_main_main_default;
	if (style_screen_img_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_img_4_main_main_default);
	else
		lv_style_init(&style_screen_img_4_main_main_default);
	lv_style_set_img_recolor(&style_screen_img_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_img_4_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_img_4_main_main_default, 255);
	lv_obj_add_style(ui->screen_img_4, &style_screen_img_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_img_4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_4,&_dishu_45x40);
	lv_img_set_pivot(ui->screen_img_4, 50,50);
	lv_img_set_angle(ui->screen_img_4, 0);

	//Write codes screen_img_1
	ui->screen_img_1 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_img_1, 0, 0);
	lv_obj_set_size(ui->screen_img_1, 480, 320);
	lv_obj_set_scrollbar_mode(ui->screen_img_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_img_1_main_main_default
	static lv_style_t style_screen_img_1_main_main_default;
	if (style_screen_img_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_img_1_main_main_default);
	else
		lv_style_init(&style_screen_img_1_main_main_default);
	lv_style_set_img_recolor(&style_screen_img_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_img_1_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_img_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_img_1, &style_screen_img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_1,&_beijing_480x320);
	lv_img_set_pivot(ui->screen_img_1, 50,50);
	lv_img_set_angle(ui->screen_img_1, 0);

	//Write codes screen_img_3
	ui->screen_img_3 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_img_3, 218, 219);
	lv_obj_set_size(ui->screen_img_3, 45, 40);
	lv_obj_set_scrollbar_mode(ui->screen_img_3, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_img_3_main_main_default
	static lv_style_t style_screen_img_3_main_main_default;
	if (style_screen_img_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_img_3_main_main_default);
	else
		lv_style_init(&style_screen_img_3_main_main_default);
	lv_style_set_img_recolor(&style_screen_img_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_img_3_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_img_3_main_main_default, 255);
	lv_obj_add_style(ui->screen_img_3, &style_screen_img_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_img_3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_3,&_dishu_hit_45x40);
	lv_img_set_pivot(ui->screen_img_3, 50,50);
	lv_img_set_angle(ui->screen_img_3, 0);

	//Write codes screen_img_2
	ui->screen_img_2 = lv_img_create(ui->screen);
	lv_obj_set_pos(ui->screen_img_2, 92, 143);
	lv_obj_set_size(ui->screen_img_2, 45, 40);
	lv_obj_set_scrollbar_mode(ui->screen_img_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_img_2_main_main_default
	static lv_style_t style_screen_img_2_main_main_default;
	if (style_screen_img_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_img_2_main_main_default);
	else
		lv_style_init(&style_screen_img_2_main_main_default);
	lv_style_set_img_recolor(&style_screen_img_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_img_recolor_opa(&style_screen_img_2_main_main_default, 0);
	lv_style_set_img_opa(&style_screen_img_2_main_main_default, 255);
	lv_obj_add_style(ui->screen_img_2, &style_screen_img_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_img_2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_img_2,&_dishu_45x40);
	lv_img_set_pivot(ui->screen_img_2, 50,50);
	lv_img_set_angle(ui->screen_img_2, 0);

	//Write codes screen_btn_1
	ui->screen_btn_1 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_1, 325, 6);
	lv_obj_set_size(ui->screen_btn_1, 65, 35);
	lv_obj_set_scrollbar_mode(ui->screen_btn_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_1_main_main_default
	static lv_style_t style_screen_btn_1_main_main_default;
	if (style_screen_btn_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_1_main_main_default);
	else
		lv_style_init(&style_screen_btn_1_main_main_default);
	lv_style_set_radius(&style_screen_btn_1_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_1_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_1_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_1_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_1_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_1_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_1_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_1, &style_screen_btn_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_1_label = lv_label_create(ui->screen_btn_1);
	lv_label_set_text(ui->screen_btn_1_label, "Start");
	lv_obj_set_style_pad_all(ui->screen_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_1_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_btn_2
	ui->screen_btn_2 = lv_btn_create(ui->screen);
	lv_obj_set_pos(ui->screen_btn_2, 398, 6);
	lv_obj_set_size(ui->screen_btn_2, 65, 35);
	lv_obj_set_scrollbar_mode(ui->screen_btn_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_btn_2_main_main_default
	static lv_style_t style_screen_btn_2_main_main_default;
	if (style_screen_btn_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_btn_2_main_main_default);
	else
		lv_style_init(&style_screen_btn_2_main_main_default);
	lv_style_set_radius(&style_screen_btn_2_main_main_default, 5);
	lv_style_set_bg_color(&style_screen_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_btn_2_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_btn_2_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_btn_2_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_border_color(&style_screen_btn_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_btn_2_main_main_default, 0);
	lv_style_set_border_opa(&style_screen_btn_2_main_main_default, 255);
	lv_style_set_text_color(&style_screen_btn_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_btn_2_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_align(&style_screen_btn_2_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_obj_add_style(ui->screen_btn_2, &style_screen_btn_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_btn_2_label = lv_label_create(ui->screen_btn_2);
	lv_label_set_text(ui->screen_btn_2_label, "Setting");
	lv_obj_set_style_pad_all(ui->screen_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_btn_2_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_label_time
	ui->screen_label_time = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_time, 190, 6);
	lv_obj_set_size(ui->screen_label_time, 100, 32);
	lv_obj_set_scrollbar_mode(ui->screen_label_time, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_time, "000");
	lv_label_set_long_mode(ui->screen_label_time, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_time_main_main_default
	static lv_style_t style_screen_label_time_main_main_default;
	if (style_screen_label_time_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_time_main_main_default);
	else
		lv_style_init(&style_screen_label_time_main_main_default);
	lv_style_set_radius(&style_screen_label_time_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_time_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_time_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_time_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_time_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_time_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_time_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_time_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_time_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_time_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_time_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_time_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_label_time_main_main_default, &lv_font_montserratMedium_26);
	lv_style_set_text_letter_space(&style_screen_label_time_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_time_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_time_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_label_time_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_time_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_time_main_main_default, 0);
	lv_style_set_pad_bottom(&style_screen_label_time_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_time, &style_screen_label_time_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_2
	ui->screen_label_2 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_2, 11, 6);
	lv_obj_set_size(ui->screen_label_2, 138, 53);
	lv_obj_set_scrollbar_mode(ui->screen_label_2, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_2, "Hits:\nMisses:\n");
	lv_label_set_long_mode(ui->screen_label_2, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_2_main_main_default
	static lv_style_t style_screen_label_2_main_main_default;
	if (style_screen_label_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_2_main_main_default);
	else
		lv_style_init(&style_screen_label_2_main_main_default);
	lv_style_set_radius(&style_screen_label_2_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_2_main_main_default, lv_color_make(0xf1, 0x93, 0xc0));
	lv_style_set_bg_grad_color(&style_screen_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_2_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_2_main_main_default, 116);
	lv_style_set_shadow_width(&style_screen_label_2_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_2_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_2_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_2_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_2_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_label_2_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_screen_label_2_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_2_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_2_main_main_default, LV_TEXT_ALIGN_LEFT);
	lv_style_set_pad_left(&style_screen_label_2_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_2_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_2_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_2_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_2, &style_screen_label_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_3
	ui->screen_label_3 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_3, 62, 6);
	lv_obj_set_size(ui->screen_label_3, 57, 31);
	lv_obj_set_scrollbar_mode(ui->screen_label_3, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_3, "0");
	lv_label_set_long_mode(ui->screen_label_3, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_3_main_main_default
	static lv_style_t style_screen_label_3_main_main_default;
	if (style_screen_label_3_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_3_main_main_default);
	else
		lv_style_init(&style_screen_label_3_main_main_default);
	lv_style_set_radius(&style_screen_label_3_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_3_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_3_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_3_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_3_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_3_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_3_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_3_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_label_3_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_screen_label_3_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_3_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_3_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_label_3_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_3_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_3_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_3_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_3, &style_screen_label_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_4
	ui->screen_label_4 = lv_label_create(ui->screen);
	lv_obj_set_pos(ui->screen_label_4, 92, 28);
	lv_obj_set_size(ui->screen_label_4, 54, 31);
	lv_obj_set_scrollbar_mode(ui->screen_label_4, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_4, "0");
	lv_label_set_long_mode(ui->screen_label_4, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_4_main_main_default
	static lv_style_t style_screen_label_4_main_main_default;
	if (style_screen_label_4_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_4_main_main_default);
	else
		lv_style_init(&style_screen_label_4_main_main_default);
	lv_style_set_radius(&style_screen_label_4_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_4_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_4_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_4_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_4_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_4_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_4_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_4_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_label_4_main_main_default, &lv_font_montserratMedium_20);
	lv_style_set_text_letter_space(&style_screen_label_4_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_4_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_4_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_label_4_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_4_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_4_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_4_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_4, &style_screen_label_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_tabview_1
	ui->screen_tabview_1 = lv_tabview_create(ui->screen, LV_DIR_TOP, 50);
	lv_obj_set_pos(ui->screen_tabview_1, 123, 91);
	lv_obj_set_size(ui->screen_tabview_1, 235, 144);

	//Speed
	ui->screen_tabview_1_Speed = lv_tabview_add_tab(ui->screen_tabview_1,"Speed");

	//Time
	ui->screen_tabview_1_Time = lv_tabview_add_tab(ui->screen_tabview_1,"Time");


	//Write style state: LV_STATE_DEFAULT for style_screen_tabview_1_main_main_default
	static lv_style_t style_screen_tabview_1_main_main_default;
	if (style_screen_tabview_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tabview_1_main_main_default);
	else
		lv_style_init(&style_screen_tabview_1_main_main_default);
	lv_style_set_radius(&style_screen_tabview_1_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_tabview_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_tabview_1_main_main_default, lv_color_make(0xea, 0xef, 0xf3));
	lv_style_set_bg_grad_dir(&style_screen_tabview_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_tabview_1_main_main_default, 255);
	lv_style_set_shadow_width(&style_screen_tabview_1_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_tabview_1_main_main_default, lv_color_make(0xf5, 0x85, 0xba));
	lv_style_set_shadow_opa(&style_screen_tabview_1_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_tabview_1_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_tabview_1_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_tabview_1_main_main_default, 0);
	lv_style_set_border_color(&style_screen_tabview_1_main_main_default, lv_color_make(0x13, 0xda, 0xfd));
	lv_style_set_border_width(&style_screen_tabview_1_main_main_default, 2);
	lv_style_set_border_opa(&style_screen_tabview_1_main_main_default, 255);
	lv_style_set_text_color(&style_screen_tabview_1_main_main_default, lv_color_make(0xc9, 0xe6, 0x0f));
	lv_style_set_text_font(&style_screen_tabview_1_main_main_default, &lv_font_montserratMedium_12);
	lv_style_set_text_letter_space(&style_screen_tabview_1_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_tabview_1_main_main_default, 16);
	lv_obj_add_style(ui->screen_tabview_1, &style_screen_tabview_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_tabview_1_extra_btnm_main_default
	static lv_style_t style_screen_tabview_1_extra_btnm_main_default;
	if (style_screen_tabview_1_extra_btnm_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tabview_1_extra_btnm_main_default);
	else
		lv_style_init(&style_screen_tabview_1_extra_btnm_main_default);
	lv_style_set_radius(&style_screen_tabview_1_extra_btnm_main_default, 0);
	lv_style_set_bg_color(&style_screen_tabview_1_extra_btnm_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_tabview_1_extra_btnm_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_tabview_1_extra_btnm_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_tabview_1_extra_btnm_main_default, 255);
	lv_style_set_border_color(&style_screen_tabview_1_extra_btnm_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_tabview_1_extra_btnm_main_default, 0);
	lv_style_set_border_opa(&style_screen_tabview_1_extra_btnm_main_default, 100);
	lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_tabview_1), &style_screen_tabview_1_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_tabview_1_extra_btnm_items_default
	static lv_style_t style_screen_tabview_1_extra_btnm_items_default;
	if (style_screen_tabview_1_extra_btnm_items_default.prop_cnt > 1)
		lv_style_reset(&style_screen_tabview_1_extra_btnm_items_default);
	else
		lv_style_init(&style_screen_tabview_1_extra_btnm_items_default);
	lv_style_set_text_color(&style_screen_tabview_1_extra_btnm_items_default, lv_color_make(0x4d, 0x4d, 0x4d));
	lv_style_set_text_font(&style_screen_tabview_1_extra_btnm_items_default, &lv_font_montserratMedium_12);
	lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_tabview_1), &style_screen_tabview_1_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for style_screen_tabview_1_extra_btnm_items_checked
	static lv_style_t style_screen_tabview_1_extra_btnm_items_checked;
	if (style_screen_tabview_1_extra_btnm_items_checked.prop_cnt > 1)
		lv_style_reset(&style_screen_tabview_1_extra_btnm_items_checked);
	else
		lv_style_init(&style_screen_tabview_1_extra_btnm_items_checked);
	lv_style_set_radius(&style_screen_tabview_1_extra_btnm_items_checked, 0);
	lv_style_set_bg_color(&style_screen_tabview_1_extra_btnm_items_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_tabview_1_extra_btnm_items_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_tabview_1_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_tabview_1_extra_btnm_items_checked, 60);
	lv_style_set_border_color(&style_screen_tabview_1_extra_btnm_items_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_border_width(&style_screen_tabview_1_extra_btnm_items_checked, 4);
	lv_style_set_border_opa(&style_screen_tabview_1_extra_btnm_items_checked, 255);
	lv_style_set_border_side(&style_screen_tabview_1_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
	lv_style_set_text_color(&style_screen_tabview_1_extra_btnm_items_checked, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_text_font(&style_screen_tabview_1_extra_btnm_items_checked, &lv_font_montserratMedium_12);
	lv_obj_add_style(lv_tabview_get_tab_btns(ui->screen_tabview_1), &style_screen_tabview_1_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

	//Write codes screen_slider_1
	ui->screen_slider_1 = lv_slider_create(ui->screen_tabview_1_Speed);
	lv_obj_set_pos(ui->screen_slider_1, 4, 1);
	lv_obj_set_size(ui->screen_slider_1, 187, 14);
	lv_obj_set_scrollbar_mode(ui->screen_slider_1, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_slider_1_main_main_default
	static lv_style_t style_screen_slider_1_main_main_default;
	if (style_screen_slider_1_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_slider_1_main_main_default);
	else
		lv_style_init(&style_screen_slider_1_main_main_default);
	lv_style_set_radius(&style_screen_slider_1_main_main_default, 50);
	lv_style_set_bg_color(&style_screen_slider_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_slider_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_slider_1_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_slider_1_main_main_default, 60);
	lv_style_set_shadow_width(&style_screen_slider_1_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_slider_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_slider_1_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_slider_1_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_slider_1_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_slider_1_main_main_default, 0);
	lv_style_set_outline_color(&style_screen_slider_1_main_main_default, lv_color_make(0xeb, 0x7f, 0xb8));
	lv_style_set_outline_width(&style_screen_slider_1_main_main_default, 0);
	lv_style_set_outline_opa(&style_screen_slider_1_main_main_default, 255);
	lv_obj_add_style(ui->screen_slider_1, &style_screen_slider_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_slider_1_main_indicator_default
	static lv_style_t style_screen_slider_1_main_indicator_default;
	if (style_screen_slider_1_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_screen_slider_1_main_indicator_default);
	else
		lv_style_init(&style_screen_slider_1_main_indicator_default);
	lv_style_set_radius(&style_screen_slider_1_main_indicator_default, 50);
	lv_style_set_bg_color(&style_screen_slider_1_main_indicator_default, lv_color_make(0xdf, 0xe4, 0x33));
	lv_style_set_bg_grad_color(&style_screen_slider_1_main_indicator_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_slider_1_main_indicator_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_slider_1_main_indicator_default, 255);
	lv_obj_add_style(ui->screen_slider_1, &style_screen_slider_1_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_slider_1_main_knob_default
	static lv_style_t style_screen_slider_1_main_knob_default;
	if (style_screen_slider_1_main_knob_default.prop_cnt > 1)
		lv_style_reset(&style_screen_slider_1_main_knob_default);
	else
		lv_style_init(&style_screen_slider_1_main_knob_default);
	lv_style_set_radius(&style_screen_slider_1_main_knob_default, 50);
	lv_style_set_bg_color(&style_screen_slider_1_main_knob_default, lv_color_make(0xf1, 0x9b, 0xd2));
	lv_style_set_bg_grad_color(&style_screen_slider_1_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_slider_1_main_knob_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_slider_1_main_knob_default, 255);
	lv_obj_add_style(ui->screen_slider_1, &style_screen_slider_1_main_knob_default, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_slider_set_range(ui->screen_slider_1,0, 100);
	lv_slider_set_value(ui->screen_slider_1,50,false);

	//Write codes screen_label_5
	ui->screen_label_5 = lv_label_create(ui->screen_tabview_1_Speed);
	lv_obj_set_pos(ui->screen_label_5, 49, 29);
	lv_obj_set_size(ui->screen_label_5, 100, 32);
	lv_obj_set_scrollbar_mode(ui->screen_label_5, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_5, "50");
	lv_label_set_long_mode(ui->screen_label_5, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_5_main_main_default
	static lv_style_t style_screen_label_5_main_main_default;
	if (style_screen_label_5_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_5_main_main_default);
	else
		lv_style_init(&style_screen_label_5_main_main_default);
	lv_style_set_radius(&style_screen_label_5_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_5_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_5_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_5_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_5_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_5_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_5_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_5_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_5_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label_5_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_screen_label_5_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_5_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_5_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_label_5_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_5_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_5_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_5_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_5, &style_screen_label_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_label_6
	ui->screen_label_6 = lv_label_create(ui->screen_tabview_1_Time);
	lv_obj_set_pos(ui->screen_label_6, 49, 29);
	lv_obj_set_size(ui->screen_label_6, 100, 32);
	lv_obj_set_scrollbar_mode(ui->screen_label_6, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_label_6, "50");
	lv_label_set_long_mode(ui->screen_label_6, LV_LABEL_LONG_WRAP);

	//Write style state: LV_STATE_DEFAULT for style_screen_label_6_main_main_default
	static lv_style_t style_screen_label_6_main_main_default;
	if (style_screen_label_6_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_label_6_main_main_default);
	else
		lv_style_init(&style_screen_label_6_main_main_default);
	lv_style_set_radius(&style_screen_label_6_main_main_default, 0);
	lv_style_set_bg_color(&style_screen_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_label_6_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_label_6_main_main_default, 0);
	lv_style_set_shadow_width(&style_screen_label_6_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_label_6_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_label_6_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_label_6_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_label_6_main_main_default, 0);
	lv_style_set_text_color(&style_screen_label_6_main_main_default, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen_label_6_main_main_default, &lv_font_montserratMedium_16);
	lv_style_set_text_letter_space(&style_screen_label_6_main_main_default, 2);
	lv_style_set_text_line_space(&style_screen_label_6_main_main_default, 0);
	lv_style_set_text_align(&style_screen_label_6_main_main_default, LV_TEXT_ALIGN_CENTER);
	lv_style_set_pad_left(&style_screen_label_6_main_main_default, 0);
	lv_style_set_pad_right(&style_screen_label_6_main_main_default, 0);
	lv_style_set_pad_top(&style_screen_label_6_main_main_default, 8);
	lv_style_set_pad_bottom(&style_screen_label_6_main_main_default, 0);
	lv_obj_add_style(ui->screen_label_6, &style_screen_label_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_slider_2
	ui->screen_slider_2 = lv_slider_create(ui->screen_tabview_1_Time);
	lv_obj_set_pos(ui->screen_slider_2, 4, 1);
	lv_obj_set_size(ui->screen_slider_2, 187, 14);
	lv_obj_set_scrollbar_mode(ui->screen_slider_2, LV_SCROLLBAR_MODE_OFF);

	//Write style state: LV_STATE_DEFAULT for style_screen_slider_2_main_main_default
	static lv_style_t style_screen_slider_2_main_main_default;
	if (style_screen_slider_2_main_main_default.prop_cnt > 1)
		lv_style_reset(&style_screen_slider_2_main_main_default);
	else
		lv_style_init(&style_screen_slider_2_main_main_default);
	lv_style_set_radius(&style_screen_slider_2_main_main_default, 50);
	lv_style_set_bg_color(&style_screen_slider_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_color(&style_screen_slider_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_slider_2_main_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_slider_2_main_main_default, 60);
	lv_style_set_shadow_width(&style_screen_slider_2_main_main_default, 0);
	lv_style_set_shadow_color(&style_screen_slider_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_shadow_opa(&style_screen_slider_2_main_main_default, 255);
	lv_style_set_shadow_spread(&style_screen_slider_2_main_main_default, 0);
	lv_style_set_shadow_ofs_x(&style_screen_slider_2_main_main_default, 0);
	lv_style_set_shadow_ofs_y(&style_screen_slider_2_main_main_default, 0);
	lv_style_set_outline_color(&style_screen_slider_2_main_main_default, lv_color_make(0xeb, 0x7f, 0xb8));
	lv_style_set_outline_width(&style_screen_slider_2_main_main_default, 0);
	lv_style_set_outline_opa(&style_screen_slider_2_main_main_default, 255);
	lv_obj_add_style(ui->screen_slider_2, &style_screen_slider_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_slider_2_main_indicator_default
	static lv_style_t style_screen_slider_2_main_indicator_default;
	if (style_screen_slider_2_main_indicator_default.prop_cnt > 1)
		lv_style_reset(&style_screen_slider_2_main_indicator_default);
	else
		lv_style_init(&style_screen_slider_2_main_indicator_default);
	lv_style_set_radius(&style_screen_slider_2_main_indicator_default, 50);
	lv_style_set_bg_color(&style_screen_slider_2_main_indicator_default, lv_color_make(0xdf, 0xe4, 0x33));
	lv_style_set_bg_grad_color(&style_screen_slider_2_main_indicator_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_slider_2_main_indicator_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_slider_2_main_indicator_default, 255);
	lv_obj_add_style(ui->screen_slider_2, &style_screen_slider_2_main_indicator_default, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for style_screen_slider_2_main_knob_default
	static lv_style_t style_screen_slider_2_main_knob_default;
	if (style_screen_slider_2_main_knob_default.prop_cnt > 1)
		lv_style_reset(&style_screen_slider_2_main_knob_default);
	else
		lv_style_init(&style_screen_slider_2_main_knob_default);
	lv_style_set_radius(&style_screen_slider_2_main_knob_default, 50);
	lv_style_set_bg_color(&style_screen_slider_2_main_knob_default, lv_color_make(0xf1, 0x9b, 0xd2));
	lv_style_set_bg_grad_color(&style_screen_slider_2_main_knob_default, lv_color_make(0x21, 0x95, 0xf6));
	lv_style_set_bg_grad_dir(&style_screen_slider_2_main_knob_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_slider_2_main_knob_default, 255);
	lv_obj_add_style(ui->screen_slider_2, &style_screen_slider_2_main_knob_default, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_slider_set_range(ui->screen_slider_2,0, 100);
	lv_slider_set_value(ui->screen_slider_2,50,false);

  //Write codes screen_tileview_1
  ui->screen_tileview_1 = lv_tileview_create(ui->screen);
  lv_obj_set_pos(ui->screen_tileview_1, 83, 95);
  lv_obj_set_size(ui->screen_tileview_1, 314, 131);
  lv_obj_set_scrollbar_mode(ui->screen_tileview_1, LV_SCROLLBAR_MODE_ON);

  //Write style state: LV_STATE_DEFAULT for style_screen_tileview_1_main_main_default
  static lv_style_t style_screen_tileview_1_main_main_default;
  if (style_screen_tileview_1_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_tileview_1_main_main_default);
  else
    lv_style_init(&style_screen_tileview_1_main_main_default);
  lv_style_set_radius(&style_screen_tileview_1_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_tileview_1_main_main_default, lv_color_make(0xf6, 0xf6, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_tileview_1_main_main_default, lv_color_make(0xf6, 0xf6, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_tileview_1_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_tileview_1_main_main_default, 192);
  lv_style_set_shadow_width(&style_screen_tileview_1_main_main_default, 30);
  lv_style_set_shadow_color(&style_screen_tileview_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_tileview_1_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_tileview_1_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_tileview_1_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_tileview_1_main_main_default, 0);
  lv_obj_add_style(ui->screen_tileview_1, &style_screen_tileview_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write style state: LV_STATE_DEFAULT for style_screen_tileview_1_main_scrollbar_default
  static lv_style_t style_screen_tileview_1_main_scrollbar_default;
  if (style_screen_tileview_1_main_scrollbar_default.prop_cnt > 1)
    lv_style_reset(&style_screen_tileview_1_main_scrollbar_default);
  else
    lv_style_init(&style_screen_tileview_1_main_scrollbar_default);
  lv_style_set_radius(&style_screen_tileview_1_main_scrollbar_default, 0);
  lv_style_set_bg_color(&style_screen_tileview_1_main_scrollbar_default, lv_color_make(0xea, 0xef, 0xf3));
  lv_style_set_bg_opa(&style_screen_tileview_1_main_scrollbar_default, 255);
  lv_obj_add_style(ui->screen_tileview_1, &style_screen_tileview_1_main_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

  //add new tile screen_tileview_1_tile_1
  ui->screen_tileview_1_tile_1 = lv_tileview_add_tile(ui->screen_tileview_1, 0, 0, LV_DIR_RIGHT);

  //Write codes screen_btn_3
  ui->screen_btn_3 = lv_btn_create(ui->screen_tileview_1_tile_1);
  lv_obj_set_pos(ui->screen_btn_3, 24, 65);
  lv_obj_set_size(ui->screen_btn_3, 100, 50);
  lv_obj_set_scrollbar_mode(ui->screen_btn_3, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_btn_3_main_main_default
  static lv_style_t style_screen_btn_3_main_main_default;
  if (style_screen_btn_3_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_btn_3_main_main_default);
  else
    lv_style_init(&style_screen_btn_3_main_main_default);
  lv_style_set_radius(&style_screen_btn_3_main_main_default, 30);
  lv_style_set_bg_color(&style_screen_btn_3_main_main_default, lv_color_make(0xe6, 0x70, 0xb8));
  lv_style_set_bg_grad_color(&style_screen_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_btn_3_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_btn_3_main_main_default, 206);
  lv_style_set_shadow_width(&style_screen_btn_3_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_btn_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_btn_3_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_btn_3_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_btn_3_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_btn_3_main_main_default, 0);
  lv_style_set_border_color(&style_screen_btn_3_main_main_default, lv_color_make(0xe6, 0x70, 0xb8));
  lv_style_set_border_width(&style_screen_btn_3_main_main_default, 0);
  lv_style_set_border_opa(&style_screen_btn_3_main_main_default, 255);
  lv_style_set_text_color(&style_screen_btn_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_btn_3_main_main_default, &lv_font_montserratMedium_16);
  lv_style_set_text_align(&style_screen_btn_3_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_obj_add_style(ui->screen_btn_3, &style_screen_btn_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  ui->screen_btn_3_label = lv_label_create(ui->screen_btn_3);
  lv_label_set_text(ui->screen_btn_3_label, "Again");
  lv_obj_set_style_pad_all(ui->screen_btn_3, 0, LV_STATE_DEFAULT);
  lv_obj_align(ui->screen_btn_3_label, LV_ALIGN_CENTER, 0, 0);

  //Write codes screen_label_7
  ui->screen_label_7 = lv_label_create(ui->screen_tileview_1_tile_1);
  lv_obj_set_pos(ui->screen_label_7, 3, 5);
  lv_obj_set_size(ui->screen_label_7, 307, 36);
  lv_obj_set_scrollbar_mode(ui->screen_label_7, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_7, "Wow, well done!!!");
  lv_label_set_long_mode(ui->screen_label_7, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_7_main_main_default
  static lv_style_t style_screen_label_7_main_main_default;
  if (style_screen_label_7_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_7_main_main_default);
  else
    lv_style_init(&style_screen_label_7_main_main_default);
  lv_style_set_radius(&style_screen_label_7_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_7_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_7_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_7_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_7_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_7_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_7_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_7_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_7_main_main_default, lv_color_make(0x48, 0x4a, 0x87));
  lv_style_set_text_font(&style_screen_label_7_main_main_default, &lv_font_montserratMedium_26);
  lv_style_set_text_letter_space(&style_screen_label_7_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_7_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_7_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_7_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_7_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_7_main_main_default, 8);
  lv_style_set_pad_bottom(&style_screen_label_7_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_7, &style_screen_label_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_btn_4
  ui->screen_btn_4 = lv_btn_create(ui->screen_tileview_1_tile_1);
  lv_obj_set_pos(ui->screen_btn_4, 188, 66);
  lv_obj_set_size(ui->screen_btn_4, 100, 50);
  lv_obj_set_scrollbar_mode(ui->screen_btn_4, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_btn_4_main_main_default
  static lv_style_t style_screen_btn_4_main_main_default;
  if (style_screen_btn_4_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_btn_4_main_main_default);
  else
    lv_style_init(&style_screen_btn_4_main_main_default);
  lv_style_set_radius(&style_screen_btn_4_main_main_default, 30);
  lv_style_set_bg_color(&style_screen_btn_4_main_main_default, lv_color_make(0xe6, 0x70, 0xb8));
  lv_style_set_bg_grad_color(&style_screen_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_btn_4_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_btn_4_main_main_default, 206);
  lv_style_set_shadow_width(&style_screen_btn_4_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_btn_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_btn_4_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_btn_4_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_btn_4_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_btn_4_main_main_default, 0);
  lv_style_set_border_color(&style_screen_btn_4_main_main_default, lv_color_make(0xe6, 0x70, 0xb8));
  lv_style_set_border_width(&style_screen_btn_4_main_main_default, 0);
  lv_style_set_border_opa(&style_screen_btn_4_main_main_default, 255);
  lv_style_set_text_color(&style_screen_btn_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_btn_4_main_main_default, &lv_font_montserratMedium_16);
  lv_style_set_text_align(&style_screen_btn_4_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_obj_add_style(ui->screen_btn_4, &style_screen_btn_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  ui->screen_btn_4_label = lv_label_create(ui->screen_btn_4);
  lv_label_set_text(ui->screen_btn_4_label, "Close");
  lv_obj_set_style_pad_all(ui->screen_btn_4, 0, LV_STATE_DEFAULT);
  lv_obj_align(ui->screen_btn_4_label, LV_ALIGN_CENTER, 0, 0);

  lv_obj_move_background(ui->screen_tileview_1);
  lv_obj_move_background(ui->screen_tabview_1);

	//Init events for screen
	events_init_screen(ui);
}
