/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

char num_buf[6] = {0, 1, 2, 3, 4, 5};
int setting_flag = 0;

void events_init(lv_ui *ui)
{
}

void video_play(lv_ui *ui)
{

}

static void screen_btn_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	switch (code)
	{
	case LV_EVENT_PRESSED:
	{
		game_play();
	}
		break;
	default:
		break;
	}
}

static void screen_btn_2_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
  //lv_obj_t * obj = lv_event_get_target(e);
  lv_ui *ui = (lv_ui *)lv_event_get_user_data(e);
	switch (code)
	{
	case LV_EVENT_PRESSED:
	{
	  if(setting_flag == 0)
    {
      setting_flag = 1;
      lv_obj_move_foreground(ui->screen_tabview_1);
    }
    else
    {
      setting_flag = 0;
      lv_obj_move_background(ui->screen_tabview_1);
    }
	}
		break;
	default:
		break;
	}
}

static void screen_slider_2_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t * obj = lv_event_get_target(e);
	switch (code)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
    char buf[8];
    sprintf(buf,"%ld",lv_slider_get_value(obj));
		lv_obj_set_style_text_font(guider_ui.screen_label_6, &lv_font_montserratMedium_16, 0);
		lv_label_set_text(guider_ui.screen_label_6, buf);
	}
		break;
	default:
		break;
	}
}

static void screen_slider_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t * obj = lv_event_get_target(e);
	switch (code)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
    char buf[8];
    sprintf(buf,"%ld",lv_slider_get_value(obj));
		lv_obj_set_style_text_font(guider_ui.screen_label_5, &lv_font_montserratMedium_16, 0);
    lv_label_set_text(guider_ui.screen_label_5, buf);
	}
		break;
	default:
		break;
	}
}

static void Moles_hited_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_obj_t * obj = lv_event_get_target(e);
  int num = (int*)lv_event_get_user_data(e);
  if(game_times_up_flag == 0)
  {
    switch (code)
    {
      case LV_EVENT_PRESSED:
      {
        lv_img_set_src(obj,&_dishu_hit_45x40);
        //moles_hited_flag[num] = 1;
      }
       break;
      case LV_EVENT_RELEASED:
      {
        lv_img_set_src(obj,&_dishu_45x40);
        moles_hited_flag[num] = 1;
      }
       break;
      default:
        break;
    }
  }
}

static void again_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_ui * ui = lv_event_get_user_data(e);
  switch (code)
  {
  case LV_EVENT_PRESSED:
  {
    lv_obj_move_background(ui->screen_tileview_1);
    game_play();
  }
    break;
  default:
    break;
  }
}

static void close_btn_event_handler(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  lv_ui * ui = lv_event_get_user_data(e);
  switch (code)
  {
  case LV_EVENT_PRESSED:
  {
    lv_obj_move_background(ui->screen_tileview_1);
    lv_label_set_text(ui->screen_label_3, "0");       //show the num of moles you hit
    lv_label_set_text(ui->screen_label_4, "0");       //show the num of the moles you missed
    //reset_all();
  }
    break;
  default:
    break;
  }
}

void events_init_screen(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->screen_btn_1, screen_btn_1_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_btn_2, screen_btn_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_slider_2, screen_slider_2_event_handler, LV_EVENT_ALL, ui);
	lv_obj_add_event_cb(ui->screen_slider_1, screen_slider_1_event_handler, LV_EVENT_ALL, ui);
  
  lv_obj_add_event_cb(ui->screen_img_2, Moles_hited_event_handler, LV_EVENT_ALL, num_buf[0]);
  lv_obj_add_event_cb(ui->screen_img_4, Moles_hited_event_handler, LV_EVENT_ALL, num_buf[1]);
  lv_obj_add_event_cb(ui->screen_img_5, Moles_hited_event_handler, LV_EVENT_ALL, num_buf[2]);
  lv_obj_add_event_cb(ui->screen_img_6, Moles_hited_event_handler, LV_EVENT_ALL, num_buf[3]);
  lv_obj_add_event_cb(ui->screen_img_7, Moles_hited_event_handler, LV_EVENT_ALL, num_buf[4]);
  lv_obj_add_event_cb(ui->screen_img_8, Moles_hited_event_handler, LV_EVENT_ALL, num_buf[5]);
  
  lv_obj_add_event_cb(ui->screen_btn_3, again_btn_event_handler, LV_EVENT_ALL, ui);
  lv_obj_add_event_cb(ui->screen_btn_4, close_btn_event_handler, LV_EVENT_ALL, ui);
}
